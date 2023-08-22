import os
import subprocess
import numpy as np
from sklearn.model_selection import train_test_split
from util.dataLoader import DataLoader
import util.common as com
from sklearn.metrics import accuracy_score
from sklearn.metrics import confusion_matrix

from port_sklearnporter.sklearnporter_builder import SkLearnPorterBuilder
from port_emlearn.emlearn_builder import EmlearnBuilder
from port_micromlgen.micromlgen_builder import MicromlgenBuilder

class ClassifierBuilder(DataLoader):
    data_logger = list()

    def __init__(self) -> None:
        """
        Initialize the ClassifierBuilder.

        This constructor initializes the ClassifierBuilder by calling the parent DataLoader constructor
        and loading input data.

        """
        # Call parent constructor and load input data
        super(ClassifierBuilder, self).__init__()
        self.dataset = self.load_data()

        self.builder = None

        # Load benchmark baseline
        self.benchmark_info = com.yaml_load()

        # Load dataset used for benchmarking
        self.__load_dataset()

    def __load_dataset(self):
        """
        Load the dataset for benchmarking.

        This method loads the user-defined data or falls back to default datasets if not implemented.

        """
        # Load user-defined data
        self.dataset = self.load_data()

        # Fallback to default datasets supported if user-defined data is not implemented
        if self.dataset == None:
            # If dataset is the sklearn Iris dataset.
            if self.benchmark_info["training"]["default_dataset"] == 'iris':
                from sklearn.datasets import load_iris
                self.iris_data = load_iris()
                self.X = self.iris_data.data
                self.y = self.iris_data.target
                self.X_train, self.X_test, self.y_train, self.y_test = train_test_split(self.X, self.y, test_size=0.25, random_state=50)

    def print_log_summary(self):
        """
        Print summary of log messages.

        This method prints a summary of error messages from the data logger.

        """
        #search an entry of type (('sklearn-porter', 'extra_trees'), "`.text' will not fit in region `text'")
        merged_errors = {}
        # Get error message entry
        for error in self.data_logger:
            # Get framework and classifier name
            key = error[0]
            # Get compiler error
            value = error[1]
            # If if framework-classifier pair is already present, merge error messages
            if key in merged_errors:
                merged_errors[key].append(value)
            else:
                merged_errors[key] = [value]

        print("\n\n=============== Builder log messages: ===============\n\n")
        for key, error_messages in merged_errors.items():
            tool_name, model_name = key
            print(f"{tool_name} {model_name}:")
            for message in error_messages:
                print(f"\t{message}")

    def logger_builder(self, cls_pair, cc_toolchain, status):
        """
        Log builder information.

        This method logs information about the builder, compiler toolchain, and status.

        Args:
            cls_pair (tuple): Classifier pair (framework, name).
            cc_toolchain (object): Compiler toolchain object.
            status (str): Compilation status or message.

        """
        common_error_found = False
        if cc_toolchain:
            for search_string in cc_toolchain.compile_errors_list:
                if search_string in status:
                    self.data_logger.append((cls_pair, search_string))
                    common_error_found = True

        if not common_error_found:
            self.data_logger.append((cls_pair, status))

    def build_classifier(self, port_framework, cls_name, cls_obj):
        """
        Build a classifier.

        This method builds a classifier using the specified porting framework.

        Args:
            port_framework (str): Porting framework name.
            cls_name (str): Classifier name.
            cls_obj (object): Classifier object.

        Raises:
            AttributeError: If the given porter is not supported.

        """
        if port_framework not in ['sklearn-porter', 'emlearn', 'micromlgen']:
            error = "The given porter '{}' is not supported.".format(port_framework)
            raise AttributeError(error)

        cls_obj.fit(self.X_train, self.y_train)

        # Stats
        if self.benchmark_info["training"]["accuracy"] == True:
            try:
                model_train_acc = com.calculate_accuracy(port_framework, cls_name, cls_obj.predict_proba(self.X_train), self.y_train)
                model_test_acc = com.calculate_accuracy(port_framework, cls_name, cls_obj.predict_proba(self.X_test), self.y_test)
            except AttributeError:
                model_train_acc = accuracy_score(self.y_train, cls_obj.predict(self.X_train))
                model_test_acc = accuracy_score(self.y_test, cls_obj.predict(self.X_test))

        if self.benchmark_info["training"]["class_accuracy"] == True:
            try:
                model_class_acc = com.calculate_all_accuracies(port_framework, cls_name,
                                                               cls_obj.predict_proba(self.X_test),
                                                               self.y_test, self.iris_data.target_names)
            except AttributeError:
                model_class_acc = accuracy_score(self.y_test, cls_obj.predict(self.X_test))

        if port_framework == 'sklearn-porter':
            self.builder = SkLearnPorterBuilder((cls_name, cls_obj))
        elif port_framework == 'emlearn':
            self.builder = EmlearnBuilder((cls_name, cls_obj))
        elif port_framework == "micromlgen":
            self.builder = MicromlgenBuilder((cls_name, cls_obj))

        # Create and train the model
        status = self.builder.train()

        if status:
            self.logger_builder((port_framework, cls_name), None, status)
        else:
            self.benchmark_info["runtime"]["model_name"] = cls_name
            self.benchmark_info["runtime"]["porter_type"] = port_framework
            self.benchmark_info["runtime"]["template_path"] = self.builder.get_template_file_path()

            # Export model
            self.benchmark_info['runtime']['generated_model_dir'], \
            self.benchmark_info['runtime']['generated_model_path'] = self.builder.export_to_c(self.benchmark_info['training']['models_directory'])
            self.benchmark_info['runtime']['language'] = self.builder.get_model_language()

            np.save(os.path.join(self.benchmark_info['runtime']['generated_model_dir'], "y_labels.npy"), self.y_test)
            np.save(os.path.join(self.benchmark_info['runtime']['generated_model_dir'], "y_data.npy"), self.X_test)

            # Compile and benchmark the model
            if self.benchmark_info['target']['type'] == 'avr_gcc':
                from util.avr_gcc.gcc_benchmark import CompileAvrBenchmark
                cc_toolchain = CompileAvrBenchmark(self.benchmark_info)

            status = cc_toolchain.compile()

            # Plot some stats
            if self.benchmark_info["training"]["accuracy"] == True:
                self.logger_builder((port_framework, cls_name), cc_toolchain, f"Train ACC: {model_train_acc}, test ACC: {model_test_acc}")

            if self.benchmark_info["training"]["class_accuracy"] == True:
                self.logger_builder((port_framework, cls_name), cc_toolchain, f"Class ACC: {model_class_acc}")

            self.logger_builder((port_framework, cls_name), cc_toolchain, cc_toolchain.get_model_size(self.builder))
            # If no error occurred during compilation, print program size
            self.logger_builder((port_framework, cls_name), cc_toolchain, cc_toolchain.get_memory_footprint(status))

            #dump configuration info of the model
            com.yaml_dump(self.benchmark_info)
