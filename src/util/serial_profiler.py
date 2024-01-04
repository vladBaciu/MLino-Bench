import numpy as np
import re
import serial
import time
import platform
import os
import common as com
from sklearn.metrics import accuracy_score

WARMUP_ITER = 1
INFER_ITER  = 1

class SerialProfiler:
    def __init__(self, build_info):
        self.expected_labels  = []
        self.input_data       = []
        self.inference_labels = []

        self.model_name     = build_info["runtime"]["model_name"]
        self.porter_type    = build_info["runtime"]["porter_type"]
        self.model_dir      = build_info['runtime']['generated_model_dir']
        self.no_of_features = build_info["runtime"]["no_of_features"]
        self.ratio_test_samples   = build_info["target"]["ratio_test_samples_on_target"]
        self.isteensy = build_info["target"]["mcu_family"] == "teensy"

        self.read_npy_files()

        if self.isteensy:
            ARDUINO_DIR = os.environ.get('ARDUINO_DIR')
            if ARDUINO_DIR is None:
                raise RuntimeError("ARDUINO_DIR environment variable is not set.")
            # Get tools path
            tools_path = os.path.join(ARDUINO_DIR, "hardware", "tools")

            # Execute teensy reboot script
            com.logging.info(f"{self.porter_type}:{self.model_name} Restrating Teensy...")
            os.system(f"{tools_path}/teensy_restart")

        try:
            self.mcu_serial = serial.Serial(port=self.get_com_port_name(build_info["target"]["monitor_port"]),
                                            baudrate=115200, timeout=.1)
            if not self.isteensy:
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

        if(mcu_ready == False):
            raise RuntimeError("MCU is not ready. Check the serial connection.")

        return data

    def read_npy_files(self):
        self.expected_labels = np.load(os.path.join(self.model_dir, "y_labels.npy"))
        self.input_data = np.load(os.path.join(self.model_dir, "y_data.npy"))

    def get_u8_data_bytes(self):
        np_u8_array = np.uint8(self.input_data)
        return np_u8_array.tobytes()

    def get_f32_data_bytes(self):
        np_f32_array = np.float32(self.input_data)
        return np_f32_array.tobytes()

    def get_f64_data_bytes(self):
        np_f64_array = np.float64(self.input_data)
        return np_f64_array.tobytes()

    def search_patern(self, data, pattern):
        return [int(re.search(pattern, item).group(1)) for item in data if re.search(pattern, item)]

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

    def measure_acc_and_time(self):
        # Initialize an empty list to store the extracted numbers
        ellapsed_time = []
        inference_result = []
        diff_ellapsed_time = 0

        f_bytes = self.get_fsize()
        print("Feature size: ", f_bytes)
        if f_bytes == 8:
            np_f_array = self.get_f64_data_bytes()
        elif f_bytes == 4:
            np_f_array = self.get_f32_data_bytes()
        else:
            np_f_array = self.get_u8_data_bytes()

        com.logging.info(f"{self.porter_type}:{self.model_name} Measuring accuracy and inference time ...")

        # Check if the user has specified the number of test samples
        if self.ratio_test_samples:
            # Get the specific ratio of test samples
            test_sample = int(len(self.expected_labels) * int(self.ratio_test_samples)/100)
        else:
            # Use all the test samples
            test_sample = len(self.expected_labels)

        com.logging.info(f"{self.porter_type}:{self.model_name} Sending {test_sample} test vectors...")
        for i in range(0, test_sample):
            com.logging.info(f"{self.porter_type}:{self.model_name} Sending test vector {i}")
            features = np_f_array[i*self.no_of_features*f_bytes: (i+1)*self.no_of_features*f_bytes]
            str_hex_bytes = ''.join('{:02x}'.format(x) for x in features)

            self.mcu_serial.write(bytes(f"db load {self.no_of_features*f_bytes}%", 'utf-8'))
            data = self.wait_ready_ack()
            #print(data)

            packet_size = 16 if (self.no_of_features * f_bytes) > 16 else (self.no_of_features * f_bytes)
            # Send chuncks of packet_size bytes
            for j in range(0, int(len(str_hex_bytes)/packet_size)):
                self.mcu_serial.write(bytes("db ", 'utf-8') + str_hex_bytes[j*packet_size: (j*packet_size) + packet_size].encode() + bytes("%", 'utf-8'))
                data = self.wait_ready_ack()

            remaining_bytes = len(str_hex_bytes) % packet_size
            if(remaining_bytes != 0):
                self.mcu_serial.write(bytes("db ", 'utf-8') + str_hex_bytes[-remaining_bytes:].encode() + bytes("%", 'utf-8'))
                data = self.wait_ready_ack()

            self.mcu_serial.write(bytes(f"infer {INFER_ITER} {WARMUP_ITER}%", 'utf-8'))
            data = self.wait_ready_ack()
            inference_result.append(self.get_inference_result(data))
            #print(data)

            time = self.get_ellapsed_time(data)
            if time:
                ellapsed_time.append(time)
            else:
                # Break if board is not responding anymore: e.g AdaBoost dynamic mem allocation.
                break

        #print(self.expected_labels[0:100], inference_result)
        acc = accuracy_score(self.expected_labels[0:test_sample], inference_result)
        com.logging.info(f"{self.porter_type}:{self.model_name} On target accuracy: {acc}")

        for start_end_times in ellapsed_time:
            time_diff = (start_end_times[1] - start_end_times[0])/INFER_ITER
            diff_ellapsed_time += time_diff
        mean_ellapsed_time = diff_ellapsed_time / len(ellapsed_time)

        com.logging.info(f"{self.porter_type}:{self.model_name} Inference time: {mean_ellapsed_time} us")

        return mean_ellapsed_time, acc
