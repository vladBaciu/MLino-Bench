import numpy as np
import os
import glob
import re
import pandas as pd
from sklearn.preprocessing import StandardScaler, LabelEncoder
from sklearn.datasets import load_iris, load_breast_cancer, load_digits
from sklearn.model_selection import train_test_split

class GasDataLoader:
    #'sklearn_mlp': sklearn.neural_network.MLPClassifier(solver='lbfgs', alpha=1e-5, hidden_layer_sizes=(5, 6), random_state=1)
    #'adaBoost': sklearn.ensemble.AdaBoostClassifier(base_estimator=sklearn.tree.DecisionTreeClassifier(max_depth=4, random_state=0), n_estimators=20,random_state=0),

    def _load_file(self, filename):
        """internal function that loads one .dat file at the time

        Args:
          filename: string filename

        Returns:
          gas_labels: numpy vector of the labels of the datapoints
          features_matrix: numpy array of the 128-dimensional features of the datapoints will have a size of N*128, where N is the number of instances in the .data file
        """
        gas_labels = []
        features_lists = []
        with open(filename, 'r') as file_data:
          for i, line in enumerate(file_data.readlines()):
            gas_labels.append(int(line[0])-1)
            rest = line[1:]
            rest.strip()
            features_lists.insert(i, list(map(float, re.findall('\s\d*:([\d.-]+)', rest))))

        gas_labels = np.array(gas_labels, dtype=np.uint8)
        features_matrix = np.array(features_lists, dtype=np.float32)
        return gas_labels, features_matrix

    def load_data(self, last_train_batch_num):
        """ load the data from the 10 files and apply transformation
        Args:
          last_train_batch_num: an integer indicating the splitting of training and testing data
        Returns:
          train_labels: list of numpy vectors of the labels of training batches
          train_features: list of numpy arrays of the 128-dim features of training batches
          test_labels: list of numpy vectors of the labels of testing batches
          test_features: list of numpy arrays of the 128-dim features of testing batches
        """
        dat_files = glob.glob(os.path.join('../datasets/gas_sensor_array_drift','*.dat'))
        dat_files.sort(key=lambda el: int(re.findall('(\d+)', os.path.basename(el))[0]))
        #batch 1 and 2 for training and validation, others for testing
        train_labels, train_features = [], []
        test_labels, test_features = [], []

        for i, dat_file in enumerate(dat_files):
          gas_labels, features_matrix = self._load_file(dat_file)
          if i+1<=last_train_batch_num :#or i+1==2:
            train_labels.append(gas_labels)
            train_features.append(features_matrix)
          else:
            test_labels.append(gas_labels)
            test_features.append(features_matrix)

        return train_labels, train_features, test_labels, test_features

    def split_data(self,lists_of_labels, lists_of_features, ratio=0.8):
        """
           Combines different numpy arrays into a single numpy array, permutes the datapoint and their corresponing
           labels and splits data into training and validation at rate  8:2

        Args:
          list_of_labels: list of numpy vectors of labels
          list_of_features: list of numpy array of features

        Returns:
          train_label: a (single) permuted numpy vector of labels to be used for training
          train_features: a (single) permuted numpy array of features to be used for training
          val_label: a (single) permuted numpy vector of labels to be used for validation
          val_features: a (single) permuted numpy array of features to be used for validation

        """
        val_labels, val_features = None, None

        labels = np.concatenate(lists_of_labels, axis=0)
        features = np.concatenate(lists_of_features, axis=0)

        numel = labels.shape[0]
        p = np.random.permutation(labels.shape[0])
        labels = labels[p]
        features = features[p,:]
        train_labels = labels[0:int(ratio*numel)]
        train_features = features[0:int(ratio*numel), :]

        if ratio != 1:
          val_labels = labels[int(ratio*numel)+1:]
          val_features = features[int(ratio*numel)+1:, :]

        return train_labels, train_features, val_labels, val_features

    def load_dataset(self, split_test_train):
        val_features, val_labels = None, None

        dataLoader = GasDataLoader()
        scaler = StandardScaler()

        _, _, train_labels, train_features = dataLoader.load_data(0)
        train_labels, train_features, val_labels, val_features = dataLoader.split_data(train_labels, train_features, split_test_train)

        train_features = scaler.fit_transform(train_features)
        if split_test_train != 1:
          val_features = scaler.transform(val_features)

        return train_features, train_labels, val_features, val_labels


class SensorlessDriveDataLoader:
    def __init__(self):
        self.scaler = StandardScaler()
        self.c_names = [f"Feature{i+1}" for i in range(48)] + ["label"]

    def load_dataset(self, split_test_train):
        dat_file = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'datasets',
                                'sensorless_drive_diagnostics', 'Sensorless_drive_diagnosis.txt')
        dataset = pd.read_csv(dat_file, sep=" ", header=None, names=self.c_names)

        train_features, val_features, train_labels, val_labels = train_test_split(dataset.iloc[:, :-1], dataset["label"],
                                                                                  test_size=split_test_train, random_state=42)

        train_features = self.scaler.fit_transform(train_features)
        val_features = self.scaler.transform(val_features)

        return train_features, train_labels, val_features, val_labels

class HARDataLoader:
    def __init__(self):
        self.scaler = StandardScaler()
        self.csv_file = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'datasets', 'har', 'csv_data')
        self.features_file = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'datasets', 'har', 'features.txt')
        self.train_file = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'datasets', 'har', 'train')
        self.test_file = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'datasets', 'har', 'test')

    def get_csv_data(self):
        # Create directories if they don't exist
        os.makedirs(self.csv_file, exist_ok=True)

        # Load training data
        X_train = pd.read_csv(os.path.join(self.train_file, 'X_train.txt'), delim_whitespace=True, header=None)
        subject_train = pd.read_csv(os.path.join(self.train_file, 'subject_train.txt'), header=None, names=['subject'])
        y_train = pd.read_csv(os.path.join(self.train_file, 'y_train.txt'), header=None, names=['Activity'])

        # Combine training data into a single DataFrame
        train = pd.concat([X_train.iloc[:, :80], subject_train, y_train], axis=1)

        # Load test data
        X_test = pd.read_csv(os.path.join(self.test_file, 'X_test.txt'), delim_whitespace=True, header=None)
        subject_test = pd.read_csv(os.path.join(self.test_file, 'subject_test.txt'), header=None, names=['subject'])
        y_test = pd.read_csv(os.path.join(self.test_file, 'y_test.txt'), header=None, names=['Activity'])

        # Combine test data into a single DataFrame
        test = pd.concat([X_test.iloc[:, :80], subject_test, y_test], axis=1)

        # Write data to CSV files
        train.to_csv(os.path.join(self.csv_file, 'train.csv'), index=False)
        test.to_csv(os.path.join(self.csv_file, 'test.csv'), index=False)

    def load_dataset(self, split_test_train):
        #Get csv data if not already present
        if not os.path.exists(os.path.join(self.csv_file, 'train.csv')):
            self.get_csv_data()

        train_data = pd.read_csv(os.path.join(self.csv_file, 'train.csv'))
        test_data = pd.read_csv(os.path.join(self.csv_file, 'test.csv'))

        train_features = train_data.drop(['subject', 'Activity'], axis=1)
        train_labels = train_data.Activity.values

        val_features = test_data.drop(['subject', 'Activity'], axis=1)
        val_labels = test_data.Activity.values

        train_features = self.scaler.fit_transform(train_features)
        val_features = self.scaler.transform(val_features)

        return train_features, train_labels, val_features, val_labels

class GestureDataLoader:
    def load_dataset(self, split_test_train):
        scaler = StandardScaler()

        dat_file = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'datasets',
                                'gesture_phase_segmentation')

        # read .csv from provided dataset
        csv_filename01= os.path.join(dat_file, 'a1_raw.csv')
        csv_filename02= os.path.join(dat_file, 'a1_va3.csv')
        csv_filename03= os.path.join(dat_file, 'a2_raw.csv')
        csv_filename04= os.path.join(dat_file, 'a2_va3.csv')
        csv_filename05= os.path.join(dat_file, 'a3_raw.csv')
        csv_filename06= os.path.join(dat_file, 'a3_va3.csv')

        csv_filename07= os.path.join(dat_file, 'b1_raw.csv')
        csv_filename08= os.path.join(dat_file, 'b1_va3.csv')
        csv_filename09= os.path.join(dat_file, 'b3_raw.csv')
        csv_filename10= os.path.join(dat_file, 'b3_va3.csv')

        csv_filename11= os.path.join(dat_file, 'c1_raw.csv')
        csv_filename12= os.path.join(dat_file, 'c1_va3.csv')
        csv_filename13= os.path.join(dat_file, 'c3_raw.csv')
        csv_filename14= os.path.join(dat_file, 'c3_va3.csv')

        # df=pd.read_csv(csv_filename,index_col=0)
        df1=pd.read_csv(csv_filename01 , skiprows=[1,2,3,4])
        df2=pd.read_csv(csv_filename02)
        df3=pd.read_csv(csv_filename03 , skiprows=[1,2,3,4])
        df4=pd.read_csv(csv_filename04)
        df5=pd.read_csv(csv_filename05 , skiprows=[1,2,3,4])
        df6=pd.read_csv(csv_filename06)
        df7=pd.read_csv(csv_filename07 , skiprows=[1,2,3,4])
        df8=pd.read_csv(csv_filename08)
        df9=pd.read_csv(csv_filename09 , skiprows=[1,2,3,4])
        df10=pd.read_csv(csv_filename10)
        df11=pd.read_csv(csv_filename11 , skiprows=[1,2,3,4])
        df12=pd.read_csv(csv_filename12)
        df13=pd.read_csv(csv_filename13 , skiprows=[1,2,3,4])
        df14=pd.read_csv(csv_filename14)

        df1.drop('timestamp',axis=1,inplace=True)
        df1.drop('phase',axis=1,inplace=True)
        df3.drop('timestamp',axis=1,inplace=True)
        df3.drop('phase',axis=1,inplace=True)
        df5.drop('timestamp',axis=1,inplace=True)
        df5.drop('phase',axis=1,inplace=True)
        df7.drop('timestamp',axis=1,inplace=True)
        df7.drop('phase',axis=1,inplace=True)
        df9.drop('timestamp',axis=1,inplace=True)
        df9.drop('phase',axis=1,inplace=True)
        df11.drop('timestamp',axis=1,inplace=True)
        df11.drop('phase',axis=1,inplace=True)
        df13.drop('timestamp',axis=1,inplace=True)
        df13.drop('phase',axis=1,inplace=True)


        df2.rename(columns={'Phase': 'phase'}, inplace=True)
        df4.rename(columns={'Phase': 'phase'}, inplace=True)
        df6.rename(columns={'Phase': 'phase'}, inplace=True)
        df8.rename(columns={'Phase': 'phase'}, inplace=True)
        df10.rename(columns={'Phase': 'phase'}, inplace=True)
        df12.rename(columns={'Phase': 'phase'}, inplace=True)
        df14.rename(columns={'Phase': 'phase'}, inplace=True)


        p1 = pd.concat([df1,df2],axis=1)
        p2 = pd.concat([df3,df4],axis=1)
        p3 = pd.concat([df5,df6],axis=1)
        p4 = pd.concat([df7,df8],axis=1)
        p5 = pd.concat([df9,df10],axis=1)
        p6 = pd.concat([df11,df12],axis=1)
        p7 = pd.concat([df13,df14],axis=1)

        df= pd.concat([p1,p2,p3,p4,p5,p6,p7])
        le = LabelEncoder()
        df['phase'] = le.fit_transform(df['phase'])

        df = df.sample(frac=1)
        cols = list(df.columns)
        features = cols
        features.remove('phase')

        X = df[features]
        y = df['phase']

        train_features, val_features, train_labels, val_labels = train_test_split(X, y, test_size=split_test_train, random_state=42)

        train_features = scaler.fit_transform(train_features)
        val_features = scaler.transform(val_features)

        return train_features, train_labels, val_features, val_labels

class DefaultDataLoader:
    def __init__(self, data_set='iris'):
        self.data_set = data_set
        self.scaler = StandardScaler()

    def load_dataset(self, split_test_train):
        if self.data_set == 'iris':
            # Load the Iris dataset
            data = load_iris()
        elif self.data_set == 'breast_cancer':
            # Load the Breast Cancer dataset
            data = load_breast_cancer()
        elif self.data_set == 'digits':
            # Load the Digits dataset
            data = load_digits()
        else:
            raise ValueError(f"Dataset {self.data_set} not found")
        # Split the dataset into training and testing sets
        train_features, val_features, train_labels, val_labels= train_test_split(data.data, data.target, test_size=split_test_train, random_state=42)
        # Scale the features using StandardScaler
        train_features = self.scaler.fit_transform(train_features)
        val_features = self.scaler.transform(val_features)
        return train_features, train_labels, val_features, val_labels
class DataLoader:
    def __init__(self, data_set):
        self.data_set = data_set

    def load_data(self, split_test_train):
        try:
          class_instance = globals()[self.data_set]()
          return class_instance.load_dataset(split_test_train)
        except KeyError:
          class_instance = DefaultDataLoader(self.data_set)
          return class_instance.load_dataset(split_test_train)
