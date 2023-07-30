import subprocess
import sys
import os

class CompileAvrBenchmark:
    def __init__(self, build_info) -> None:
        self.avr_gcc_dir = os.path.dirname(os.path.realpath(__file__))
        self.model_path, _ = os.path.splitext(build_info['runtime']['model_directory'])
        self.compile_errors_list = self.get_list_of_possible_errors()
        self.make_clean()

    def make_clean(self):
        make_clean_command = ["make", "clean", f"MODEL_PATH={self.model_path}"]
        try:
            result = subprocess.run(
                make_clean_command,
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
            raise RuntimeError(f"Error occurred during 'make clean': {e}")

    def compile(self):
        make_command = ["make", f"MODEL_PATH={self.model_path}"]
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
            raise RuntimeError(f"Error occurred during compilation: {e}")

        return stderr_str

    @staticmethod
    def get_list_of_possible_errors():
        return [
            "`.bss' is not within region `data'",
            "`.data' is not within region `data'",
            "`.data' will not fit in region `text'",
            "`.text' will not fit in region `text'"
        ]
