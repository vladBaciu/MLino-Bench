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
        self.porter     = None

    def train(self):
        self.clf_method.fit(self.X, self.y)
        try:
            self.porter = emlearn.convert(self.clf_method)
        except:
            return "Model type not supported."

    def get_model_language(self) -> str:
        return 'c'

    def c_export(self, output_dir_name) -> str:
        model_path, framework_dir = com.get_model_path(os.path.dirname( __file__ ), output_dir_name, self.clf_name, 'emlearn')
        self.porter.save(file=model_path)

        shutil.copy("eml_trees.h", framework_dir)
        shutil.copy("eml_common.h", framework_dir)

        return model_path


