import sys
import os
import argparse
sys.path.append("..") # Adds higher directory to python modules path.

from src.classifier_builder import ClassifierBuilder
from src.util.data_loader.dataLoader import DataLoader
from src.util import common as com

from tensorflow.keras import Sequential, layers
from tensorflow.keras.utils import to_categorical

framework = "tinymlgen"

def tinymlgen_model(data_size, ouptut_size):
    nn = Sequential()
    nn.add(layers.Dense(units=10, activation='relu', input_shape=data_size))
    nn.add(layers.Dense(units=10, activation='relu'))
    nn.add(layers.Dense(ouptut_size, activation='softmax'))

    # use categorical_crossentropy for multi-class classification
    nn.compile(loss='categorical_crossentropy', optimizer='adam', metrics=['accuracy'])

    return nn

if __name__ == "__main__":

    parser = argparse.ArgumentParser(description="Load a configuration file.")
    parser.add_argument('--platform', help="The platform to use.")
    args = parser.parse_args()

    # Load the configuration data
    if args.platform == "due":
        config_data = com.yaml_load(os.path.join(os.path.dirname(__file__), "config_arduino_due.yaml"))
    elif args.platform == "teensy":
        config_data = com.yaml_load(os.path.join(os.path.dirname(__file__), "config_arduino_teensy.yaml"))
    else:
        sys.exit("No platform specified.")

    # Load the data
    data_loader = DataLoader(config_data["training"]["dataset"])
    X_train, y_train, X_test, y_test = data_loader.load_data(0.8)
    y_train = to_categorical(y_train)

    # Create a ClassifierBuilder object
    builder = ClassifierBuilder(config_data=config_data, log_data=True)

    builder.build_classifier(framework, "myNNModel", tinymlgen_model(X_train.shape[1:], y_train.shape[1]),
                             None, X_train, X_test, y_train, y_test)

    builder.print_log_summary()