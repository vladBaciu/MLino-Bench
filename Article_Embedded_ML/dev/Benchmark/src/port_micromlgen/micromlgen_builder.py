import os
import shutil
import util.common as com
from micromlgen import port

PORTER_TYPE = 'micromlgen'
GENERATED_FILE_EXT = 'h'
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
                                                       PORTER_TYPE, GENERATED_FILE_EXT)

        with open(model_path, 'w') as f:
            f.write(self.porter)

        return framework_dir
