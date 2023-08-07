import os
import util.common as com
from sklearn_porter import Porter

PORTER_TYPE = 'sklearnporter'
GENERATED_FILE_EXT = 'h'
GENERATED_FILE_NAME = "model"
TEMPLATE_DIR  = 'template'
TEMPLATE_FILE = 'main_template.in'

class SkLearnPorterBuilder:
    def __init__(self, X_train, y_train, clf) -> None:
        self.X = X_train
        self.y = y_train
        self.clf_name = clf[0]
        self.clf_method = clf[1]
        self.porter = None

    def train(self):
        self.clf_method.fit(self.X, self.y)
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
            print(f"An unexpected error occurred during model export: {e}")
        else:
            with open(model_path, 'w') as f:
                f.write(content)
            # Eliminate main function since the generated file is a header file and does not need it.
            com.eliminate_main_function(model_path)

        return framework_dir

    def get_template_file(self):
        return os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, TEMPLATE_FILE)