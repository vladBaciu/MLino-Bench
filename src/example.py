from sklearn.decomposition import PCA
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler
from sklearn.base import BaseEstimator, ClassifierMixin


import sklearn.ensemble
import sklearn.tree
import sklearn.neural_network
import sklearn.naive_bayes
import sklearn.svm

from tensorflow.keras.utils import to_categorical
from tensorflow.keras import Sequential, layers


import mlino_pipeline as MLinoBench

def tinymlgen_model(data_size, ouptut_size):

    nn = Sequential()
    nn.add(layers.Dense(units=50, activation='relu', input_shape=data_size))
    nn.add(layers.Dense(units=50, activation='relu'))
    nn.add(layers.Dense(ouptut_size, activation='softmax'))

    # use categorical_crossentropy for multi-class classification
    nn.compile(loss='categorical_crossentropy', optimizer='adam', metrics=['accuracy'])

    return nn

class CategoricalClassifier(BaseEstimator, ClassifierMixin):
    def __init__(self, model):
        self.model = model

    def fit(self, X, y):
        y = to_categorical(y)
        self.model.fit(X, y, epochs=10, batch_size=32)
        return self

    def predict(self, X):
        return self.model.predict(X).argmax(axis=1)

if __name__ == "__main__":
    frameworks = ["sklearn-porter", "emlearn", "micromlgen", "m2cgen", "embml"]

    #Example 1: Benchmark a random forest classifier using sklearn-porter
#
    #model = sklearn.ensemble.RandomForestClassifier(n_estimators=10, max_depth=10, random_state=50)
    #pipe = Pipeline([
    #    ('data_loader', MLinoBench.LoadTrainTestData()),
    #    ('scaler', StandardScaler()),
    #    ('classifier', model)
    #])
#
    #MLinoBench.BenchmarkPipeline(pipe, "sklearn-porter")

    # Example 2: Compare different frameworks for a decision tree classifier
    frameworks = ["sklearn-porter", "emlearn", "micromlgen", "m2cgen", "embml"]

    model = sklearn.tree.DecisionTreeClassifier(max_depth=10, random_state=50)
    pipe = Pipeline([
        ('data_loader', MLinoBench.LoadTrainTestData()),
        ('scaler', StandardScaler()),
        ('pca', PCA(n_components=20)),
        ('classifier', model)
    ])

    MLinoBench.BenchmarkPipeline(pipe, frameworks)

    # Example 3: Benchmark a Neural Network

    # Workaround to get input and output size when creating the model. Could be integrated in the pipeline using a wrapper
    #X_train, y_train, _ , _ = MLinoBench.LoadTrainTestData().transform()
    #y_train = to_categorical(y_train)
    #model = tinymlgen_model(X_train.shape[1:], y_train.shape[1])
#
    #pipe = Pipeline([
    #    ('data_loader', MLinoBench.LoadTrainTestData()),
    #    ('scaler', StandardScaler()),
    #    ('classifier', CategoricalClassifier(model))
    #])
#
    #MLinoBench.BenchmarkPipeline(pipe, "tinymlgen")
