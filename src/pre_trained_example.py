import sys
sys.path.append("..") # Adds higher directory to python modules path.

from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler
from sklearn.base import BaseEstimator, ClassifierMixin
import tensorflow as tf
import numpy as np
import mlino_pipeline as MLinoBench
import tensorflow.keras as keras
from tensorflow.keras import layers
from tensorflow.keras.callbacks import EarlyStopping
from tensorflow.keras.utils import to_categorical
import argparse

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

    parser = argparse.ArgumentParser(description='Your script description')

    # Add a command-line argument for the -train flag
    parser.add_argument('-train', action='store_true', help='Enable training mode')

    # Parse the command-line arguments
    args = parser.parse_args()

    if args.train == False:
        tflite_model_path = r"..\models\gesture\fca_10_gesture_quant_fullint_micro.tflite"

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

    if args.train == True:
        model = keras.Sequential([
            layers.Dense(10, activation='relu', input_shape=(50,)),
            layers.Dense(50, activation='relu'),
            layers.Dense(5, activation='softmax')
        ])

        # Compile the model
        optimizer = keras.optimizers.Adam(learning_rate=0.001)
        model.compile(optimizer=optimizer, loss='categorical_crossentropy', metrics=['accuracy'])
#
        # Display the model summary
        model.summary()

        X_train, y_train , X_test, y_test = MLinoBench.LoadTrainTestData().transform()

        scaler = StandardScaler()
        X_train = scaler.fit_transform(X_train)
        X_test = scaler.transform(X_test)

        y_train = to_categorical(y_train)
        y_test = to_categorical(y_test)

        early_stopping = EarlyStopping(monitor='val_loss', patience=3, restore_best_weights=True)
        history = model.fit(X_train, y_train, epochs=100, batch_size=32, validation_split=0.2, callbacks=[early_stopping])

        test_loss, test_accuracy = model.evaluate(X_test, y_test)

        converter = tf.lite.TFLiteConverter.from_keras_model(model)
        tflite_model = converter.convert()
        tflite_file = r'..\models\gesture\fca_10_gesture_default.tflite'
        # Save the TFLite model to a file
        with tf.io.gfile.GFile(tflite_file, 'wb') as f:
            f.write(tflite_model)

        # Quantization of weights (but not the activations)
        converter.optimizations = [tf.lite.Optimize.OPTIMIZE_FOR_SIZE]
        tflite_model = converter.convert()
        tflite_file = r"..\models\gesture\fca_10_gesture_quant.tflite"
        with tf.io.gfile.GFile(tflite_file, 'wb') as f:
            f.write(tflite_model)

        def representative_dataset_gen():
            for sample in X_train[::5]:
                sample = np.expand_dims(sample.astype(np.float32), axis=0)
                yield [sample]

        # Full integer quantization of weights and activations
        converter.optimizations = [tf.lite.Optimize.OPTIMIZE_FOR_SIZE]
        converter.representative_dataset = representative_dataset_gen
        tflite_model = converter.convert()
        tflite_file = r"..\models\gesture\fca_10_gesture_quant_fullint.tflite"
        with tf.io.gfile.GFile(tflite_file, 'wb') as f:
            f.write(tflite_model)


        # Full integer quantization of weights and activations for micro
        converter.optimizations = [tf.lite.Optimize.OPTIMIZE_FOR_SIZE]
        converter.representative_dataset = representative_dataset_gen
        converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS_INT8]
        tflite_model = converter.convert()
        tflite_file = r"..\models\gesture\fca_10_gesture_quant_fullint_micro.tflite"
        with tf.io.gfile.GFile(tflite_file, 'wb') as f:
            f.write(tflite_model)

        # Full integer quantization of weights and activations for micro, int8 input and output
        converter.optimizations = [tf.lite.Optimize.OPTIMIZE_FOR_SIZE]
        converter.representative_dataset = representative_dataset_gen
        converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS_INT8]
        converter.inference_input_type = tf.int8  # or tf.uint8
        converter.inference_output_type = tf.int8  # or tf.uint8
        tflite_model = converter.convert()
        tflite_file = r"..\models\gesture\fca_10_gesture_quant_fullint_micro_intio.tflite"
        with tf.io.gfile.GFile(tflite_file, 'wb') as f:
            f.write(tflite_model)

        print(f'Test Loss: {test_loss:.4f}')
        print(f'Test Accuracy: {test_accuracy:.4f}')