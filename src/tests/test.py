import sys
import os
import argparse
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
    'TestDecisionTreeClassifier': sklearn.tree.DecisionTreeClassifier(),
}

if __name__ == "__main__":

    parser = argparse.ArgumentParser(description="Load a configuration file.")
    parser.add_argument('--platform', help="The platform to use.")
    parser.add_argument('--framework', help="The framework to use.")
    args = parser.parse_args()

    # Load the configuration data
    if args.platform == "due":
        config_data = com.yaml_load(os.path.join(os.path.dirname(__file__), "config_arduino_due.yaml"))
    elif args.platform == "mega":
        config_data = com.yaml_load(os.path.join(os.path.dirname(__file__), "config_arduino_mega.yaml"))
    elif args.platform == "teensy":
        config_data = com.yaml_load(os.path.join(os.path.dirname(__file__), "config_arduino_teensy.yaml"))
    else:
        sys.exit("No platform specified.")

    # Check supported frameworks
    if args.framework not in frameworks:
        sys.exit("Framework not supported.")

    # Load the data
    data_loader = DataLoader(config_data["training"]["dataset"])
    X_train, y_train, X_test, y_test = data_loader.load_data(0.8)
    com.logging.info(f"Loading {config_data['training']['dataset']} dataset")

    # Create a ClassifierBuilder object
    builder = ClassifierBuilder(config_data=config_data, log_data=True)
    for name, cls in classifiers.items():
        builder.build_classifier(args.framework,  name, cls, None,
                                 X_train, X_test, y_train, y_test)

    builder.print_log_summary()