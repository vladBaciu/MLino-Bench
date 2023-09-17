import numpy as np
import re
import serial
import time
import platform
import os
import common as com
from sklearn.metrics import accuracy_score


class SerialProfiler:
    def __init__(self, build_info):
        self.expected_labels  = []
        self.input_data       = []
        self.inference_labels = []

        self.model_name     = build_info["runtime"]["model_name"]
        self.porter_type    = build_info["runtime"]["porter_type"]
        self.model_dir      = build_info['runtime']['generated_model_dir']
        self.no_of_features = build_info["runtime"]["no_of_features"]

        self.read_npy_files()

        try:
            self.mcu_serial = serial.Serial(port=self.get_com_port_name(build_info["target"]["monitor_port"]),
                                baudrate=9600, timeout=.1)
            self.wait_ready_ack()
            com.logging.info(f"{self.porter_type}:{self.model_name} Serial connection established: OK")

        except serial.SerialException as e:
            raise RuntimeError(f"Serial communication error: {e}")


    def get_com_port_name(self, com_number):
        if platform.system() == 'Windows':
            return f'COM{com_number}'
        else:
            return f'/dev/ttyUSB{com_number}'

    def wait_ready_ack(self, timeout=5):
        start_time = time.time()
        data = []
        mcu_ready = False
        while not mcu_ready and time.time() - start_time < timeout:
            serial_data = self.mcu_serial.readline()
            if serial_data.find(b"m-ready") != -1:
                mcu_ready = True
            else:
                data.append(serial_data)
        return data

    def read_npy_files(self):
        self.expected_labels = np.load(os.path.join(self.model_dir, "y_labels.npy"))
        self.input_data = np.load(os.path.join(self.model_dir, "y_data.npy"))

    def get_f32_data_bytes(self):
        np_f32_array = np.float32(self.input_data)
        return np_f32_array.tobytes()

    def get_f64_data_bytes(self):
        np_f64_array = np.float64(self.input_data)
        return np_f64_array.tobytes()

    def search_patern(self, data, pattern):
        extracted_data = []
        for item in data:
            match = re.search(pattern, item)
            if match:
                number = int(match.group(1))  # Extract the number from the matched pattern
                extracted_data.append(number)
        return extracted_data

    def get_inference_result(self, data):
            pattern = b"m-results-\[(\d+)\]"
            return self.search_patern(data, pattern)

    def get_ellapsed_time(self, data):
        pattern = b"m-lap-us-(\d+)"
        return self.search_patern(data, pattern)

    def get_feature_bytes(self, data):
        pattern = b"m-fsize-\[(\d+)\]"
        return self.search_patern(data, pattern)

    def get_fsize(self):
        self.mcu_serial.write(bytes("fsize%", 'utf-8'))
        data = self.wait_ready_ack()
        f_bytes = self.get_feature_bytes(data)
        return f_bytes[0]

    def do_inference(self):
        # Initialize an empty list to store the extracted numbers
        inference_result = []

        f_bytes = self.get_fsize()
        if f_bytes == 8:
            np_f_array = self.get_f64_data_bytes()
        else:
            np_f_array = self.get_f32_data_bytes()

        com.logging.info(f"{self.porter_type}:{self.model_name} Running inference ...")

        step = self.no_of_features * f_bytes
        for i in range(0,len(self.expected_labels)):
            features = np_f_array[i*step: (i*step) + step]
            str_hex_bytes = ''.join('{:02x}'.format(x) for x in features)

            self.mcu_serial.write(bytes(f"db load {step}%", 'utf-8'))
            self.wait_ready_ack()

            self.mcu_serial.write(bytes("db ", 'utf-8') + str_hex_bytes.encode() + bytes("%", 'utf-8'))
            self.wait_ready_ack()

            self.mcu_serial.write(bytes("infer 1 0%", 'utf-8'))
            data = self.wait_ready_ack()

            inference_result.append(self.get_inference_result(data))
        acc = accuracy_score(self.expected_labels, inference_result)
        com.logging.info(f"{self.porter_type}:{self.model_name} On target accuracy: {acc}")

        return acc

    def get_inference_time(self):
        # Initialize an empty list to store the extracted numbers
        ellapsed_time = []
        diff_ellapsed_time = 0

        f_bytes = self.get_fsize()
        if f_bytes == 8:
            np_f_array = self.get_f64_data_bytes()
        else:
            np_f_array = self.get_f32_data_bytes()

        step = self.no_of_features * f_bytes

        com.logging.info(f"{self.porter_type}:{self.model_name} Measuring inference time ...")

        for i in range(0,len(self.expected_labels)):
            features = np_f_array[i*step: (i*step) + step]
            str_hex_bytes = ''.join('{:02x}'.format(x) for x in features)

            self.mcu_serial.write(bytes(f"db load {step}%", 'utf-8'))
            self.wait_ready_ack()

            self.mcu_serial.write(bytes("db ", 'utf-8') + str_hex_bytes.encode() + bytes("%", 'utf-8'))
            self.wait_ready_ack()

            self.mcu_serial.write(bytes("infer 1 1%", 'utf-8'))
            data = self.wait_ready_ack()

            time = self.get_ellapsed_time(data)
            if time:
                ellapsed_time.append(time)
            else:
                # Break if board is not responding anymore: e.g AdaBoost dynamic mem allocation.
                break

        for start_end_times in ellapsed_time:
            time_diff = (start_end_times[1] - start_end_times[0])
            diff_ellapsed_time += time_diff
        mean_ellapsed_time = diff_ellapsed_time / len(ellapsed_time)

        com.logging.info(f"{self.porter_type}:{self.model_name} Inference time: {mean_ellapsed_time} us")

        return mean_ellapsed_time
