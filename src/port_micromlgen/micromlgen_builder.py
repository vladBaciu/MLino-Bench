import os
import shutil
import src.util.common as com
from micromlgen import port


# Constants
PORTER_TYPE = 'micromlgen'
GENERATED_FILE_EXT = 'h'
MODEL_LANGUAGE = 'cpp'
GENERATED_FILE_NAME = "model"
TEMPLATE = """
#define NO_OF_FEATURES {}
float features[NO_OF_FEATURES] __attribute__((used)) = {{0, }};
Eloquent::ML::Port::{} classifier __attribute__((used));

int main(void) {{

    for (int i = 0; i < NO_OF_FEATURES; ++i) {{
        features[i] = i;
    }}

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

    def invokePorter(self, options=None):
        """
        Train the classifier and convert it using micromlgen.
        """
        try:
            self.porter = port(self.clf_method, tmp_file='tmp.json')
        except (NotImplementedError, ValueError) as e:
            return f"Model type not supported for micromlgen conversion: {e}"
        except Exception as e:
            return f"An unexpected error occurred during model creation: {e}"

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

    def generate_size_template(self, model_code, model_build_dir, no_of_features):
        """
        Generate a template based on the model code and model name.
        """
        template_map = {
            'DecisionTreeClassifier': 'DecisionTree',
            'RandomForestClassifier': 'RandomForest',
            'SVC': 'SVM',
            'GaussianNB': 'GaussianNB',
            'XGBClassifier': 'XGBClassifier',
            'SEFR': 'SEFR'
        }

        formatted_template = TEMPLATE.format(no_of_features, template_map.get(self.clf_method.__class__.__name__))
        model_code += formatted_template
        model_code = "#include <stdlib.h>\n" + "#include <stdint.h>\n" + "#include <math.h>\n" + model_code
        return model_code

    def copy_custom_framework_files(self, framework_dir):
        """
        Copy custom framework files.
        """
        shutil.copy(os.path.join(os.path.dirname(__file__), "template/infer_model.h"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), "template/feature_specific.h"), framework_dir)

    def get_model_language(self):
        """
        Get the model language.
        """
        return MODEL_LANGUAGE
