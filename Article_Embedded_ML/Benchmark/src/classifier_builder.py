


from util.dataLoader import DataLoader
import util.common as com

class ClassifierBuilder(DataLoader):
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

    def build_classifier(self, port_framework, cls_name, cls_obj):

        if port_framework not in ['sklearn-porter', 'emlearn']:
            error = "The given porter '{}' is not supported.".format(port_framework)
            raise AttributeError(error)
        self.builder_type = port_framework

        if self.builder_type == 'sklearn-porter':
            from sklearnporter_builder import SkLearnPorterBuilder
            self.builder = SkLearnPorterBuilder(self.X, self.y, (cls_name, cls_obj))
        elif self.builder_type == 'emlearn':
            pass

        # Create and train the model
        self.builder.train()

        # Check if the transpiler generates C or C++ code
        self.benchmark_info['runtime']['language'] = self.builder.get_model_language()

        # Export the C model
        #todo maybe use file extension to detect c or c++
        self.benchmark_info['runtime']['model_directory'] = self.builder.c_export(self.benchmark_info['training']['models_directory'])

        # Compile and benchmark the model
        if(self.benchmark_info['target']['type'] == 'avr'):
            from util.avr_gcc.gcc_benchmark import CompileAvrBenchmark
            cc_toolchain = CompileAvrBenchmark(self.benchmark_info)

        cc_toolchain.compile()