import sys
import os
sys.path.append("..") # Adds higher directory to python modules path.

from src.classifier_builder import ClassifierBuilder
from src.util.data_loader.dataLoader import DataLoader
from src.util import common as com

import sklearn.ensemble
import sklearn.tree
import sklearn.neural_network
import sklearn.naive_bayes
import sklearn.svm

frameworks = ["sklearn-porter", "emlearn", "micromlgen", "m2cgen", "embml"]

classifiers = {
    'DecisionTreeClassifier': sklearn.tree.DecisionTreeClassifier(),
    'RandomForestClassifier': sklearn.ensemble.RandomForestClassifier(),
    'SVC': sklearn.svm.SVC(gamma = 0.05, kernel='linear'),
}

if __name__ == "__main__":

    # Load the configuration data
    config_data = com.yaml_load(os.path.join(os.path.dirname(__file__), "config_arduino_due.yaml"))

    # Load the data
    data_loader = DataLoader(config_data["training"]["dataset"])
    X_train, y_train, X_test, y_test = data_loader.load_data(0.8)

    # Create a ClassifierBuilder object
    builder = ClassifierBuilder(config_data=config_data, log_data=True)
    for name, cls in classifiers.items():
        for j in frameworks:
            builder.build_classifier(j,  name,
                                     cls, None,
                                     X_train, X_test, y_train, y_test)

    builder.print_log_summary()