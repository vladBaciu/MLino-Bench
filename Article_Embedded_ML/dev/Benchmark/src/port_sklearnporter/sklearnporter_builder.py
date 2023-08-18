import os
import util.common as com
from sklearn_porter import Porter
from sklearn.metrics import accuracy_score

PORTER_TYPE = 'sklearn-porter'
GENERATED_FILE_EXT = 'h'
MODEL_LANGUAGE = 'c'
GENERATED_FILE_NAME = "model"
TEMPLATE_DIR  = 'template'
TEMPLATE_FILE = 'main_template.in'
CUSTOM_TEMPLATE = False

class SkLearnPorterBuilder:
    def __init__(self, clf) -> None:

        self.clf_name = clf[0]
        self.clf_method = clf[1]
        self.porter = None

    def train(self):
        try:
            self.porter = Porter(self.clf_method, language='c')
        except NotImplementedError:
            return "Model type not supported for export to C."
        except Exception as e:
            return f"An unexpected error occurred during training: {e}"

    def c_export(self, output_dir_name) -> str:
        model_path, framework_dir = com.create_build_path(os.path.dirname(__file__),
                                                          output_dir_name, self.clf_name,
                                                          PORTER_TYPE, GENERATED_FILE_NAME,
                                                          GENERATED_FILE_EXT)

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

    def get_template_file(self):
        return os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, TEMPLATE_FILE)

    def get_model_language(self):
        return MODEL_LANGUAGE

    def is_custom_template(self):
        return CUSTOM_TEMPLATE