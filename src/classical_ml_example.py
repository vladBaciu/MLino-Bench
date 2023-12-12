import sys
sys.path.append("..") # Adds higher directory to python modules path.

import sklearn.ensemble
import sklearn.tree
import sklearn.neural_network
import sklearn.naive_bayes
import sklearn.svm
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler
import mlino_pipeline as MLinoBench


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
