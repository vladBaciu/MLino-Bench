import subprocess
import os
import src.util.common as com
import re
import threading

class CompileAvrBenchmark:
    def __init__(self, build_info, clean_project):
        """
        Initialize the CompileAvrBenchmark instance.

        Args:
            build_info (dict): Build information containing runtime and target details.
        """
        # List of possible compile errors
        self.compile_errors_list = self.get_list_of_possible_errors()

        # Extract build information
        self.build_info = build_info

        #Search in model_dir if pca.h file exists
        self.pca_file = os.path.join(self.build_info['runtime']['generated_model_dir'], 'pca.h')
        self.pca = os.path.isfile(self.pca_file)

        self.total_model_size = 0

        # Create Arduino Makefile and run make clean
        if clean_project == True:
            self.create_makefile()
            self.make_clean()

    def create_makefile(self):
        """
        Generate the Arduino Makefile for the project.
        """
        try:
            makefile_path = os.path.join(self.build_info['runtime']['generated_model_dir'], 'Makefile')

            # Remove previously generated makefile if it exists
            if os.path.isfile(makefile_path):
                com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} deleting old makefile ...")
                os.remove(makefile_path)

            # Create makefile in model's build directory
            ardmk_init_command = [
                "python", "ardmk-init.py",
                "-d", self.build_info['runtime']['generated_model_dir'],
                "-t", "-o", "--template_path", self.build_info["runtime"]["template_path"],
                "--optimization_level", self.build_info["target"]["optimization_level"],
                "--input_size", str(self.build_info["runtime"]["no_of_features"]),
                "--board", self.build_info["target"]["board"],
                "--micro", self.build_info["target"]["mcu"],
                "--port", self.build_info["target"]["monitor_port"],
                "--model_type", self.build_info["runtime"]["model_type"]
            ]

            if "freq" in self.build_info["target"] and self.build_info["target"]["freq"]:
                ardmk_init_command.append("--freq")
                ardmk_init_command.append(self.build_info["target"]["freq"])

            if self.build_info["target"]["mcu_family"] == "sam":
                ardmk_init_command.append("--sam")

            if self.build_info["target"]["mcu_family"] == "teensy":
                ardmk_init_command.append("--teensy")

            if self.pca:
                ardmk_init_command.append("--pca")

            com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} generating new makefile ...")

            subprocess.run(
                ardmk_init_command,
                check=True,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                cwd=os.path.dirname(os.path.realpath(__file__)),
                universal_newlines=True,
                encoding="utf-8"
            )

            com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} makefile generation: OK")

        except Exception as e:
            raise RuntimeError(f"Error occurred during 'ardmk-init.py': {e}")

    def make_clean(self):
        """
        Run 'make clean' to clean the project directory.
        """
        try:
            make_clean_command = ["make", "clean", "-j8"]

            com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} cleaning project ...")

            subprocess.run(
                make_clean_command,
                cwd=self.build_info['runtime']['generated_model_dir'],
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                universal_newlines=True,
                encoding="utf-8",
                check=True
            )

            com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} project cleaning: OK")

        except subprocess.CalledProcessError as e:
            raise RuntimeError(f"Error occurred during cleaning: {e.stderr}")

    def read_and_print_stream(self, stream, prefix):
        for line in stream:
            print(f"{prefix}: {line}", end='')

    def make_upload(self):
        """
        Run 'make upload' to flash the binary.
        """
        try:
            make_upload_command = ["make", "upload"]

            com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} flashing binary model ...")

            # Start the subprocess and capture its output for stdout and stderr
            process = subprocess.Popen(
                make_upload_command,
                cwd=self.build_info['runtime']['generated_model_dir'],
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                universal_newlines=True,
                encoding="utf-8",
            )

            # Create a thread to read and print the stderr stream
            stderr_thread = threading.Thread(target=self.read_and_print_stream, args=(process.stderr, "subprocess"))

            # Start the stderr thread
            stderr_thread.start()

            # Read and print the stdout stream
            for line in process.stdout:
                print(f"subprocess: {line}", end='')

            # Wait for the subprocess to finish
            process.wait()

            # Wait for the stderr thread to finish
            stderr_thread.join()

            if process.returncode == 0:
                com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} flashing binary successfully")
            else:
                com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} flashing binary failed")

        except subprocess.CalledProcessError as e:
            raise RuntimeError(f"Error occurred during flashing: {e.stderr}")

    def compile(self):
        """
        Compile the model using the generated makefile.
        """
        try:
            make_command = ["make", "-j8"]

            com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} compiling model ...")

            status = subprocess.run(
                make_command,
                cwd=self.build_info['runtime']['generated_model_dir'],
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                universal_newlines=True,
                encoding="utf-8",
                check=True
            )

            com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} compilation: OK")
            return status.stdout

        except subprocess.CalledProcessError as e:
            raise RuntimeError(f"Error occurred during compilation: {e.stderr}")

    def get_model_size(self, builder):
        """
        Get the size of the compiled model.

        Args:
            builder: The model builder instance used for size calculation.

        Returns:
            str: Size information of the compiled model.
        """
        # Prepare build path
        build_path = os.path.join(self.build_info['runtime']['generated_model_dir'], 'size')
        if not os.path.exists(build_path):
            os.makedirs(build_path)

        try:
            # Read the content of model.h
            with open(self.build_info['runtime']['generated_model_path']) as h_file:
                model_size_code = h_file.read()

            com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} computing model size...")

            # Generate template and set optimization level
            model_size_code = builder.generate_size_template(model_size_code, self.build_info['runtime']['generated_model_path'])

            # Write the content of model.h to model.cpp
            with open(os.path.join(build_path, f'model.{self.build_info["runtime"]["language"]}'), 'w') as c_file:
                c_file.write(model_size_code)

            # Compile the C code to an object file using GCC
            compile_command = self.get_compile_command(build_path)
            subprocess.run(compile_command, cwd=build_path, check=True)

            if self.build_info["target"]["compiler"] == "gcc":
                size_command = ['avr-size', 'model.o']
            elif self.build_info["target"]["compiler"] == "arm":
                size_command = ['arm-none-eabi-size', 'model.o']

            size_output = subprocess.run(
                size_command,
                cwd=build_path,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                universal_newlines=True,
                encoding="utf-8",
                check=True
            )

            # Parse the size information
            pattern = r"\s*(\d+)\s+(\d+)\s+(\d+)\s+(\d+)\s+[0-9a-fA-F]"
            match = re.findall(pattern, size_output.stdout)

            if match:
                size_tuple = match[0]
                flash_size = size_tuple[0]
                data_size = size_tuple[1]
                bss_size = size_tuple[2]
                total_size = size_tuple[3]
                com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']} model size: {total_size} bytes")
            else:
                com.logging.info(f"{self.build_info['runtime']['porter_type']}:{self.build_info['runtime']['model_name']}: Failed to parse size information")

            self.total_model_size = total_size

            return f"Model size: text: {flash_size}; data: {data_size}; bss: {bss_size}; total: {total_size} bytes"

        except FileNotFoundError as file_err:
            raise RuntimeError(f"Error: {file_err.strerror}: {file_err.filename}")

        except subprocess.CalledProcessError as process_err:
            raise RuntimeError(f"Error: Command '{process_err.cmd}' returned non-zero exit status {process_err.returncode}:\n{process_err.output}")

        except Exception as e:
            raise RuntimeError(f"An error occurred: {str(e)}")

    def get_compile_command(self, build_path):
        """
        Get the compile command for the model.

        Args:
            build_path (str): The build path for the model.

        Returns:
            list: The compile command for the model.
        """

        if self.build_info["target"]["compiler"] == "gcc":
            compiler_cmd = "avr-gcc"
        elif self.build_info["target"]["compiler"] == "arm":
            compiler_cmd = "arm-none-eabi-gcc"

        return [
            compiler_cmd, '-fno-exceptions', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
            '-O{}'.format(self.build_info["target"]["optimization_level"]), '-c', 'model.{}'.format(self.build_info["runtime"]["language"]),
            '-o', 'model.o', '-I{}'.format(build_path.replace("\\", "/")),
            '-D {}'.format(self.build_info["runtime"]["model_name"].upper()),
            '-std=c99'
        ]

    def get_memory_footprint(self, linker_output):
        """
        Get the memory footprint of the compiled model from linker output.

        Args:
            linker_output (str): Linker output containing memory usage details.

        Returns:
            str: Memory footprint information.
        """
        text_section, data_section, bss_section = 0, 0, 0

        if self.build_info["target"]["compiler"] == "gcc":
            text_section = self.parse_linker_output_avr_gcc(linker_output, "Program:")
            data_section = self.parse_linker_output_avr_gcc(linker_output, "Data:")
        elif self.build_info["target"]["compiler"] == "arm":
            text_section = self.parse_linker_output_arm(linker_output, "text")
            data_section = self.parse_linker_output_arm(linker_output, "data")
            bss_section = self.parse_linker_output_arm(linker_output, "bss")

        return f"Total flash: {text_section} bytes, Total RAM: {data_section + bss_section} bytes"


    @staticmethod
    def check_memory_usage(input_string):
        pattern = r'\(\s*([\d.]+)%\s*Full\s*\)'

        # Use re.findall to find all matching percentage values in the input string
        percentage_values = re.findall(pattern, input_string)
        for i, percentage in enumerate(percentage_values):
            percentage_float = float(percentage)
            if percentage_float > 100:
                if(i == 0):
                    error_message = f"Text size is greater than the maximum memory size."
                else:
                    error_message = f"Data size is greater than the maximum memory size."
                raise RuntimeError(error_message)

    @staticmethod
    def parse_linker_output_arm(input_string, section_name):
        """
        Parse linker output to extract memory usage information.

        Args:
            input_string (str): Linker output string.
            section_name (str): Name of the memory section to extract.

        Returns:
            int: Size of the memory section.
        """
        bytes_count = 0
        start_index = input_string.find("text")
        # Define regular expressions to match numbers
        number_pattern = r'-?\d+'

        # Use regular expressions to find all the numbers in the string
        numbers = re.findall(number_pattern, input_string[start_index:])

        # Extract the text, data, and bss sizes
        if(section_name == "text"):
            bytes_count = int(numbers[0])
        elif(section_name == "data"):
            bytes_count = int(numbers[1])
        else:
            bytes_count = int(numbers[2])

        return bytes_count
    @staticmethod
    def parse_linker_output_avr_gcc(input_string, section_name):
        """
        Parse linker output to extract memory usage information.

        Args:
            input_string (str): Linker output string.
            section_name (str): Name of the memory section to extract.

        Returns:
            int: Size of the memory section.
        """
        # Find the section name in the input string
        section_start_index = input_string.find(section_name)
        if section_start_index == -1:
            raise ValueError(f"Section '{section_name}' not found in the input string.")

        # Find the first occurrence of a digit after the section name
        digit_start_index = section_start_index + len(section_name)
        while digit_start_index < len(input_string) and not input_string[digit_start_index].isdigit():
            digit_start_index += 1

        # Find the end of the digit sequence
        digit_end_index = digit_start_index
        while digit_end_index < len(input_string) and input_string[digit_end_index].isdigit():
            digit_end_index += 1

        # Extract the digits and convert to an integer
        bytes_str = input_string[digit_start_index:digit_end_index]
        bytes_count = int(bytes_str)

        CompileAvrBenchmark.check_memory_usage(input_string)

        return bytes_count

    @staticmethod
    def get_list_of_possible_errors():
        """
        Get a list of possible compile errors.

        Returns:
            list: List of strings representing possible compile errors.
        """
        return [
            "`.bss' is not within region `data'",
            "`.data' is not within region `data'",
            "`.data' will not fit in region `text'",
            "`.text' will not fit in region `text'"
        ]

    @staticmethod
    def read_stream(stream, output_list, print_data):
        """
        Read and process data from a stream, optionally printing it.

        Args:
            stream: Input stream to read from.
            output_list (list): List to store read lines.
            print_data (bool): Whether to print the read data.
        """
        for line in stream:
            # Check user option and decide if stdout pipe stream data should be printed or not
            if print_data:
                print(line.strip())
            output_list.append(line.strip())
