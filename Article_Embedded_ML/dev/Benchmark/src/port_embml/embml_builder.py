import os
import shutil
import util.common as com
import embml
import pickle

# Constants
PORTER_TYPE = 'embml'
GENERATED_FILE_EXT = 'h'
MODEL_LANGUAGE = 'c'
GENERATED_FILE_NAME = "model"
CUSTOM_TEMPLATE = True
TEMPLATE = """
\nint main(void) {
    int result = classify();
    return result;
}
"""

class EmbmlBuilder:
    def __init__(self, clf):
        self.clf_name = clf[0]
        self.clf_method = clf[1]
        self.porter = None

        self.py_model_file = os.path.join(os.path.dirname(__file__), "tmp.pkl")
        self.c_model_file  = os.path.join(os.path.dirname(__file__), "tmp.c")

    def train(self):
        """
        Train the classifier and create a porter for export.
        """
        try:
            # Save the model to a file using pickle
            with open(self.py_model_file, 'wb') as model_file:
                pickle.dump(self.clf_method, model_file)
            self.porter = embml.sklearnModel(self.py_model_file, self.c_model_file, opts='-rules')
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

        shutil.copy(self.c_model_file, model_path)

        #todo delete tmp.c and pkl
        return framework_dir, model_path

    def copy_custom_framework_files(self, framework_dir):
        """
        Copy custom framework files.
        """
        shutil.copy(os.path.join(os.path.dirname(__file__), "template/infer_model.h"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), "template/feature_specific.h"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), "template/FixedNum.h"), framework_dir)

    def generate_size_template(self, model_code, model_name):
        """
        Generate a template based on the model code and model name.
        """
        model_code = "#include <stdlib.h>\n" + "#include <stdint.h>\n" + "#include <math.h>\n" + model_code + TEMPLATE
        return model_code

    def get_model_language(self):
        """
        Get the model language.
        """
        return MODEL_LANGUAGE


    def copy_files_to_size_dir(self, model_build_dir):
        size_build_dir = os.path.join(os.path.dirname(model_build_dir), 'size')
        shutil.copy(os.path.join(os.path.dirname(model_build_dir), "FixedNum.h"), size_build_dir)
