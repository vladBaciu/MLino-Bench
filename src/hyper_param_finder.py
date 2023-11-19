import sys
sys.path.append("..") # Adds higher directory to python modules path.

import numpy as np


import src.util.common as com
from classifier_builder import ClassifierBuilder
from util.data_loader.dataLoader import DataLoader

import sklearn.ensemble
import sklearn.tree
import sklearn.neural_network
import sklearn.naive_bayes
import sklearn.svm
from sklearn.model_selection import StratifiedKFold

class CustomRandomSearchCV:
    def __init__(self, estimator, param_distributions, config, n_iter=4, cv=5, random_state=None, metrics=None):
        """
        A custom implementation of random search cross-validation for hyperparameter tuning.

        :param estimator: The estimator object.
        :param param_distributions: Dictionary with parameters names (string) as keys and distributions or lists of
                                    parameters to try. Distributions must provide a rvs method for sampling (such as
                                    those from scipy.stats.distributions). If a list is given, it is sampled
                                    uniformly.
        :param config: The configuration data.
        :param n_iter: Number of parameter settings that are sampled. n_iter trades off runtime vs quality of the
                       solution.
        :param cv: Determines the cross-validation splitting strategy. Possible inputs for cv are:
                   - None, to use the default 5-fold cross-validation,
                   - integer, to specify the number of folds in a (Stratified)KFold,
                   - CV splitter,
                   - An iterable yielding (train, test) splits as arrays of indices.
        :param random_state: Pseudo random number generator state used for random uniform sampling from lists of
                             possible values instead of scipy.stats distributions.
        :param metrics: A dictionary of weights for each metric used to evaluate the models. The keys should be
                        'accuracy', 'time_us', and 'size', and the values should be floats that sum to 1.
        """
        self.estimator = estimator
        self.param_distributions = param_distributions
        self.n_iter = n_iter
        self.cv = cv
        self.random_state = random_state
        self.metrics = metrics

        self.builder = ClassifierBuilder(config_data=config, log_data=False)

        # Ensure consistent random sampling across runs
        np.random.seed(random_state)

        # Throw errors if metrics sum if not equal to 1
        if round(self.metrics['accuracy'] + self.metrics['time_us'] + self.metrics['size']) != 1:
            raise ValueError("The sum of the weights for the metrics should be equal to 1.")

    def fit(self, X, y):
        """
        Run the random search cross-validation to find the best hyperparameters.

        :param X: The input data.
        :param y: The target data.
        :return: The fitted CustomRandomSearchCV object.
        """
        acc_list, time_us_list, model_size_list = [], [], []
        acc, time_us, model_size = 0.0, 0.0, 0.0

        param_samples = self._generate_param_samples()
        # Convert the list of dictionaries to a set of tuples
        param_set = set(tuple(sorted(d.items())) for d in param_samples)
        # Convert the set of tuples back to a list of dictionaries
        param_list_unique = [dict(t) for t in param_set]

        best_score = float('-inf')
        best_params = None

        clean = True
        for params in param_list_unique:
            # Set the parameters in the estimator
            self.estimator.set_params(**params)

            # Perform cross-validation and calculate the mean score
            scores = self._custom_cross_val_score(X, y, clean_project=clean)
            clean = False

            for score in scores:
                acc_list.append(score[0])
                time_us_list.append(score[1])
                model_size_list.append(score[2])

            # Normalize the scores between 0 and 1
            if self.metrics['accuracy']:
                acc = (acc_list - np.min(acc_list)) / (np.max(acc_list) - np.min(acc_list))
            if self.metrics['time_us']:
                time_us = (time_us_list - np.min(time_us_list)) / (np.max(time_us_list) - np.min(time_us_list))
            if self.metrics['size']:
                model_size = (model_size_list - np.min(model_size_list)) / (np.max(model_size_list) - np.min(model_size_list))

            # Get the weights for each metric
            weight_acc  = self.metrics['accuracy']
            weight_time = -1 * self.metrics['time_us']
            weight_size = -1 * self.metrics['size']

            weighted_score = (weight_acc * np.mean(acc)) + (weight_time * np.mean(time_us)) + (weight_size * np.mean(model_size))

            # Update the best parameters if the current model is better
            if weighted_score > best_score:
                best_score = weighted_score
                best_params = params

            # Log the parameters
            self.builder.logger_builder(None, f"Parameters: {params}")

        self.best_params_ = best_params
        self.best_score_ = best_score

        self.builder.print_log_summary()
        return self

    def _generate_param_samples(self):
        """
        Generate a list of parameter samples.

        :return: A list of parameter samples.
        """
        param_samples = []

        for _ in range(self.n_iter):
            params = {}
            for param_name, param_values in self.param_distributions.items():
                params[param_name] = np.random.choice(param_values)

            param_samples.append(params)

        return param_samples

    def _custom_cross_val_score(self, X, y, clean_project):
        """
        Perform cross-validation and calculate the mean score.

        :param X: The input data.
        :param y: The target data.
        :param clean_project: Whether to clean the project before building the classifier.
        :return: A list of scores.
        """
        scores = []
        acc, time_us, model_size = 0.0, 0.0, 0.0
        acc_mean, time_us_mean, model_size_mean = 0.0, 0.0, 0.0

        for train_idx, test_idx in StratifiedKFold(n_splits=self.cv, shuffle=True, random_state=self.random_state).split(X, y):
            X_train, X_test = X[train_idx], X[test_idx]
            y_train, y_test = y[train_idx], y[test_idx]

            acc, time_us, model_size = self.builder.build_classifier('sklearn-porter', 'test_cv',
                                                                     self.estimator, None,
                                                                     X_train, X_test, y_train, y_test,
                                                                     None, self.metrics, clean_project)

            acc_mean += float(acc)
            time_us_mean += float(time_us)
            model_size_mean += float(model_size)

            scores.append((float(acc), float(time_us), float(model_size)))

        self.builder.logger_builder(None, f"Accuracy: {acc_mean/self.cv}, Time: {time_us_mean/self.cv}, Size: {model_size_mean/self.cv}")

        return scores


if __name__ == '__main__':

    config_data = com.yaml_load("config.yaml")
    data_loader = DataLoader(config_data["training"]["dataset"])
    X, y, _, _ = data_loader.load_data(split_train_test=0.8)

    # Define the parameter grid for CustomRandomSearchCV
    param_dist = {
        'n_estimators': [10, 5],
        'max_depth': [5],
    }

    iter_number = 10
    cv_rounds = 3
    cv_metrics = {
        'time_us': 0.333,
        'accuracy': 0.333,
        'size': 0.333
    }

    # Create a base classifier
    base_clf = sklearn.ensemble.RandomForestClassifier()

    # Create CustomRandomSearchCV instance
    custom_random_search = CustomRandomSearchCV(
        estimator=base_clf,
        param_distributions=param_dist,
        config = config_data,
        n_iter=iter_number,
        cv=cv_rounds,
        random_state=42,
        metrics = cv_metrics
    )

    # Fit the CustomRandomSearchCV
    custom_random_search.fit(X, y)

    # Get the best parameters and score
    com.logging.info(f"Best Parameters: {custom_random_search.best_params_}")