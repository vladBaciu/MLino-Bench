import os
import shutil
import numpy as np
from sklearn.model_selection import train_test_split
from util.dataLoader import DataLoader
import util.common as com
from util.serial_profiler import SerialProfiler
from sklearn.metrics import accuracy_score

from port_sklearnporter.sklearnporter_builder import SkLearnPorterBuilder
from port_emlearn.emlearn_builder import EmlearnBuilder
from port_micromlgen.micromlgen_builder import MicromlgenBuilder
from port_embml.embml_builder import EmbmlBuilder
from port_m2cgen.m2cgen_builder import M2cgenBuilder

TEMPLATE_DIR  = "api"
TEMPLATE_FILE = "main.cpp"

class ClassifierBuilder():
    data_logger = list()

    def __init__(self) -> None:
        self.builder = None

        # Load benchmark baseline
        self.benchmark_info = com.yaml_load(os.path.join(os.path.dirname(__file__), "config.yaml"))

        self.data_loader = DataLoader(self.benchmark_info["training"]["default_dataset"])
        self.X_train, self.y_train, self.X_test, self.y_test = self.data_loader.load_data()

    def __load_dataset(self):
        """
        Load the dataset for benchmarking.

        This method loads the user-defined data or falls back to default datasets if not implemented.

        """
        # Load user-defined data
        self.y_train, self.X_train, self.y_test, self.X_test = self.load_data()
        # Fallback to default datasets supported if user-defined data is not implemented
        #if self.X_train == None:
        #    # If dataset is the sklearn Iris dataset.
        #    if self.benchmark_info["training"]["default_dataset"] == 'iris':
        #        from sklearn.datasets import load_iris
        #        self.iris_data = load_iris()
        #        self.X = self.iris_data.data
        #        self.y = self.iris_data.target
        #        self.X_train, self.X_test, self.y_train, self.y_test = train_test_split(self.X, self.y, test_size=0.25, random_state=50)

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
        self.builder = self.get_builder(port_framework, (cls_name, cls_obj))

        com.logging.info(f"{port_framework}:{cls_name} Training model ...")
        cls_obj.fit(self.X_train, self.y_train)
        com.logging.info(f"{port_framework}:{cls_name} Training done ...")

        # Stats
        if self.benchmark_info["training"]["accuracy"]:
            try:
                model_train_acc = com.calculate_accuracy(port_framework, cls_name, cls_obj.predict_proba(self.X_train), self.y_train)
                model_test_acc = com.calculate_accuracy(port_framework, cls_name, cls_obj.predict_proba(self.X_test), self.y_test)
            except:
                model_train_acc = accuracy_score(self.y_train, cls_obj.predict(self.X_train))
                model_test_acc = accuracy_score(self.y_test, cls_obj.predict(self.X_test))

        if self.benchmark_info["training"]["class_accuracy"]:
            try:
                model_class_acc = com.calculate_all_accuracies(port_framework, cls_name,
                                                               cls_obj.predict_proba(self.X_test),
                                                               self.y_test, self.iris_data.target_names)
            except AttributeError:
                model_class_acc = accuracy_score(self.y_test, cls_obj.predict(self.X_test))

        com.logging.info(f"{port_framework}:{cls_name} Invoke porter ...")
        # Create and train the model
        status = self.builder.train()

        if status:
            self.logger_builder((port_framework, cls_name), None, status)
        else:
            self.benchmark_info["runtime"]["no_of_features"] = self.X_train.shape[1]
            self.benchmark_info["runtime"]["model_name"] = cls_name
            self.benchmark_info["runtime"]["porter_type"] = port_framework
            self.benchmark_info["runtime"]["template_path"] = os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, TEMPLATE_FILE)

            # Export model
            self.benchmark_info['runtime']['generated_model_dir'], \
            self.benchmark_info['runtime']['generated_model_path'] = self.builder.export_to_c(self.benchmark_info['training']['models_directory'])

            # Get model language
            self.benchmark_info['runtime']['language'] = self.builder.get_model_language()

            self.copy_api_files(self.benchmark_info['runtime']['generated_model_dir'])

            self.save_npy_files()

            # Compile and benchmark the model
            cc_toolchain = self.get_compiler_toolchain()
            status = cc_toolchain.compile()

            # Plot some stats
            if self.benchmark_info["training"]["accuracy"]:
                self.logger_builder((port_framework, cls_name), cc_toolchain, f"Train ACC: {model_train_acc}, test ACC: {model_test_acc}")

            if self.benchmark_info["training"]["class_accuracy"]:
                self.logger_builder((port_framework, cls_name), cc_toolchain, f"Class ACC: {model_class_acc}")

            # Determine size based on baseline, do not compile again.
            self.logger_builder((port_framework, cls_name), cc_toolchain, cc_toolchain.get_model_size(self.builder))

            # If no error occurred during compilation, print program size
            self.logger_builder((port_framework, cls_name), cc_toolchain, cc_toolchain.get_memory_footprint(status))

            status = cc_toolchain.make_upload()

            #if status:
            benchmarkProfiler = SerialProfiler(self.benchmark_info)

            time_us, acc = benchmarkProfiler.do_inference()
            self.logger_builder((port_framework, cls_name), cc_toolchain, f"On target accuracy {acc}")
            self.logger_builder((port_framework, cls_name), cc_toolchain, f"Inference time {time_us} us")

            #dump configuration info of the model
            com.yaml_dump(self.benchmark_info)

    def get_builder(self, port_framework, cls_pair):
        """
        Get the builder object for the specified porting framework.

        Args:
            port_framework (str): Porting framework name.
            cls_pair (tuple): Classifier pair (framework, name).

        Returns:
            object: Builder object.

        Raises:
            AttributeError: If the given porter is not supported.

        """
        if port_framework == 'sklearn-porter':
            return SkLearnPorterBuilder(cls_pair)
        elif port_framework == 'emlearn':
            return EmlearnBuilder(cls_pair)
        elif port_framework == "micromlgen":
            return MicromlgenBuilder(cls_pair)
        elif port_framework == "embml":
            return EmbmlBuilder(cls_pair)
        elif port_framework == "m2cgen":
            return M2cgenBuilder(cls_pair)
        else:
            error = "The given porter '{}' is not supported.".format(port_framework)
            raise AttributeError(error)

    def get_compiler_toolchain(self):
        """
        Get the compiler toolchain object.

        Returns:
            object: Compiler toolchain object.

        """
        if self.benchmark_info['target']['type'] == 'avr_gcc':
            from util.avr_gcc.gcc_benchmark import CompileAvrBenchmark
            return CompileAvrBenchmark(self.benchmark_info)

    def copy_api_files(self, framework_dir):
        """
        Copy common API files.
        """
        self.builder.copy_custom_framework_files(framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, "internally_implemented.cpp"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, "internally_implemented.h"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, "submitter_implemented.cpp"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, "submitter_implemented.h"), framework_dir)
        # Set output length
        self.set_output_len()

    def save_npy_files(self):
        labels_file_path = os.path.join(self.benchmark_info['runtime']['generated_model_dir'], "y_labels.npy")
        data_file_path = os.path.join(self.benchmark_info['runtime']['generated_model_dir'], "y_data.npy")

        if os.path.exists(labels_file_path):
            os.remove(labels_file_path)
        if os.path.exists(data_file_path):
            os.remove(data_file_path)

        np.save(labels_file_path, self.y_test)
        np.save(data_file_path, self.X_test)

    def get_output_size(self):
        """
        Get the number of output classes from y_train and y_test.
        """
        unique_classes = np.union1d(self.y_train, self.y_test)
        return len(unique_classes)

    def set_output_len(self):
        """
        Read feature_specific.h file and set the output length macro.
        """
        # Get output size
        output_size = self.get_output_size()

        # Read feature_specific.h file and replace the output length macro with output_size
        feature_specific_file = os.path.join(self.benchmark_info['runtime']['generated_model_dir'], "feature_specific.h")
        with open(feature_specific_file, 'r') as file:
            filedata = file.read()

        filedata = filedata.replace("PY_OUTPUT_LEN", str(output_size))

        with open(feature_specific_file, 'w') as file:
            file.write(filedata)