import sys
sys.path.append("..") # Adds higher directory to python modules path.

from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler
from sklearn.base import BaseEstimator, ClassifierMixin
import tensorflow as tf
import numpy as np
import mlino_pipeline as MLinoBench

class CategoricalClassifier(BaseEstimator, ClassifierMixin):
    def __init__(self, model, interpreter):
        self.model = model
        self.interpreter = interpreter

    def fit(self, X, y):
        return self

    def predict(self, X):
        X = X.astype(np.float32)
        input_details = self.interpreter.get_input_details()
        output_details = self.interpreter.get_output_details()
        input_shape = input_details[0]['shape']
        input_scale, input_zero_point = input_details[0]["quantization"]
        output_data = []
        for dat in X:
            if input_details[0]['dtype'] == np.float32:
              self.interpreter.set_tensor(input_details[0]['index'], [dat])
            elif input_details[0]['dtype'] == np.int8:
              dat_q = np.array(dat/input_scale + input_zero_point, dtype=np.int8) # should match input type in quantize.py
              self.interpreter.set_tensor(input_details[0]['index'], [dat_q])
            else:
              raise ValueError("TFLite file has input dtype {:}.  Only np.int8 and np.float32 are supported".format(
                input_details[0]['dtype']))
            self.interpreter.invoke()

            output_data.append(np.argmax(self.interpreter.get_tensor(output_details[0]['index'])))

        return output_data

if __name__ == "__main__":

    tflite_model_path = r"..\models\har\fca_10_10_har_quant.tflite"

    # Read the TFLite model as bytes
    with open(tflite_model_path, 'rb') as file:
        tflite_model = file.read()

    interpreter = tf.lite.Interpreter(model_path=tflite_model_path)
    interpreter.allocate_tensors()

    pipe = Pipeline([
        ('data_loader', MLinoBench.LoadTrainTestData()),
        ('scaler', StandardScaler()),
        ('classifier', CategoricalClassifier(tflite_model, interpreter))
    ])

    MLinoBench.BenchmarkPipeline(pipe, "tinymlgen")