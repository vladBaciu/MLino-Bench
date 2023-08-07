


from util.dataLoader import DataLoader
import util.common as com

class ClassifierBuilder(DataLoader):
    data_logger = list()

    def __init__(self) -> None:
        # Call parent constructor and load input data
        super(ClassifierBuilder, self).__init__()
        self.dataset = self.load_data()

        self.builder_type = None
        self.builder      = None

        # Load benchmark baseline
        self.benchmark_info = com.yaml_load()

        # Load dataset used for benchmarking
        self.__load_dataset()

    def __load_dataset(self):
        # Load user-defined data
        self.dataset = self.load_data()

        # Fallback to default datasets supported if user-defined data is not implemented
        if self.dataset == None:
            # If dataset is the sklearn Iris dataset.
            if self.benchmark_info["training"]["default_dataset"] == 'iris':
                from sklearn.datasets import load_iris
                self.iris_data = load_iris()
                self.X = self.iris_data.data
                self.y = self.iris_data.target

    def print_log_summary(self):
        #search an entry of type (('sklearn-porter', 'extra_trees'), "`.text' will not fit in region `text'")
        merged_errors = {}
        # Get error message entry
        for error in self.data_logger:
            # Get framework and classifier name
            key = error[0]
            # Get compiler error
            value = error[1]
            # If if framework-classifier pair is already present, merge error messages
            if key in merged_errors:
                merged_errors[key].append(value)
            else:
                merged_errors[key] = [value]


        print("\n\n=============== Builder log messages: ===============\n\n")
        for key, error_messages in merged_errors.items():
            tool_name, model_name = key
            print(f"{tool_name} {model_name}:")
            for message in error_messages:
                print(f"\t{message}")

    def logger_builder(self, cls_pair, cc_toolchain, status):
        common_error_found = False
        if cc_toolchain:
            for search_string in cc_toolchain.compile_errors_list:
                if search_string in status:
                    self.data_logger.append((cls_pair, search_string))
                    common_error_found = True

        if not common_error_found:
            self.data_logger.append((cls_pair, status))

    def build_classifier(self, port_framework, cls_name, cls_obj):

        if port_framework not in ['sklearn-porter', 'emlearn', 'micromlgen']:
            error = "The given porter '{}' is not supported.".format(port_framework)
            raise AttributeError(error)

        self.builder_type = port_framework

        if self.builder_type == 'sklearn-porter':
            from sklearnporter_builder import SkLearnPorterBuilder
            self.builder = SkLearnPorterBuilder(self.X, self.y, (cls_name, cls_obj))
        elif self.builder_type == 'emlearn':
            from emlearn_builder import EmlearnBuilder
            self.builder = EmlearnBuilder(self.X, self.y, (cls_name, cls_obj))
        elif self.builder_type == "micromlgen":
            from micromlgen_builder import MicromlgenBuilder
            self.builder = MicromlgenBuilder(self.X, self.y, (cls_name, cls_obj))

        # Create and train the model
        status = self.builder.train()

        if status:
            self.logger_builder((port_framework, cls_name), None, status)
        else:
            self.benchmark_info["runtime"]["model_name"]          = cls_name
            self.benchmark_info["runtime"]["porter_type"]         = port_framework
            # Export model
            self.benchmark_info['runtime']['generated_model_dir'] = self.builder.c_export(self.benchmark_info['training']['models_directory'])

            # Compile and benchmark the model
            if self.benchmark_info['target']['type'] == 'avr_gcc':
                from util.avr_gcc.gcc_benchmark import CompileAvrBenchmark
                cc_toolchain = CompileAvrBenchmark(self.benchmark_info)

            return_code, status = cc_toolchain.compile()
            if return_code:
                # If any error occured during compilation, print stderr stream data
                self.logger_builder((port_framework, cls_name), cc_toolchain, status)
            else:
                # If no error occured during compilation, print program size
                self.logger_builder((port_framework, cls_name), cc_toolchain, cc_toolchain.get_memory_footprint(status))
