#import serial
#import time
#import numpy as np
#import sys
#import re
#from sklearn.metrics import accuracy_score
import common as com
#def wait_ready_ack():
#    time.sleep(0.1)
#    data = []
#    mcu_ready = False
#    while not mcu_ready:
#        serial_data = arduino.readline().decode('utf-8').strip()
#        if serial_data.find("m-ready") != -1:
#            mcu_ready = True
#        else:
#            data.append(serial_data)
#    return data
#
#
#arduino = serial.Serial(port='COM9',  baudrate=9600, timeout=.1)
#wait_ready_ack()
#
#
#expected =np.load("y_labels.npy")
#np_array = np.load("y_data.npy")
#np_f32_array = np.float32(np_array)
##for i in range(len(np_f32_array)):
##    np_f32_array[i] = [int(x) for x in np_f32_array[i]]
##print(len(np_f32_array))
#data_bytes = np_f32_array.tobytes()
#print(len(data_bytes))
#
## Regular expression pattern to match the desired format
#pattern = r"m-results-\[(\d+)\]"
## Initialize an empty list to store the extracted numbers
#extracted_numbers = []
#for i in range(0,len(np_f32_array)):
#    features = data_bytes[i*16: (i*16) + 16]
#    str_hex_bytes = ''.join('{:02x}'.format(x) for x in features)
#    arduino.write(bytes("db load 16%", 'utf-8'))
#    wait_ready_ack()
#    arduino.write(bytes("db ", 'utf-8') + str_hex_bytes.encode() + bytes("%", 'utf-8'))
#    data = wait_ready_ack()
#    print(data, str_hex_bytes)
#    arduino.write(bytes("infer 10%", 'utf-8'))
#    data = wait_ready_ack()
#
#
#
#    # Iterate through the list and extract numbers using the pattern
#    for item in data:
#        match = re.search(pattern, item)
#        if match:
#            number = int(match.group(1))  # Extract the number from the matched pattern
#            extracted_numbers.append(number)
#
#print(extracted_numbers, expected)
#print(accuracy_score(expected, extracted_numbers))
##str_hex_bytes = ''.join('{:02x}'.format(x) for x in data_bytes)
##
##arduino.write(bytes("db load 16%", 'utf-8'))
##data = wait_ready_ack()
##print(data)
##
##hex_string = '000004040000004040000004040000004040'
##byte_data = bytes.fromhex(hex_string)
##print(data_bytes)
##arduino.write(bytes("db ", 'utf-8') + hex_string.encode() + bytes("%", 'utf-8'))
##data =  arduino.readline()
##print(str_hex_bytes.encode())
##
#
##a = np.load("y_data.npy")
##a = np.float32(a)
##data_bytes = a.tobytes()
##
##wait_ready_ack()
##
##print("INIT DONE")
##
##arduino.write(bytes("db load 16%", 'utf-8'))
##wait_ready_ack()
##print("DATA SENT")
##
###arduino.write(bytes("db", 'utf-8') + data_bytes[0:16] + bytes("%", 'utf-8'))
##
##while True:
##    arduino.write(bytes("help%", 'utf-8'))
##    data = arduino.readline()
##    print(data)
##
###def write_read():
###    arduino.write(bytes("db load 16%",  'utf-8'))
###    time.sleep(1)
###    data = arduino.readline()
###    return  data
###
###a = np.load("y_data.npy")
###a = np.float32(a)
###
###if sys.byteorder=='big':
###    arr = a.byteswap()
###    data_bytes = arr.tobytes()
###    print(arr)
###    print (''.join('{:02x}'.format(x) for x in data_bytes))
###else:
###    data_bytes = a.tobytes()

from serial_profiler import SerialProfiler

build_info = com.yaml_load()
build_info["runtime"]["model_name"] = 1
build_info["runtime"]["porter_type"] = 2
build_info['runtime']['generated_model_dir'] = "D:/PhD/Workspace/Git_phd/phd/Article_Embedded_ML/dev/Benchmark/generated_models/random_forest/sklearn-porter"
build_info["runtime"]["no_of_features"]= 4
a=SerialProfiler(build_info)
a.get_inference_time()