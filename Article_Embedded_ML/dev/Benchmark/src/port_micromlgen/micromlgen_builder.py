import os
import shutil
import util.common as com
from micromlgen import port

PORTER_TYPE = 'micromlgen'
GENERATED_FILE_EXT = 'h'
GENERATED_FILE_NAME = "model"
TEMPLATE_DIR  = 'template'
TEMPLATE_FILE = 'main_template.in'

class MicromlgenBuilder:
    def __init__(self, clf) -> None:

        self.clf_name = clf[0]
        self.clf_method = clf[1]
        self.porter = None

    def train(self):
        try:
            self.porter = port(self.clf_method)
        except (NotImplementedError, ValueError) as e:
            return f"Model type not supported for emlearn conversion: {e}"
        except Exception as e:
            return f"An unexpected error occurred during training: {e}"

    def c_export(self, output_dir_name) -> str:
        model_path, framework_dir = com.create_build_path(os.path.dirname(__file__),
                                                       output_dir_name, self.clf_name,
                                                       PORTER_TYPE, GENERATED_FILE_NAME,
                                                       GENERATED_FILE_EXT)

        model_content = self.porter.replace("<cstdarg>", "<stdarg.h>")
        with open(model_path, 'w') as f:
            f.write(model_content)

        return framework_dir, model_path

    def get_template_file(self):
        return os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, TEMPLATE_FILE)