import numpy as np
import os
import glob
import re
from sklearn.preprocessing import StandardScaler

class GasDataLoader:
    def __init__(self) -> None:
        self.dummy = None
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

    def split_data(self,lists_of_labels, lists_of_features):
        """combines the different numpy arrays into a single numpy array, permutes the datapoint and their corresponinglabels and splits data into training and validation
           at rate  9:1

        Args:
          list_of_labels: list of numpy vectors of labels
          list_of_features: list of numpy array of features

        Returns:
          train_label: a (single) permuted numpy vector of labels to be used for training
          train_features: a (single) permuted numpy array of features to be used for training
          val_label: a (single) permuted numpy vector of labels to be used for validation
          val_features: a (single) permuted numpy array of features to be used for validation

        """
        labels = np.concatenate(lists_of_labels, axis=0)
        features = np.concatenate(lists_of_features, axis=0)

        numel = labels.shape[0]
        p = np.random.permutation(labels.shape[0])
        labels = labels[p]
        features = features[p,:]
        train_labels = labels[0:int(0.9*numel)]
        train_features = features[0:int(0.9*numel), :]

        val_labels = labels[int(0.9*numel)+1:]
        val_features = features[int(0.9*numel)+1:, :]

        return train_labels, train_features, val_labels, val_features

    def load_dataset(self):
        tmp = GasDataLoader()
        _, _, train_labels, train_features = tmp.load_data(0)
        train_labels, train_features, val_labels, val_features = tmp.split_data(train_labels, train_features)

        scaler = StandardScaler()
        train_features = scaler.fit_transform(train_features)
        val_features = scaler.transform(val_features)

        return train_features, train_labels, val_features, val_labels

class DataLoader:
    def __init__(self, data_set):
        self.data_set = data_set

    def load_data(self):
        try:
          class_instance = globals()[self.data_set]()
          return class_instance.load_dataset()
        except KeyError:
          print(f"Dataset {self.data_set} not found")