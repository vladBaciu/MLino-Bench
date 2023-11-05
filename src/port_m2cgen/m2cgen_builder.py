import os
import shutil
import util.common as com
import m2cgen as m2c

# Constants
PORTER_TYPE = 'm2cgen'
GENERATED_FILE_EXT = 'c'
MODEL_LANGUAGE = 'c'
GENERATED_FILE_NAME = "model"
TEMPLATE = """
int main(void) {
    double input[5];
    double output[5];

    predict(input, output);
}
"""


class M2cgenBuilder:
    """
    Class for building and exporting models using m2gen.
    """
    def __init__(self, clf):
        self.clf_name = clf[0]
        self.clf_method = clf[1]
        self.code = None

    def invokePorter(self, options=None):
        """
        Train the classifier and create a porter for export.
        """
        try:
            self.code = m2c.export_to_c(self.clf_method, function_name="predict")
        except NotImplementedError:
            return "Model type not supported for export to C."
        except Exception as e:
            return f"An unexpected error occurred during model creation: {e}"

    def export_to_c(self, output_dir_name):
        """
        Export the trained model using sklearn-porter.
        """
        model_path, framework_dir = com.create_build_path(
            os.path.dirname(__file__),
            output_dir_name,
            self.clf_name,
            PORTER_TYPE,
            GENERATED_FILE_NAME,
            GENERATED_FILE_EXT
        )

        content = self.code
        with open(model_path, 'w') as f:
            f.write(content)

        return framework_dir, model_path

    def copy_custom_framework_files(self, framework_dir):
        """
        Copy custom framework files.
        """
        shutil.copy(os.path.join(os.path.dirname(__file__), "template", "infer_model.h"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), "template", "feature_specific.h"), framework_dir)

    def generate_size_template(self, model_code, model_name, model_build_dir):
        """
        Generate a template based on the model code and model name.
        """
        model_code += "\n" + TEMPLATE
        return model_code
