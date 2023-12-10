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


    #model = keras.Sequential([
    #    layers.Dense(10, activation='relu', input_shape=(561,)),
    #    layers.Dense(6, activation='softmax')
    #])
#
    ## Compile the model
    #optimizer = keras.optimizers.Adam(learning_rate=0.001)
    #model.compile(optimizer=optimizer, loss='sparse_categorical_crossentropy', metrics=['accuracy'])
#
    ## Display the model summary
    #model.summary()

    tflite_model_path = r"..\models\har\fca_10_har_quant_fullint_micro.tflite"

    # Read the TFLite model as bytes
    with open(tflite_model_path, 'rb') as file:
        tflite_model = file.read()

    interpreter = tf.lite.Interpreter(model_path=r"..\models\har\fca_10_har_quant_fullint_micro.tflite")
    interpreter.allocate_tensors()

#X_train, x_test , Y_test, y_test = MLinoBench.LoadTrainTestData().transform()
#scaler = StandardScaler()
#Y_test = scaler.fit_transform(Y_test)
#X_train = scaler.fit_transform(X_train)
#
#early_stopping = EarlyStopping(monitor='val_loss', patience=3, restore_best_weights=True)
#history = model.fit(X_train, x_test, epochs=100, batch_size=32, validation_split=0.2, callbacks=[early_stopping])
#print(history)
#
#test_loss, test_accuracy = model.evaluate(Y_test, y_test)
#
#converter = tf.lite.TFLiteConverter.from_keras_model(model)
#tflite_model = converter.convert()
#tflite_file = r'..\models\fca_10_har_default.tflite'
## Save the TFLite model to a file
#with tf.io.gfile.GFile(tflite_file, 'wb') as f:
#    f.write(tflite_model)
#
## Quantization of weights (but not the activations)
#converter.optimizations = [tf.lite.Optimize.DEFAULT]
#tflite_model = converter.convert()
#tflite_file = r"..\models\fca_10_har_quant.tflite"
#with tf.io.gfile.GFile(tflite_file, 'wb') as f:
#    f.write(tflite_model)
#
#
#
#def representative_dataset_gen():
#    for sample in X_train[::5]:
#        sample = np.expand_dims(sample.astype(np.float32), axis=0)
#        yield [sample]
#
## Full integer quantization of weights and activations
#converter.optimizations = [tf.lite.Optimize.DEFAULT]
#converter.representative_dataset = representative_dataset_gen
#tflite_model = converter.convert()
#tflite_file = r"..\models\fca_10_har_quant_fullint.tflite"
#with tf.io.gfile.GFile(tflite_file, 'wb') as f:
#    f.write(tflite_model)
#
#
## Full integer quantization of weights and activations for micro
#converter.optimizations = [tf.lite.Optimize.DEFAULT]
#converter.representative_dataset = representative_dataset_gen
#converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS_INT8]
##converter.inference_input_type = tf.int8  # or tf.uint8
##converter.inference_output_type = tf.int8  # or tf.uint8
#tflite_model = converter.convert()
#tflite_file = r"..\models\fca_10_har_quant_fullint_micro.tflite"
#with tf.io.gfile.GFile(tflite_file, 'wb') as f:
#    f.write(tflite_model)
#
## Full integer quantization of weights and activations for micro, int8 input and output
#converter.optimizations = [tf.lite.Optimize.DEFAULT]
#converter.representative_dataset = representative_dataset_gen
#converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS_INT8]
#converter.inference_input_type = tf.int8  # or tf.uint8
#converter.inference_output_type = tf.int8  # or tf.uint8
#tflite_model = converter.convert()
#tflite_file = r"..\models\fca_10_har_quant_fullint_micro_intio.tflite"
#with tf.io.gfile.GFile(tflite_file, 'wb') as f:
#    f.write(tflite_model)
#
#print(f'Test Loss: {test_loss:.4f}')
#print(f'Test Accuracy: {test_accuracy:.4f}')
##convert to float32
#Y_test = Y_test.astype(np.float32)
#eval_data = zip(Y_test, y_test)
#
#print(input_details)
#print("Input Tensor Shape:", input_details[0]['shape'])
#
#output_data = []
#labels = []
#for dat, label in eval_data:
#    if input_details[0]['dtype'] == np.float32:
#      interpreter.set_tensor(input_details[0]['index'], [dat])
#    elif input_details[0]['dtype'] == np.int8:
#      dat_q = np.array(dat/input_scale + input_zero_point, dtype=np.int8) # should match input type in quantize.py
#      interpreter.set_tensor(input_details[0]['index'], [dat_q])
#    else:
#      raise ValueError("TFLite file has input dtype {:}.  Only np.int8 and np.float32 are supported".format(
#        input_details[0]['dtype']))
#    interpreter.invoke()
#    # The function `get_tensor()` returns a copy of the tensor data.
#    # Use `tensor()` in order to get a pointer to the tensor.
#
#    print(interpreter.get_tensor(output_details[0]['index']))
#    output_data.append(np.argmax(interpreter.get_tensor(output_details[0]['index'])))
#    labels.append(label)
#print(output_data)
#print(labels)
#num_correct = np.sum(np.array(labels) == output_data)
#acc = num_correct / len(labels)
#print(acc)

    pipe = Pipeline([
        ('data_loader', MLinoBench.LoadTrainTestData()),
        ('scaler', StandardScaler()),
        ('classifier', CategoricalClassifier(tflite_model, interpreter))
    ])

    MLinoBench.BenchmarkPipeline(pipe, "tinymlgen")