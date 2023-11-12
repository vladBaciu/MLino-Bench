from sklearn.pipeline import Pipeline
from sklearn.base import BaseEstimator, TransformerMixin
from sklearn.metrics import accuracy_score
import src.util.common as com
from src.util.data_loader.dataLoader import DataLoader
from src.classifier_builder import ClassifierBuilder

def load_config():
    return com.yaml_load("config.yaml")

class BenchmarkPipeline():
    def __init__(self, pipeline, frameworks):
        self.model, self.model_name = None, None

        self.config = load_config()
        self.builder = self.load_builder()
        self.pipe = pipeline
        self.frameworks = frameworks
        self.set_model()
        self.benchmark_model()
        self.builder.print_log_summary()

    def load_builder(self):
        return ClassifierBuilder(config_data=self.config, log_data=True)

    def benchmark_framework(self, framework, X_train, X_test, y_train, y_test):
        self.builder.build_classifier(framework, self.model_name, self.model, None,
                                      X_train, X_test, y_train, y_test, self.pipe)

    def set_model(self):
        try:
            self.model = self.pipe.named_steps["classifier"].model
        except:
            self.model = self.pipe.named_steps["classifier"]

        self.model_name =  type(self.model).__name__

    def train_model(self, X_train, y_train):
        self.pipe.fit(X_train, y_train)

    def test_model(self, X_test, y_test):
        y_pred = self.pipe.predict(X_test)
        accuracy = accuracy_score(y_test, y_pred)

        com.logging.info(f"Test accuracy {accuracy}")
        self.builder.logger_builder(None, f"Test ACC: {accuracy}")


    def get_preprocessed_data(self, X):
        # Create a new pipeline with only the preprocessing steps
        preprocessing_steps = [(name, step) for name, step in self.pipe.steps if name != 'classifier']
        preprocessing_pipe = Pipeline(preprocessing_steps)

        # Fit and transform the data with the preprocessing pipeline
        X_preprocessed = preprocessing_pipe.transform(X)

        return X_preprocessed

    def drop_data_loader(self):
        steps = self.pipe.steps

        # Remove the stage you don't want
        # In this example, we remove the 'scaler' stage
        steps = [step for step in steps if step[0] != 'data_loader']

        # Create a new pipeline with the remaining stages
        new_pipe = Pipeline(steps)
        return new_pipe

    def benchmark_model(self):

        # Load data
        data_loader = self.pipe.named_steps['data_loader']
        X_train, y_train, X_test, y_test = data_loader.transform()

        # Drop data loader
        self.pipe = self.drop_data_loader()

        # Train model
        self.train_model(X_train, y_train)

        # Test model
        self.test_model(X_test, y_test)

        # Get preprocessed data
        X_train = self.get_preprocessed_data(X_train)
        X_test = self.get_preprocessed_data(X_test)

        # Check if there are multiple frameworks to benchmark
        if isinstance(self.frameworks, str):
            # If input is not iterable, process it directly and return
            self.benchmark_framework(self.frameworks, X_train, X_test, y_train, y_test)
        elif isinstance(self.frameworks, list) and all(isinstance(i, str) for i in self.frameworks):
            for framework in self.frameworks:
                # Process each item in the iterable
                self.benchmark_framework(framework, X_train, X_test, y_train, y_test)


class LoadTrainTestData(BaseEstimator, TransformerMixin):
    def __init__(self):
        self.config = load_config()
        self.X_train, self.y_train, self.X_test, self.y_test =  [], [], [], []

    def fit(self, X, y=None):
        return self

    def transform(self, X=None):
        if self.config["training"]["dataset"] == "custom":
            self.X_train, self.y_train, self.X_test, self.y_test = load_custom_data(self.config)
            com.logging.info("Loading custom data")
        else:
            data_loader = DataLoader(self.config["training"]["dataset"])
            self.X_train, self.y_train, self.X_test, self.y_test = data_loader.load_data(self.config["training"]["train_test_split"])
            com.logging.info(f"Loading {self.config['training']['dataset']} dataset")
        return self.X_train, self.y_train, self.X_test, self.y_test

def load_custom_data(config):
    # Replace this with your actual data loading code
    X_train, y_train, X_test, y_test = [], [], [], []

    return X_train, y_train, X_test, y_test
