import sklearn.ensemble
import sklearn.tree
import sklearn.neural_network
import sklearn.naive_bayes
import sklearn.svm
from sklearn.pipeline import Pipeline
from sklearn.base import BaseEstimator, ClassifierMixin
from sklearn.preprocessing import StandardScaler, MinMaxScaler
import numpy as np
import mlino_pipeline as MLinoBench


class FeatureQuantization(BaseEstimator, ClassifierMixin):
    def __init__(self, quant_type):
        self.quant_type = quant_type

    def fit(self, X, y):
        return self

    def transform(self, X):
        max_val = np.iinfo(self.quant_type).max
        return (X * max_val).astype(self.quant_type)

if __name__ == "__main__":

    #Example 1: Benchmark a random forest classifier using sklearn-porter
    model = sklearn.ensemble.RandomForestClassifier(n_estimators=10, max_depth=10, random_state=50)
    pipe = Pipeline([
        ('data_loader', MLinoBench.LoadTrainTestData()),
        ('scaler', StandardScaler()),
        ('classifier', model)
    ])

    MLinoBench.BenchmarkPipeline(pipe, "sklearn-porter")

    # Example 2: Compare different frameworks for a decision tree classifier
    frameworks = ["sklearn-porter", "emlearn", "micromlgen", "m2cgen", "embml"]

    model = sklearn.tree.DecisionTreeClassifier(max_depth=10, random_state=50)
    pipe = Pipeline([
        ('data_loader', MLinoBench.LoadTrainTestData()),
        ('scaler', StandardScaler()),
        ('classifier', model)
    ])

    MLinoBench.BenchmarkPipeline(pipe, frameworks)

    # Example 3: Feature quantization
    model = sklearn.ensemble.RandomForestClassifier(max_depth=5, n_estimators=10, random_state=50)
    pipe = Pipeline([
        ('data_loader', MLinoBench.LoadTrainTestData()),
        ('scaler', MinMaxScaler()),
        ('quantizer', FeatureQuantization(np.int8)),
        ('classifier', model)
    ])

    MLinoBench.BenchmarkPipeline(pipe, "sklearn-porter")