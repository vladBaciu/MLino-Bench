import os
import shutil
import hexdump
import util.common as com
from tinymlgen import port


# Constants
PORTER_TYPE = 'tinymlgen'
GENERATED_FILE_EXT = 'h'
MODEL_LANGUAGE = 'c'
GENERATED_FILE_NAME = "model"
TEMPLATE = """
int main(void) {
    int result = 0;
    return result;
}
"""


class TinymlgenBuilder:
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

        # Check if the model is interpreter object
        try:
            self.porter = port(self.clf_method, variable_name='tinymlgen_model', pretty_print=False, optimize=False)
        except AttributeError:
            variable_name = 'tinymlgen_model'
            # Maybe it's a pretrained model
            bytes = hexdump.dump(self.clf_method).split(' ')
            c_array = ', '.join(['0x%02x' % int(byte, 16) for byte in bytes])
            c = 'const unsigned char %s[] DATA_ALIGN_ATTRIBUTE = {%s};' % (variable_name, c_array)
            c += '\nconst int %s_len = %d;' % (variable_name, len(bytes))
            preamble = '''
        #ifdef __has_attribute
        #define HAVE_ATTRIBUTE(x) __has_attribute(x)
        #else
        #define HAVE_ATTRIBUTE(x) 0
        #endif
        #if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
        #define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
        #else
        #define DATA_ALIGN_ATTRIBUTE
        #endif

        '''
            self.porter = preamble + c
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

        with open(model_path, 'w') as f:
            f.write(self.porter)

        return framework_dir, model_path

    def copy_custom_framework_files(self, framework_dir):
        """
        Copy custom framework files.
        """
        shutil.copy(os.path.join(os.path.dirname(__file__), "template", "infer_model.h"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), "template", "feature_specific.h"), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), "template", "EloquentTinyML.h"), framework_dir)

        #Copy tensorflow directory if it doesn't exist
        if not os.path.exists(os.path.join(framework_dir, "elq")):
            shutil.copytree(os.path.join(os.path.dirname(__file__), "template", "elq"), os.path.join(framework_dir, "elq"))

    def generate_size_template(self, model_code, model_build_dir, no_of_features):
        """
        Generate a template based on the model code and model name.
        """
        model_code += "\n" + TEMPLATE
        return model_code

    def get_model_language(self):
        """
        Get the model language.
        """
        return MODEL_LANGUAGE