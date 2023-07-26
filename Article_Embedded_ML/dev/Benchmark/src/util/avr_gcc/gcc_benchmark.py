import subprocess
import sys
import os

class CompileAvrBenchmark:
    def __init__(self, build_info) -> None:

        # Get current directory
        self.avr_gcc_dir = os.path.dirname(os.path.realpath(__file__))

        # Get model path to be compiled
        self.model_path, _ = os.path.splitext(build_info['runtime']['model_directory'])

        make_command = ["make", "clean", "MODEL_PATH=" + r'{}'.format(self.model_path)]
        try:
            result = subprocess.run(
                make_command,
                shell=True,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                cwd=self.avr_gcc_dir
            )

            # Decode output from subprocess since it is a byte string
            stdout_str = result.stdout.decode("utf-8")
            stderr_str = result.stderr.decode("utf-8")

            print(stdout_str)
            print(stderr_str)
        except subprocess.CalledProcessError as e:
            # If the make command returns a non-zero exit code, it will raise CalledProcessError
            print("Error occurred: {}".format(e))

    def compile(self):
        make_command = ["make", "MODEL_PATH=" + r'{}'.format(self.model_path)]
        try:
            result = subprocess.run(
                make_command,
                shell=True,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                cwd=self.avr_gcc_dir
            )

            # Decode output from subprocess since it is a byte string
            stdout_str = result.stdout.decode("utf-8")
            stderr_str = result.stderr.decode("utf-8")

            print(stdout_str)
            print(stderr_str)
        except subprocess.CalledProcessError as e:
            # If the make command returns a non-zero exit code, it will raise CalledProcessError
            print("Error occurred: {}".format(e))