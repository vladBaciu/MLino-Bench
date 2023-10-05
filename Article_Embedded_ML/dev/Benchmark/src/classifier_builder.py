import os
import shutil
import numpy as np
import util.common as com
from util.serial_profiler import SerialProfiler
from sklearn.metrics import accuracy_score

import sklearn.ensemble
import sklearn.tree
import sklearn.neural_network
import sklearn.naive_bayes
import sklearn.svm
from xgboost import XGBClassifier
from sefr import SEFR
from util.dataLoader import DataLoader

from port_sklearnporter.sklearnporter_builder import SkLearnPorterBuilder
from port_emlearn.emlearn_builder import EmlearnBuilder
from port_micromlgen.micromlgen_builder import MicromlgenBuilder
from port_embml.embml_builder import EmbmlBuilder
from port_m2cgen.m2cgen_builder import M2cgenBuilder

TEMPLATE_DIR  = "api"
TEMPLATE_FILE = "main.cpp"

# Define a dictionary of supported porter frameworks
SUPPORTED_PORTER_FRAMEWORKS = {
    'sklearn-porter': SkLearnPorterBuilder,
    'emlearn': EmlearnBuilder,
    'micromlgen': MicromlgenBuilder,
    'embml': EmbmlBuilder,
    'm2cgen': M2cgenBuilder,
}
class ClassifierBuilder():
    data_logger = list()

    def __init__(self, config_data, log_data) -> None:
        self.X_train, self.y_train, self.X_test, self.y_test = [], [], [], []
        self.builder, self.port_framework, self.cls_name, self.cls_obj = None, None, None, None

        # Init benchmark config data
        self.benchmark_info = config_data
        self.log_data = log_data

    def build_classifier(self, port_framework, cls_name, cls_obj, X_train, X_test, y_train, y_test,
                         metrics = {'time_us': True, 'accuracy': True}, clean_project=True):
        """
        Build a classifier using the specified porting framework.

        Args:
            port_framework (str): The name of the porting framework to use.
            cls_name (str): The name of the classifier.
            cls_obj (object): The classifier object.
            X_train (numpy.ndarray): The training data.
            X_test (numpy.ndarray): The testing data.
            y_train (numpy.ndarray): The training labels.
            y_test (numpy.ndarray): The testing labels.
            clean_project (bool): Whether to clean the project before compiling. Default is True.

        Returns:
            tuple: A tuple containing the classification time in microseconds and the on-target accuracy.
        """
        time_us, acc = -1, -1

        # Set class variables
        self.set_class_vars(X_train, y_train, X_test, y_test, port_framework, cls_name, cls_obj)

        # Get builder for the specified porter
        self.get_builder()

        # Train model
        self.train_sklearn()

        # Call the porter and prepare compilation artifacts if necessary
        if not self.call_porter():
            self.prepare_compilation_artifacts()
            cc_toolchain = self.compile_model(clean_project)

            # If accuracy or classification time is requested, call the profiler to measure the on-target accuracy and classification time
            if metrics['time_us'] or metrics['accuracy']:
                cc_toolchain.make_upload()

                # Call the profiler to measure the on-target accuracy and classification time
                time_us, acc = self.call_profiler()

        # Dump configuration info of the model
        com.yaml_dump(self.benchmark_info)

        return acc, time_us, cc_toolchain.total_model_size

    def call_profiler(self):
        """
        Call the profiler to measure the on-target accuracy and classification time of the generated model.

        Returns:
            tuple: A tuple containing the classification time in microseconds and the on-target accuracy.
        """
        # Create a SerialProfiler object and measure the accuracy and time
        benchmark_profiler = SerialProfiler(self.benchmark_info)
        time_us, acc = benchmark_profiler.measure_acc_and_time()

        # Log the on-target accuracy and classification time
        if self.log_data:
            self.logger_builder(None, f"On-target accuracy: {acc}")
            self.logger_builder(None, f"Classification time: {time_us} us")

        return time_us, acc

    def compile_model(self, clean_project):
        """
        Compile the generated model using the appropriate compiler toolchain and log the program size.

        Args:
            clean_project (bool): Whether to clean the project before compiling. Default is False.

        Returns:
            object: The compiler toolchain object.
        """
        # Get the compiler toolchain object
        cc_toolchain = self.get_compiler_toolchain(clean_project)

        # Compile the model and log the status
        status = cc_toolchain.compile()

        # Get the model size and total memory footprint
        model_size_str = cc_toolchain.get_model_size(self.builder)
        total_program_size_str = cc_toolchain.get_memory_footprint(status)

        # Log the model size and memory footprint
        if self.log_data:
            self.logger_builder(cc_toolchain, model_size_str)
            self.logger_builder(cc_toolchain, total_program_size_str)

        return cc_toolchain

    def train_sklearn(self):
        """
        Train the classifier using the sklearn library and calculate the model accuracy and class accuracy.

        Returns:
            None
        """
        # Initialize the accuracy variables
        model_test_acc, model_class_acc = -1, -1

        # Train the model and log the status
        com.logging.info(f"{self.port_framework}:{self.cls_name} Training model ...")
        self.cls_obj.fit(self.X_train, self.y_train)
        com.logging.info(f"{self.port_framework}:{self.cls_name} Training model: OK")

        # Calculate the model accuracy and class accuracy, if requested
        if self.benchmark_info["training"]["accuracy"]:
            try:
                model_test_acc = com.calculate_accuracy(self.port_framework, self.cls_name, self.cls_obj.predict_proba(self.X_test), self.y_test)
            except:
                model_test_acc = accuracy_score(self.y_test, self.cls_obj.predict(self.X_test))

        if self.benchmark_info["training"]["class_accuracy"]:
            try:
                model_class_acc = com.calculate_all_accuracies(self.port_framework, self.cls_name, self.cls_obj.predict_proba(self.X_test), self.y_test, np.union1d(self.y_train, self.y_test))
            except AttributeError:
                model_class_acc = accuracy_score(self.y_test, self.cls_obj.predict(self.X_test))

        # Log the model accuracy and class accuracy, if requested
        if self.benchmark_info["training"]["accuracy"] and self.log_data:
            self.logger_builder(None, f"Test ACC: {model_test_acc}")

        if self.benchmark_info["training"]["class_accuracy"] and self.log_data:
            self.logger_builder(None, f"Class ACC: {model_class_acc}")

    def call_porter(self):
        """
        Invoke the porter to generate the target code for the specified framework and classifier.

        Returns:
            bool: True if the porter was invoked successfully, False otherwise.
        """
        # Log the porter invocation
        com.logging.info(f"{self.port_framework}:{self.cls_name} Invoke porter ...")

        # Invoke the porter and get the status
        status = self.builder.invokePorter()

        # Log the porter status
        if status:
            if self.log_data:
                self.logger_builder(None, status)
        else:
            com.logging.info(f"{self.port_framework}:{self.cls_name} Invoke porter: OK")

        return status

    def prepare_compilation_artifacts(self):
        """
        Prepare the compilation artifacts for the generated model.

        Returns:
            None
        """
        # Export the model to C
        models_directory = self.benchmark_info['training']['models_directory']
        generated_model_dir, generated_model_path = self.builder.export_to_c(models_directory)
        self.benchmark_info['runtime']['generated_model_dir'] = generated_model_dir
        self.benchmark_info['runtime']['generated_model_path'] = generated_model_path

        # Get the model language
        language = self.builder.get_model_language()
        self.benchmark_info['runtime']['language'] = language

        # Copy the API files to the generated model directory
        self.copy_api_files(generated_model_dir)

        # Save the test data and labels as numpy arrays in the generated model directory
        self.save_npy_files()

    def get_builder(self):
        """
        Get the builder object for the specified porting framework.

        Returns:
            object: Builder object.

        Raises:
            AttributeError: If the given porter is not supported.

        """
        # Check if the porter framework is supported
        if self.port_framework not in SUPPORTED_PORTER_FRAMEWORKS:
            error = f"The given porter '{self.port_framework}' is not supported."
            raise AttributeError(error)

        # Set the builder object based on the porter framework
        builder_class = SUPPORTED_PORTER_FRAMEWORKS[self.port_framework]
        cls_pair = (self.cls_name, self.cls_obj)
        self.builder = builder_class(cls_pair)

        # Log that the porter framework is supported
        com.logging.info(f"{self.port_framework}:{self.cls_name} Check if porter framework is supported: OK")

    def get_compiler_toolchain(self, clean_project):
        """
        Get the compiler toolchain object based on the target type specified in the benchmark information.

        Args:
            clean_project (bool): Whether to clean the project before compiling. Default is False.

        Returns:
            object: The compiler toolchain object.
        """
        # Import the appropriate compiler toolchain based on the target type
        target_type = self.benchmark_info['target']['type']
        if target_type == 'avr_gcc':
            from util.avr_gcc.gcc_benchmark import CompileAvrBenchmark
            return CompileAvrBenchmark(self.benchmark_info, clean_project)
        #elif target_type == 'arm_gcc':
            #from util.arm_gcc.gcc_benchmark import CompileArmBenchmark
            #return CompileArmBenchmark(self.benchmark_info, clean_project)
        else:
            raise ValueError(f"Unsupported target type: {target_type}")

    def copy_api_files(self, framework_dir):
        """
        Copy the common API files to the specified framework directory.

        Args:
            framework_dir (str): The path to the directory where the API files should be copied.

        Returns:
            None
        """
        # Copy the custom framework files
        self.builder.copy_custom_framework_files(framework_dir)

        # Define the file paths for the API files
        api_files = [
            "internally_implemented.cpp",
            "internally_implemented.h",
            "submitter_implemented.cpp",
            "submitter_implemented.h"
        ]

        # Copy the API files to the framework directory
        for api_file in api_files:
            src_file = os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, api_file)
            dst_file = os.path.join(framework_dir, api_file)
            if os.path.exists(dst_file):
                os.remove(dst_file)
            shutil.copy(src_file, dst_file)

        # Set the output length macro in the feature_specific.h file
        self.set_output_len()

    def save_npy_files(self):
        """
        Save the test data and labels as numpy arrays in the generated model directory.

        Returns:
            None
        """
        # Define the file paths for the labels and data files
        labels_file_path = os.path.join(self.benchmark_info['runtime']['generated_model_dir'], "y_labels.npy")
        data_file_path = os.path.join(self.benchmark_info['runtime']['generated_model_dir'], "y_data.npy")

        # Remove any existing files with the same names
        if os.path.exists(labels_file_path):
            os.remove(labels_file_path)
        if os.path.exists(data_file_path):
            os.remove(data_file_path)

        # Save the test data and labels as numpy arrays
        np.save(labels_file_path, self.y_test)
        np.save(data_file_path, self.X_test)

    def get_output_size(self):
        """
        Get the number of output classes from y_train and y_test.

        Returns:
            Number of output classes.
        """
        unique_classes = np.union1d(self.y_train, self.y_test)
        return len(unique_classes)

    def set_output_len(self):
        """
        Set the output length macro in the feature_specific.h file based on the output size of the classifier.

        Returns:
            None
        """
        # Get the output size of the classifier
        output_size = self.get_output_size()

        # Update the output length macro in the feature_specific.h file
        feature_specific_file = os.path.join(self.benchmark_info['runtime']['generated_model_dir'], "feature_specific.h")
        with open(feature_specific_file, 'r') as f:
            filedata = f.read()

        filedata = filedata.replace("PY_OUTPUT_LEN", str(output_size))

        with open(feature_specific_file, 'w') as f:
            f.write(filedata)

    def set_class_vars(self, X_train, y_train, X_test, y_test, port_framework, cls_name, cls_obj):
        """
        Set the class variables of the ClassifierBuilder object based on the input data and parameters.

        Args:
            X_train (numpy.ndarray): The feature matrix for the training data.
            y_train (numpy.ndarray): The label vector for the training data.
            X_test (numpy.ndarray): The feature matrix for the test data.
            y_test (numpy.ndarray): The label vector for the test data.
            port_framework (str): The name of the porting framework to use.
            cls_name (str): The name of the classifier to use.
            cls_obj (class): The class object for the classifier to use.

        Returns:
            None
        """

        # Set the training and test data
        self.X_train = X_train
        self.y_train = y_train
        self.X_test = X_test
        self.y_test = y_test

        # Set the porting framework and classifier name
        self.port_framework = port_framework
        self.cls_name = cls_name
        self.cls_obj = cls_obj

        # Set the benchmark information
        self.benchmark_info["runtime"]["no_of_features"] = self.X_train.shape[1]
        self.benchmark_info["runtime"]["model_name"] = self.cls_name
        self.benchmark_info["runtime"]["porter_type"] = self.port_framework
        self.benchmark_info["runtime"]["template_path"] = os.path.abspath(os.path.join(TEMPLATE_DIR, TEMPLATE_FILE))

    def print_log_summary(self):
        """
        Print summary of log messages.

        This method prints a summary of error messages from the data logger.

        Returns:
            None
        """
        # Create a dictionary to store the merged error messages
        merged_errors = {}

        # Merge error messages for each framework-classifier pair
        for error in self.data_logger:
            framework, classifier = error[0]
            message = error[1]
            if (framework, classifier) in merged_errors:
                merged_errors[(framework, classifier)].append(message)
            else:
                merged_errors[(framework, classifier)] = [message]

        # Print the summary of error messages
        print("\n\n=============== Builder log messages: ===============\n\n")
        for (framework, classifier), messages in merged_errors.items():
            print(f"{framework} {classifier}:")
            for message in messages:
                print(f"\t{message}")

    def logger_builder(self, cc_toolchain, status):
        """
        Log builder information.

        This method logs information about the builder, compiler toolchain, and status.

        Args:
            cc_toolchain (object): The compiler toolchain object.
            status (str): The compilation status or message.

        Returns:
            None
        """
        # Check if any common errors were found in the compilation status
        common_error_found = False
        if cc_toolchain:
            for error_string in cc_toolchain.compile_errors_list:
                if error_string in status:
                    self.data_logger.append(((self.port_framework, self.cls_name), error_string))
                    common_error_found = True

        # If no common errors were found, log the status message
        if not common_error_found:
            self.data_logger.append(((self.port_framework, self.cls_name), status))

frameworks  = ['sklearn-porter', 'emlearn', 'micromlgen', 'embml', 'm2cgen']

classifiers = {
    #'decision_tree': sklearn.tree.DecisionTreeClassifier(),
    #'random_forest': sklearn.ensemble.RandomForestClassifier(n_estimators=10, random_state=50),
    #'extra_trees': sklearn.ensemble.ExtraTreesClassifier(n_estimators=10, random_state=50),
    #'svc': sklearn.svm.SVC(gamma = 0.05, kernel='linear'),
    #'adaBoost': sklearn.ensemble.AdaBoostClassifier(base_estimator=sklearn.tree.DecisionTreeClassifier(max_depth=4, random_state=0), n_estimators=100,random_state=0),
    #'gaussian_naive_bayes': sklearn.naive_bayes.GaussianNB(),
    #'sklearn_mlp': sklearn.neural_network.MLPClassifier(solver='lbfgs', alpha=1e-5, hidden_layer_sizes=(5, 6), random_state=1)
    #'linearSVC': sklearn.svm.LinearSVC(C=0.1),
    #'nuSVC': sklearn.svm.NuSVC(gamma=0.1),
    #'adaBoost': sklearn.ensemble.AdaBoostClassifier(base_estimator=sklearn.tree.DecisionTreeClassifier(max_depth=4, random_state=0), n_estimators=20,random_state=0),
    #'xgboost': XGBClassifier(eval_metric='merror')
}

sklearnporter_classifiers = {
    'decision_tree': sklearn.tree.DecisionTreeClassifier(),
    #'random_forest': sklearn.ensemble.RandomForestClassifier(n_estimators=10, random_state=50),
    #'extra_trees': sklearn.ensemble.ExtraTreesClassifier(n_estimators=10, random_state=50),
    #'svc': sklearn.svm.SVC(gamma = 0.05, kernel='linear'),
    #'adaBoost': sklearn.ensemble.AdaBoostClassifier(base_estimator=sklearn.tree.DecisionTreeClassifier(max_depth=4, random_state=0), n_estimators=100,random_state=0),
    #'linearSVC': sklearn.svm.LinearSVC(C=0.1),
    #'nuSVC': sklearn.svm.NuSVC(gamma=0.1),
    #'adaBoost': sklearn.ensemble.AdaBoostClassifier(base_estimator=sklearn.tree.DecisionTreeClassifier(max_depth=4, random_state=0), n_estimators=20,random_state=0),
}

emlearn_classifiers = {
    #'decision_tree': sklearn.tree.DecisionTreeClassifier(),
    #'random_forest': sklearn.ensemble.RandomForestClassifier(n_estimators=10, random_state=50),
    #'extra_trees': sklearn.ensemble.ExtraTreesClassifier(n_estimators=10, random_state=50),
    #'gaussian_naive_bayes': sklearn.naive_bayes.GaussianNB(),
    #'sklearn_mlp': sklearn.neural_network.MLPClassifier(solver='lbfgs', alpha=1e-5, hidden_layer_sizes=(5, 6), random_state=1)
    #'sequential': tba
}

micromlgen_classifiers = {
    #'decision_tree': sklearn.tree.DecisionTreeClassifier(),
    #'random_forest': sklearn.ensemble.RandomForestClassifier(n_estimators=10, random_state=50),
    #'svc': sklearn.svm.SVC(gamma = 0.05, kernel='linear'),
    #'gaussian_naive_bayes': sklearn.naive_bayes.GaussianNB(),
    #'xgboost': XGBClassifier(eval_metric='merror')
    #'sefr_classifier': SEFR(), #binary classifier
}

m2gen = {
    'decision_tree': sklearn.tree.DecisionTreeClassifier(),
    #'linearSVC': sklearn.svm.LinearSVC(C=0.1)
    #'nuSVC': sklearn.svm.NuSVC(gamma=0.1)
    #'xgboost': XGBClassifier(eval_metric='merror')


}
embml = {
    #MLPClassifier for MLP classifiers;
    #LinearSVC for SVM classifiers with linear kernel;
    #'sklearn_mlp': sklearn.neural_network.MLPClassifier(solver='lbfgs', alpha=1e-4, hidden_layer_sizes=(5, 6), random_state=1),
    #'svc': sklearn.svm.SVC(gamma = 0.05, kernel='linear'),
    #'linearSVC': sklearn.svm.LinearSVC(C=0.1)
    #'decision_tree': sklearn.tree.DecisionTreeClassifier()
}

if __name__ == "__main__":

    config_data = com.yaml_load("./config.yaml")

    data_loader = DataLoader(config_data["training"]["dataset"])
    X_train, y_train, X_test, y_test = data_loader.load_data(0.8)

    builder = ClassifierBuilder(config_data=config_data, log_data=True)

    for name, cls in m2gen.items():
        builder.build_classifier(frameworks[2],  name, cls, X_train, X_test, y_train, y_test)
       #builder.build_classifier(frameworks[1],  name, cls)
       #builder.build_classifier(frameworks[2],  name, cls)
       #builder.build_classifier(frameworks[3],  name, cls)
    #for name, cls in classifiers.items():
    #    builder.build_classifier(frameworks[2],  name, cls)
    #for name, cls in embml.items():
    #    builder.build_classifier(frameworks[3],  name, cls)

    builder.print_log_summary()