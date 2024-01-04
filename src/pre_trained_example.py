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
import os

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

    dname = MLinoBench.LoadTrainTestData().config["training"]["dataset"]

    if args.train == False:
        tflite_model_path = r"..\models\{}\fca_default.tflite".format(dname)

        # Read the TFLite model as bytes
        with open(tflite_model_path, 'rb') as file:
            tflite_model = file.read()

        interpreter = tf.lite.Interpreter(model_path=tflite_model_path)
        interpreter.allocate_tensors()

        input_details = interpreter.get_input_details()
        output_details = interpreter.get_output_details()

        print("Input shape: ", input_details[0]['shape'])
        print("Input type: ", input_details[0]['dtype'])
        print("Output shape: ", output_details[0]['shape'])
        print("Output type: ", output_details[0]['dtype'])

        pipe = Pipeline([
            ('data_loader', MLinoBench.LoadTrainTestData()),
            ('scaler', StandardScaler()),
            ('classifier', CategoricalClassifier(tflite_model, interpreter))
        ])

        MLinoBench.BenchmarkPipeline(pipe, "tinymlgen")

    if args.train == True:

        X_train, y_train , X_test, y_test = MLinoBench.LoadTrainTestData().transform()

        model = keras.Sequential([
            layers.Dense(10, activation='relu', input_shape=(X_train.shape[1],)),
            layers.Dense(50, activation='relu'),
            layers.Dense(len(np.union1d(y_train, y_test)), activation='softmax')
        ])

        # Compile the model
        optimizer = keras.optimizers.Adam(learning_rate=0.001)
        model.compile(optimizer=optimizer, loss='categorical_crossentropy', metrics=['accuracy'])

        # Display the model summary
        model.summary()

        scaler = StandardScaler()
        X_train = scaler.fit_transform(X_train)
        X_test = scaler.transform(X_test)

        y_train = to_categorical(y_train)
        y_test = to_categorical(y_test)

        early_stopping = EarlyStopping(monitor='val_loss', patience=3, restore_best_weights=True)
        history = model.fit(X_train, y_train, epochs=100, batch_size=32, validation_split=0.2, callbacks=[early_stopping])

        test_loss, test_accuracy = model.evaluate(X_test, y_test)

        #Create directory
        try:
            os.mkdir(r'..\models\{}'.format(dname))
        except OSError:
            print ("Creation of the directory %s failed" % r'..\models\{}'.format(dname))

        converter = tf.lite.TFLiteConverter.from_keras_model(model)
        tflite_model = converter.convert()
        tflite_file = r'..\models\{}\fca_default.tflite'.format(dname)
        # Save the TFLite model to a file
        with tf.io.gfile.GFile(tflite_file, 'wb') as f:
            f.write(tflite_model)

        def representative_dataset_gen():
            for sample in X_train[::5]:
                sample = np.expand_dims(sample.astype(np.float32), axis=0)
                yield [sample]

        if False: #not for micro
            # Quantization of weights (but not the activations)
            converter = tf.lite.TFLiteConverter.from_keras_model(model)
            converter.optimizations = [tf.lite.Optimize.DEFAULT]
            converter.target_spec.supported_ops = [ tf.lite.OpsSet.TFLITE_BUILTINS,  # enable TensorFlow Lite ops.
                                                    tf.lite.OpsSet.SELECT_TF_OPS  # enable TensorFlow ops.
                                                ]
            tflite_model = converter.convert()
            tflite_file = r"..\models\{}\fca_quant.tflite".format(dname)
            with tf.io.gfile.GFile(tflite_file, 'wb') as f:
                f.write(tflite_model)

            # Full integer quantization of weights and activations
            converter = tf.lite.TFLiteConverter.from_keras_model(model)
            converter.optimizations = [tf.lite.Optimize.DEFAULT]
            converter.representative_dataset = representative_dataset_gen
            converter.target_spec.supported_ops = [ tf.lite.OpsSet.TFLITE_BUILTINS,  # enable TensorFlow Lite ops.
                                              tf.lite.OpsSet.SELECT_TF_OPS  # enable TensorFlow ops.
                                          ]
            tflite_model = converter.convert()
            tflite_file = r"..\models\{}\fca_quant_fullint.tflite".format(dname)
            with tf.io.gfile.GFile(tflite_file, 'wb') as f:
                f.write(tflite_model)

            # Float16 quantization
            converter = tf.lite.TFLiteConverter.from_keras_model(model)
            converter.optimizations = [tf.lite.Optimize.DEFAULT]
            converter.target_spec.supported_types = [tf.float16]
            converter.target_spec.supported_ops = [ tf.lite.OpsSet.TFLITE_BUILTINS,  # enable TensorFlow Lite ops.
                                  tf.lite.OpsSet.SELECT_TF_OPS  # enable TensorFlow ops.
                              ]
            tflite_model = converter.convert()
            tflite_file = r"..\models\{}\fca_quant_float16_micro.tflite".format(dname)
            with tf.io.gfile.GFile(tflite_file, 'wb') as f:
                f.write(tflite_model)

            # 16-bit activations with 8-bit weights (experimental)
            converter = tf.lite.TFLiteConverter.from_keras_model(model)
            converter.representative_dataset = representative_dataset_gen
            converter.optimizations = [tf.lite.Optimize.DEFAULT]
            converter.target_spec.supported_ops = [tf.lite.OpsSet.EXPERIMENTAL_TFLITE_BUILTINS_ACTIVATIONS_INT16_WEIGHTS_INT8,
                                                   tf.lite.OpsSet.SELECT_TF_OPS]
            tflite_model = converter.convert()
            tflite_file = r"..\models\{}\fca_quant_16x8_micro.tflite".format(dname)
            with tf.io.gfile.GFile(tflite_file, 'wb') as f:
                f.write(tflite_model)

        # Full integer quantization of weights and activations for micro
        converter = tf.lite.TFLiteConverter.from_keras_model(model)
        converter.optimizations = [tf.lite.Optimize.DEFAULT]
        converter.representative_dataset = representative_dataset_gen
        converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS_INT8]
        tflite_model = converter.convert()
        tflite_file = r"..\models\{}\fca_quant_fullint_micro.tflite".format(dname)
        with tf.io.gfile.GFile(tflite_file, 'wb') as f:
            f.write(tflite_model)

        if False: #serial input data is not quantized
            # Full integer quantization of weights and activations for micro, int8 input and output
            converter = tf.lite.TFLiteConverter.from_keras_model(model)
            converter.optimizations = [tf.lite.Optimize.DEFAULT]
            converter.representative_dataset = representative_dataset_gen
            converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS_INT8]
            converter.inference_input_type = tf.int8  # or tf.uint8
            converter.inference_output_type = tf.int8  # or tf.uint8
            tflite_model = converter.convert()
            tflite_file = r"..\models\{}\fca_quant_fullint_micro_intio.tflite".format(dname)
            with tf.io.gfile.GFile(tflite_file, 'wb') as f:
                f.write(tflite_model)

        print(f'Test Loss: {test_loss:.4f}')
        print(f'Test Accuracy: {test_accuracy:.4f}')