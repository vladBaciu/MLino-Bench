import sys
sys.path.append("..") # Adds higher directory to python modules path.

from sklearn.decomposition import PCA
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler
from sklearn.base import BaseEstimator, ClassifierMixin
from tensorflow.keras.utils import to_categorical
from tensorflow.keras import Sequential, layers


import mlino_pipeline as MLinoBench

def tinymlgen_model(data_size, ouptut_size):

    nn = Sequential()
    nn.add(layers.Dense(units=10, activation='relu', input_shape=data_size))
    nn.add(layers.Dense(units=10, activation='relu'))
    nn.add(layers.Dense(ouptut_size, activation='softmax'))

    # use categorical_crossentropy for multi-class classification
    nn.compile(loss='categorical_crossentropy', optimizer='adam', metrics=['accuracy'])

    return nn

class CategoricalClassifier(BaseEstimator, ClassifierMixin):
    def __init__(self, model):
        self.model = model

    def fit(self, X, y):
        y = to_categorical(y)
        self.model.fit(X, y, epochs=100, batch_size=32)
        return self

    def predict(self, X):
        return self.model.predict(X).argmax(axis=1)

if __name__ == "__main__":

    # Example: Benchmark a Neural Network
    # Workaround to get input and output size when creating the model. Could be integrated in the pipeline using a wrapper
    X_train, y_train, _ , _ = MLinoBench.LoadTrainTestData().transform()
    y_train = to_categorical(y_train)
    model = tinymlgen_model(X_train.shape[1:], y_train.shape[1])

    pipe = Pipeline([
        ('data_loader', MLinoBench.LoadTrainTestData()),
        ('scaler', StandardScaler()),
        ('classifier', CategoricalClassifier(model))
    ])

    MLinoBench.BenchmarkPipeline(pipe, "tinymlgen")
