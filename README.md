# MLino Bench: Evaluate machine learning models on resource-constrained devices

Streamline the entire lifecycle of machine learning models on embedded devices. From training and porting to compiling, loading, and profiling, MLino Bench provides an end-to-end solution for seamlessly integrating Scikit-learn models into resource-constrained environments. Choose from a variety of porter frameworks, including sklearn-porter, micromlgen, m2cgen, emlearn, embml and tinymlgen to seamlessly port Scikit-learn/Tensorflow models to formats suitable for embedded devices. 

![image](https://github.com/vladBaciu/MLino-Bench/assets/24388880/e850b3d7-f146-43b7-b1f6-b5e21320db2e)

# Use case

Accelerate your machine learning experiments on embedded devices. Quickly import your custom dataset into the pipeline, enabling a seamless transition to model evaluation. Assess model's performance in terms of in-target accuracy, inference time, and size. This swift and intuitive process provides valuable insights, empowering you to make informed decisions about model suitability for deployment in resource-constrained environments. Whether you're optimizing for speed, precision, or footprint, our use case simplifies the evaluation process, allowing you to iterate rapidly and fine-tune your models for optimal performance.

It can also serve various research purposes:
- It facilitates platform comparison, allowing researchers to assess and compare the performance of different supported platforms.
- The tool is instrumental for comparing porting frameworks, providing insights into the efficiency and compatibility of various frameworks in translating machine learning models to different platforms.
- Researchers can employ the tool for model comparison, specifically assessing models with different parameters. This functionality is valuable for fine-tuning and optimizing models based on specific research objectives.
- It supports feature comparison by providing the capability to analyze and compare the impact and effectiveness of different features in the context of machine learning models.

  
# How

The tool just assembles different porting frameworks with a makefile generator (Arduino-Makefile) and a benchmark API for profiling the model on target. Just plug and play any board supported by the build configuration file and you are ready to go.

So far, only the following platforms were tested. Feel free to add new platforms by creating your own build configuration.

| Board Name      | MCU            | MCU Architecture | Compiler    | Provider     |
|-----------------|----------------|-------------------|-------------|--------------|
| Arduino Mega    | ATmega2560     | AVR               | avr-gcc     | Atmel        |
| Arduino Due     | ATSAM3X8E      | ARM Cortex-M3     | arm-none-eabi-gcc | Atmel |
| Teensy 4.0      | IMXRT1062      | ARM Cortex-M7     | arm-none-eabi-gcc | NXP  |

# Requirements
- Download the following makefile project: [Arduino Makefile](https://github.com/sudar/Arduino-Makefile). I recommend you to use [make[(https://cygwin.com/packages/summary/make-src.html) from Cygwin.
- Add installation path to system variables as `ARDMK_DIR`.
- Install Arduino IDE (1.8.6 recommended)
- Add installation path to system variables as `ARDUINO_DIR`
- Add ARDUINO_PACKAGE_DIR to system variables as `c:/Users/yourUser/AppData/Local/Arduino15/packages` 
- Depending on your target platform, you need to set the compiler path as follows:
    - `AVR_TOOLS_DIR = C:/Users/yourUser/AppData/Local/Arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7` (compiler version might differ)
    - `ARM_TOOLS_DIR = C:/Users/yourUser/AppData/Local/Arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1`  (compiler version might differ)
- Install the requirements file in a virtual environment.
```
git clone https://github.com/vladBaciu/MLino-Bench.git
cd MLino-Bench
python -m venv venv  # Create a new virtual environment
source venv/bin/activate  # On Unix/MacOS
path\to\venv\Scripts\activate  # On Windows
pip install -r requirements.txt
```

# How to start

1. I recommend to start with one of the boards mentioned above, plug it to the USB port, properly modify the `config.yaml` file and start to runt the example file or the tests. For the tested boards, the configuration file from `src/tests/` can be used.
2. If you want to use your custom dataset, not the ones already included, you need to modify the `load_custom_data` function in `src/mlino_pipeline.py` file.
3. For adding new platforms, please check [this project](https://github.com/sudar/Arduino-Makefile) to see exactly if it is supported or how the configuration should look like.
   

