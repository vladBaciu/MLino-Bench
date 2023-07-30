import os
import util.common as com
from sklearn_porter import Porter

class SkLearnPorterBuilder:
    def __init__(self, X_train, y_train, clf) -> None:
        self.X = X_train
        self.y = y_train
        self.clf_name = clf[0]
        self.clf_method = clf[1]
        self.porter     = None

    def train(self):
        self.clf_method.fit(self.X, self.y)
        try:
            self.porter = Porter(self.clf_method, language='c')
        except:
            return "Model type not supported."

    def get_model_language(self) -> str:
        return 'c'

    def c_export(self, output_dir_name) -> str:
        model_path, _ = com.get_model_path(os.path.dirname( __file__ ), output_dir_name, self.clf_name, 'sklearnporter')

        # Export model using sklearn-porter
        output = self.porter.export(embed_data=True)
        with open(model_path, 'w') as f:
            f.write(output)

        return model_path

