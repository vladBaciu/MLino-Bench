import os
import shutil
import src.util.common as com
from sklearn_porter import Porter


# Constants
PORTER_TYPE = 'sklearn-porter'
GENERATED_FILE_EXT = 'h'
MODEL_LANGUAGE = 'c'
GENERATED_FILE_NAME = "model"
TEMPLATE = """
#define NO_OF_FEATURES {}
#if !defined(SVC) && !defined(ADABOOST) && !defined(NUSVC)
    float features[NO_OF_FEATURES] __attribute__((used)) = {{0, }};
#else
    double features[NO_OF_FEATURES] __attribute__((used)) = {{0, }};
#endif

int main(void) {{

    for (int i = 0; i < NO_OF_FEATURES; ++i) {{
        features[i] = i;
    }}

    int result = predict(features);
    return result;
}}
"""


class SkLearnPorterBuilder:
    """
    Class for building and exporting models using sklearn-porter.
    """
    def __init__(self, clf):
        self.clf_name = clf[0]
        self.clf_method = clf[1]
        self.porter = None

    def invokePorter(self, options=None):
        """
        Train the classifier and create a porter for export.
        """
        try:
            self.porter = Porter(self.clf_method, language=MODEL_LANGUAGE)
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

        try:
            content = self.porter.export(embed_data=True)
        except Exception as e:
            com.logging.info(f"An unexpected error occurred during model export: {e}")
        else:
            with open(model_path, 'w') as f:
                f.write(content)
            # Eliminate main function since the generated file is a header file and does not need it.
            com.eliminate_main_function(model_path)

        return framework_dir, model_path

    def copy_custom_framework_files(self, framework_dir):
        """
        Copy custom framework files.
        """
        shutil.copy(os.path.join(os.path.dirname(__file__), "template", "infer_model.h"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), "template", "feature_specific.h"), framework_dir)

    def generate_size_template(self, model_code, model_build_dir, no_of_features):
        """
        Generate a template based on the model code and model name.
        """
        template = TEMPLATE.format(no_of_features)
        model_code += "\n" + template
        return model_code

    def get_model_language(self):
        """
        Get the model language.
        """
        return MODEL_LANGUAGE