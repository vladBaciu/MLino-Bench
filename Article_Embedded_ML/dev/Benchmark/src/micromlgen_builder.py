import os
import shutil
import util.common as com
from micromlgen import port

class MicromlgenBuilder:
    def __init__(self, X_train, y_train, clf) -> None:
        self.X = X_train
        self.y = y_train
        self.clf_name = clf[0]
        self.clf_method = clf[1]
        self.porter = None

    def train(self):
        self.clf_method.fit(self.X, self.y)
        try:
            self.porter = port(self.clf_method)
        except (NotImplementedError, ValueError) as e:
            return f"Model type not supported for emlearn conversion: {e}"
        except Exception as e:
            return f"An unexpected error occurred during training: {e}"

    def get_model_file_extension(self) -> str:
        return 'h'

    def c_export(self, output_dir_name) -> str:
        model_path, framework_dir = com.create_build_path(os.path.dirname(__file__),
                                                       output_dir_name, self.clf_name,
                                                       'micromlgen', self.get_model_file_extension())

        with open(model_path, 'w') as f:
            f.write(self.porter)

        # Replace the main function in the model file
        main_template = com.extract_custom_main("main.c")
        with open(model_path, 'r') as f:
            code = f.read()
        with open(model_path, 'w') as f:
            new_code = com.replace_main(code, main_template)
            f.write(new_code)

        return framework_dir
