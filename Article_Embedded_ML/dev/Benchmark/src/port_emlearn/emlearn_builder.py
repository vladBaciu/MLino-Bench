import os
import shutil
import util.common as com
import emlearn

# Constants
PORTER_TYPE = 'emlearn'
GENERATED_FILE_EXT = 'h'
MODEL_LANGUAGE = 'c'
GENERATED_FILE_NAME = "model"
TEMPLATE_DIR = 'template'
TEMPLATE_FILE = 'main_template.in'
CUSTOM_TEMPLATE = False

class EmlearnBuilder:
    def __init__(self, clf):
        self.clf_name = clf[0]
        self.clf_method = clf[1]
        self.porter = None

    def train(self):
        """
        Train the classifier and convert it using emlearn.
        """
        try:
            self.porter = emlearn.convert(self.clf_method)
        except (NotImplementedError, ValueError) as e:
            return f"Model type not supported for emlearn conversion: {e}"
        except Exception as e:
            return f"An unexpected error occurred during training: {e}"

    def c_export(self, output_dir_name):
        """
        Export the trained model to C code.
        """
        # Create paths for saving the model and framework files
        model_path, framework_dir = com.create_build_path(
            os.path.dirname(__file__),
            output_dir_name,
            self.clf_name,
            PORTER_TYPE,
            GENERATED_FILE_NAME,
            GENERATED_FILE_EXT
        )

        # Save the model using emlearn
        self.porter.save(file=model_path)

        size_build_dir = os.path.join(framework_dir, 'size')
        if not os.path.exists(size_build_dir):
            os.makedirs(size_build_dir)

        # Copy common header file
        common_header = 'eml_common.h'
        shutil.copy(os.path.join(os.path.dirname(__file__), common_header), framework_dir)
        shutil.copy(os.path.join(os.path.dirname(__file__), common_header), size_build_dir)

        # Copy headers based on classifier type
        clf_type = str(type(self.clf_method))
        if any(clf in clf_type for clf in ("DecisionTree", "RandomForest", "ExtraTrees")):
            tree_header = 'eml_trees.h'
            shutil.copy(os.path.join(os.path.dirname(__file__), tree_header), framework_dir)
            shutil.copy(os.path.join(os.path.dirname(__file__), tree_header), size_build_dir)
        elif "naive_bayes" in clf_type:
            bayes_header = 'eml_bayes.h'
            fixedpoint_header = 'eml_fixedpoint.h'
            shutil.copy(os.path.join(os.path.dirname(__file__), bayes_header), framework_dir)
            shutil.copy(os.path.join(os.path.dirname(__file__), fixedpoint_header), framework_dir)
            shutil.copy(os.path.join(os.path.dirname(__file__), bayes_header), size_build_dir)
            shutil.copy(os.path.join(os.path.dirname(__file__), fixedpoint_header), size_build_dir)
        elif "neural_network" in clf_type:
            net_header = 'eml_net.h'
            shutil.copy(os.path.join(os.path.dirname(__file__), net_header), framework_dir)
            shutil.copy(os.path.join(os.path.dirname(__file__), net_header), size_build_dir)

        return framework_dir, model_path

    def get_template_file(self):
        """
        Get the path to the template file.
        """
        return os.path.join(os.path.dirname(__file__), TEMPLATE_DIR, TEMPLATE_FILE)

    def get_model_language(self):
        """
        Get the model language.
        """
        return MODEL_LANGUAGE

    def is_custom_template(self):
        """
        Check if a custom template is used.
        """
        return CUSTOM_TEMPLATE
