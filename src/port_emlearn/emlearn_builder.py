import os
import shutil
import src.util.common as com
import emlearn


# Constants
PORTER_TYPE = 'emlearn'
GENERATED_FILE_EXT = 'h'
MODEL_LANGUAGE = 'c'
GENERATED_FILE_NAME = "model"
TEMPLATE = """
#define NO_OF_FEATURES {}
{} features[NO_OF_FEATURES] __attribute__((used)) = {{0, }};
int main(void) {{

    for (int i = 0; i < NO_OF_FEATURES; ++i) {{
        features[i] = i;
    }}

    int result = model_predict(features, NO_OF_FEATURES);
    return result;
}}
"""


class EmlearnBuilder:
    """
    Class for building and exporting models using emlearn.
    """
    def __init__(self, classifier):
        self.classifier_name, self.classifier_method = classifier
        self.porter = None
        self.quant_type = None

    def invokePorter(self, f_type):
        """
        Train the classifier and convert it using emlearn.
        """
        self.quant_type = f_type
        try:
            self.porter = emlearn.convert(self.classifier_method, method = 'pymodule', dtype= self.quant_type)
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

        self.copy_porter_headers(framework_dir)

        return framework_dir, model_path

    def generate_size_template(self, model_code, model_build_dir, no_of_features):
        """
        Generate a template based on the model code and model name.
        """
        size_build_dir = os.path.join(os.path.dirname(model_build_dir), 'size')
        self.copy_porter_headers(size_build_dir)

        formatted_template = TEMPLATE.format(no_of_features, self.quant_type)
        model_code += formatted_template
        model_code = "#include <stdlib.h>\n" + "#include <stdint.h>\n" + "#include <math.h>\n" + model_code
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

    def copy_custom_framework_files(self, framework_dir):
        """
        Copy custom framework files.
        """
        shutil.copy(os.path.join(os.path.dirname(__file__), "template/infer_model.h"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), "template/feature_specific.h"), framework_dir)

        #Open feature_specific.h and replace the feature type
        with open(os.path.join(framework_dir, "feature_specific.h"), "r") as f:
            lines = f.readlines()

        with open(os.path.join(framework_dir, "feature_specific.h"), "w") as f:
            for line in lines:
                f.write(line.replace("F_QUANT_TYPE", self.quant_type))

    def copy_porter_headers(self, dest_dir):
        """
        Copy common and classifier-specific header files.
        """
        common_header = 'eml_common.h'
        classifier_headers = {
            "DecisionTreeClassifier": ['eml_trees.h'],
            "RandomForestClassifier": ['eml_trees.h'],
            "ExtraTreesClassifier": ['eml_trees.h'],
            "GaussianNB": ['eml_bayes.h', 'eml_fixedpoint.h'],
            "MLPClassifier": ['eml_net.h', 'eml_net_common.h', 'eml_net_fixedpoint.h']
        }

        # Copy common header file if it doesn't exist
        if not os.path.isfile(os.path.join(dest_dir, common_header)):
            shutil.copy2(os.path.join(os.path.dirname(__file__), 'template', common_header), dest_dir)

        # Copy classifier-specific header files
        clf_type = str(type(self.classifier_method))

        # Search for classifier type in classifier_headers dictionary
        for key in classifier_headers.keys():
            if key in clf_type:
                clf_type = key
                break

        headers_to_copy = classifier_headers.get(clf_type, [])
        # Copy classifier-specific header files if they don't exist
        for header in headers_to_copy:
            if not os.path.isfile(os.path.join(dest_dir, header)):
                shutil.copy(os.path.join(os.path.dirname(__file__), 'template', header), dest_dir)