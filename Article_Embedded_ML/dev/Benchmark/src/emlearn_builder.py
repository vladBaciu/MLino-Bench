import os
import shutil
import util.common as com
import emlearn

class EmlearnBuilder:
    def __init__(self, X_train, y_train, clf) -> None:
        self.X = X_train
        self.y = y_train
        self.clf_name = clf[0]
        self.clf_method = clf[1]
        self.porter = None

    def train(self):
        self.clf_method.fit(self.X, self.y)
        try:
            self.porter = emlearn.convert(self.clf_method)
        except (NotImplementedError, ValueError) as e:
            return f"Model type not supported for emlearn conversion: {e}"
        except Exception as e:
            return f"An unexpected error occurred during training: {e}"

    def get_model_language(self) -> str:
        return 'c'

    def c_export(self, output_dir_name) -> str:
        model_path, framework_dir = com.get_model_path(os.path.dirname(__file__), output_dir_name, self.clf_name, 'emlearn')

        # Save the model using emlearn
        self.porter.save(file=model_path)

        # Copy common header file
        shutil.copy("eml_common.h", framework_dir)

        # Copy headers based on classifier type
        clf_type = str(type(self.clf_method))
        if any(clf in clf_type for clf in ("DecisionTree", "RandomForest", "ExtraTrees")):
            shutil.copy("eml_trees.h", framework_dir)
        elif "naive_bayes" in clf_type:
            shutil.copy("eml_bayes.h", framework_dir)
            shutil.copy("eml_fixedpoint.h", framework_dir)
        elif "neural_network" in clf_type:
            shutil.copy("eml_net.h", framework_dir)

        # Replace the main function in the model file
        main_template = com.extract_custom_main("main.c")
        with open(model_path, 'r') as f:
            code = f.read()
        with open(model_path, 'w') as f:
            new_code = com.replace_main(code, main_template)
            f.write(new_code)

        return model_path
