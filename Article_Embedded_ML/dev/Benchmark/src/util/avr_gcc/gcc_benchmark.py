import subprocess
import sys
import os
import time
import threading
import util.common as com
import re

class CompileAvrBenchmark:
    def __init__(self, build_info) -> None:
        self.compile_errors_list = self.get_list_of_possible_errors()

        self.model_dir         = build_info['runtime']['generated_model_dir']
        self.model_path        = build_info['runtime']['generated_model_path']
        self.model_name        = build_info["runtime"]["model_name"]
        self.porter_type       = build_info["runtime"]["porter_type"]
        self.print_proc_stdout = build_info["target"]["compiler_stdout"]
        self.template          = build_info["runtime"]["template_path"]

        # Create Arduino Makefile
        self.create_makefile()

        # Make execute a make clean first
        self.make_clean()

    def create_makefile(self):
        try:
            makefile_path = os.path.join(self.model_dir, 'Makefile')

            # Remove previously generated makefile.
            # It might be not relevant if configuration changes.
            if os.path.isfile(makefile_path):
                com.logging.info(f"{self.porter_type}:{self.model_name} deleting old makefile ...")
                os.remove(makefile_path)

            # Create makefile in model's build directory
            ardmk_init_command = ["python", "ardmk-init.py",
                                  "-d", self.model_dir,
                                  "-t", "-o", "--template_path", self.template]

            com.logging.info(f"{self.porter_type}:{self.model_name} generating new makefile ...")

            subprocess.run(
                ardmk_init_command,
                check=True,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                cwd=os.path.dirname(os.path.realpath(__file__)),
                universal_newlines=True,
                encoding="utf-8",
            )

            com.logging.info(f"{self.porter_type}:{self.model_name} makefile generation: OK")

        except Exception as e:
            # If the make command returns a non-zero exit code, it will raise CalledProcessError
            raise RuntimeError(f"Error occurred during 'ardmk-init.py': {e}")

    def make_clean(self):
        stdout_data = []

        try:
            make_clean_command = ["make", "clean", "-j8"]

            com.logging.info(f"{self.porter_type}:{self.model_name} cleaning project ...")

            proc = subprocess.Popen(
                make_clean_command,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                cwd=self.model_dir,
                universal_newlines=True,
                encoding="utf-8"
            )

        except Exception as e:
            # Handle other exceptions that may occur during subprocess execution
            raise RuntimeError(f"Error occurred during compilation: {e}")

        # Start separate thread to read stdout
        stdout_thread = threading.Thread(target=self.read_stream,
                                         args=(proc.stdout, stdout_data, self.print_proc_stdout))
        stdout_thread.start()

        # Wait for the subprocess to finish
        proc.wait()

        # Wait for the thread to complete
        stdout_thread.join()

    def compile(self):
        # Create a list to store the stdout data
        stdout_data = []

        try:
            make_command = ["make", "-j8"]

            com.logging.info(f"{self.porter_type}:{self.model_name} compiling model ...")

            proc = subprocess.Popen(
                make_command,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                cwd=self.model_dir,
                universal_newlines=True,
                encoding="utf-8"
            )

        except Exception as e:
            # Handle other exceptions that may occur during subprocess execution
            raise RuntimeError(f"Error occurred during compilation: {e}")

        # Start separate thread to read stdout
        stdout_thread = threading.Thread(target=self.read_stream,
                                         args=(proc.stdout, stdout_data, self.print_proc_stdout))
        stdout_thread.start()

        # Wait for the subprocess to finish
        proc.wait()

        # Wait for the thread to complete
        stdout_thread.join()

        com.logging.info(f"{self.porter_type}:{self.model_name} compilation: OK")

        if proc.returncode == 0:
            return proc.returncode, str(stdout_data)
        else:
            return proc.returncode, proc.stderr.read()

    def get_model_size(self):
        try:
            # Read the content of model.h (assuming model.h is available in the current directory)
            with open(self.model_path) as h_file:
                model_h_code = h_file.read()

            # Write the content of model.h to model.cpp
            with open(os.path.join(self.model_dir, 'temp.cpp'), 'w') as cpp_file:
                cpp_file.write(model_h_code)

            # Compile the C code to an object file using GCC
            compile_command = ['avr-gcc', '-Os', '-c', 'temp.cpp', '-o', 'temp.o']
            subprocess.run(compile_command, cwd=self.model_dir, check=True)

            # Use the 'size' command to get the sizes of different sections
            size_command = ['avr-size', 'temp.o']
            size_output = subprocess.run(size_command,
                                         cwd=self.model_dir,
                                         stdout=subprocess.PIPE,
                                         stderr=subprocess.PIPE,
                                         universal_newlines=True,
                                         encoding="utf-8",
                                         check=True)

            # Clean up the temporary files
            subprocess.run(['rm', 'temp.cpp', 'temp.o'], cwd=self.model_dir, check=True)

            # Parse the size information to extract flash size, data size, bss size, and total size
            pattern = r"\s*(\d+)\s+(\d+)\s+(\d+)\s+(\d+)\s+[0-9a-fA-F]"
            match = re.findall(pattern, size_output.stdout)

            if match:
                size_tuple = match[0]

                flash_size = size_tuple[0]
                data_size  = size_tuple[1]
                bss_size   = size_tuple[2]
                total_size = size_tuple[3]

                com.logging.info(f"{self.porter_type}:{self.model_name} model size: {total_size}")
            else:
                com.logging.info(f"{self.porter_type}:{self.model_name}: Failed to parse size information")

            return f"Model size: text: {flash_size}; data: {data_size}; bss: {bss_size}; total: {total_size}"

        except FileNotFoundError as file_err:
            raise RuntimeError(f"Error: {file_err.strerror}: {file_err.filename}")

        except subprocess.CalledProcessError as process_err:
            raise RuntimeError(f"Error: Command '{process_err.cmd}' returned non-zero exit status {process_err.returncode}:\n{process_err.output}")

        except Exception as e:
            raise RuntimeError(f"An error occurred: {str(e)}")

    def get_memory_footprint(self, linker_output):
        text_section = self.parse_linker_output(linker_output, "Program:")
        data_section = self.parse_linker_output(linker_output, "Data:")

        return f"Total flash: {text_section}, Total RAM: {data_section}"

    @staticmethod
    def parse_linker_output(input_string, section_name):
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

        return bytes_count

    @staticmethod
    def get_list_of_possible_errors():
        return [
            "`.bss' is not within region `data'",
            "`.data' is not within region `data'",
            "`.data' will not fit in region `text'",
            "`.text' will not fit in region `text'"
        ]

    @staticmethod
    def read_stream(stream, output_list, print_data):
        for line in stream:
            # Check user option and decide if stdout pipe stream data should be printed or not
            if print_data:
                print(line.strip())
            output_list.append(line.strip())
