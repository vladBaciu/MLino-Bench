import os
import shutil
import util.common as com
from micromlgen import port

# Constants
PORTER_TYPE = 'micromlgen'
GENERATED_FILE_EXT = 'h'
MODEL_LANGUAGE = 'cpp'
GENERATED_FILE_NAME = "model"
TEMPLATE_DIR = 'template'
TEMPLATE_FILE = 'main_template.in'
CUSTOM_TEMPLATE = True
TEMPLATE = """
\nint main(void) {{
    float features[2];
    Eloquent::ML::Port::{0} classifier;
    int result = classifier.predict(features);
    return result;
}}
"""
class MicromlgenBuilder:
    """
    Class for building and exporting models using micromlgen.
    """
    def __init__(self, clf):
        self.clf_name, self.clf_method = clf
        self.porter = None

    def train(self):
        """
        Train the classifier and convert it using micromlgen.
        """
        try:
            self.porter = port(self.clf_method, tmp_file='tmp.json')
        except (NotImplementedError, ValueError) as e:
            return f"Model type not supported for micromlgen conversion: {e}"
        except Exception as e:
            return f"An unexpected error occurred during training: {e}"

    def export_to_c(self, output_dir_name):
        """
        Export the trained model to C++ code.
        """
        model_path, framework_dir = com.create_build_path(
            os.path.dirname(__file__),
            output_dir_name,
            self.clf_name,
            PORTER_TYPE,
            GENERATED_FILE_NAME,
            GENERATED_FILE_EXT
        )

        model_content = self.porter.replace("<cstdarg>", "<stdarg.h>")
        with open(model_path, 'w') as f:
            f.write(model_content)

        return framework_dir, model_path

    def get_template_file_path(self):
        """
        Get the path to the template file.
        """
        return os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, TEMPLATE_FILE)

    def generate_size_template(self, model_code, model_name):
        """
        Generate a template based on the model code and model name.
        """
        template_map = {
            'decision_tree': 'DecisionTree',
            'random_forest': 'RandomForest',
            'svc': 'SVM',
            'gaussian_naive_bayes': 'GaussianNB',
            'xgboost': 'XGBClassifier'
        }

        formatted_template = TEMPLATE.format(template_map.get(model_name, ''))
        model_code += formatted_template
        model_code = "#include <stdlib.h>\n" + "#include <stdint.h>\n" + "#include <math.h>\n" + model_code
        return model_code

    def get_model_language(self):
        """
        Get the model language.
        """
        return MODEL_LANGUAGE

