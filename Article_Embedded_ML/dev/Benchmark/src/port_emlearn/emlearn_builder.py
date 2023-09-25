import os
import shutil
import util.common as com
import emlearn

# Constants
PORTER_TYPE = 'emlearn'
GENERATED_FILE_EXT = 'h'
MODEL_LANGUAGE = 'c'
GENERATED_FILE_NAME = "model"
CUSTOM_TEMPLATE = True
TEMPLATE = """
\nint main(void) {
    float features[1];
    int result = model_predict(features, 1);
    return result;
}
"""

class EmlearnBuilder:
    def __init__(self, classifier):
        self.classifier_name = classifier[0]
        self.classifier_method = classifier[1]
        self.porter = None

    def train(self):
        """
        Train the classifier and convert it using emlearn.
        """
        try:
            self.porter = emlearn.convert(self.classifier_method)
        except (NotImplementedError, ValueError) as e:
            return f"Model type not supported for emlearn conversion: {e}"
        except Exception as e:
            return f"An unexpected error occurred during model creation: {e}"

    def export_to_c(self, output_dir_name):
        """
        Export the trained model to C code.
        """
        model_path, framework_dir = self.create_output_paths(output_dir_name)

        self.porter.save(file=model_path)

        size_build_dir = os.path.join(framework_dir, 'size')
        self.create_directory_if_not_exists(size_build_dir)

        self.copy_common_header_files(framework_dir, size_build_dir)
        self.copy_classifier_specific_headers(framework_dir, size_build_dir)

        return framework_dir, model_path

    def generate_size_template(self, model_code, model_name):
        """
        Generate a template based on the model code and model name.
        """
        model_code += "\n" + TEMPLATE
        return model_code

    def get_model_language(self):
        """
        Get the model language.
        """
        return MODEL_LANGUAGE

    def create_output_paths(self, output_dir_name):
        """
        Create paths for saving the model and framework files.
        """
        model_path, framework_dir = com.create_build_path(
            os.path.dirname(__file__),
            output_dir_name,
            self.classifier_name,
            PORTER_TYPE,
            GENERATED_FILE_NAME,
            GENERATED_FILE_EXT
        )
        return model_path, framework_dir

    def create_directory_if_not_exists(self, directory_path):
        """
        Create a directory if it doesn't exist.
        """
        if not os.path.exists(directory_path):
            os.makedirs(directory_path)

    def copy_custom_framework_files(self, framework_dir):
        """
        Copy custom framework files.
        """
        shutil.copy(os.path.join(os.path.dirname(__file__), "template/infer_model.h"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), "template/feature_specific.h"), framework_dir)

    def copy_common_header_files(self, framework_dir, size_build_dir):
        """
        Copy common header files.
        """
        common_header = 'eml_common.h'
        shutil.copy(os.path.join(os.path.dirname(__file__), common_header), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), common_header), size_build_dir)

    def copy_classifier_specific_headers(self, framework_dir, size_build_dir):
        """
        Copy headers based on classifier type.
        """
        clf_type = str(type(self.classifier_method))
        headers_to_copy = []

        if any(clf in clf_type for clf in ("DecisionTree", "RandomForest", "ExtraTrees")):
            headers_to_copy.append('eml_trees.h')
        elif "naive_bayes" in clf_type:
            headers_to_copy.extend(['eml_bayes.h', 'eml_fixedpoint.h'])
        elif "neural_network" in clf_type:
            headers_to_copy.append('eml_net.h')

        for header in headers_to_copy:
            shutil.copy(os.path.join(os.path.dirname(__file__), header), framework_dir)
            shutil.copy(os.path.join(os.path.dirname(__file__), header), size_build_dir)
