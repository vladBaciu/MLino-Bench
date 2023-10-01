import numpy as np
from sklearn.model_selection import cross_val_score, StratifiedKFold
from sklearn.ensemble import RandomForestClassifier
from classifier_builder import ClassifierBuilder
import util.common as com

class CustomRandomSearchCV:
    def __init__(self, estimator, param_distributions, config, n_iter=4, cv=5, random_state=None, metrics=None):
        self.estimator = estimator
        self.param_distributions = param_distributions
        self.n_iter = n_iter
        self.cv = cv
        self.random_state = random_state
        self.metrics = metrics

        self.builder = ClassifierBuilder(config_data=config, log_data=False)

        # Ensure consistent random sampling across runs
        np.random.seed(random_state)

    def fit(self, X, y):
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
        param_samples = []

        for _ in range(self.n_iter):
            params = {}
            for param_name, param_values in self.param_distributions.items():
                params[param_name] = np.random.choice(param_values)

            param_samples.append(params)

        return param_samples

    def _custom_cross_val_score(self, X, y, clean_project):
        scores = []
        acc, time_us, model_size = 0.0, 0.0, 0.0
        acc_mean, time_us_mean, model_size_mean = 0.0, 0.0, 0.0

        for train_idx, test_idx in StratifiedKFold(n_splits=self.cv, shuffle=True, random_state=self.random_state).split(X, y):
            X_train, X_test = X[train_idx], X[test_idx]
            y_train, y_test = y[train_idx], y[test_idx]
            acc, time_us, model_size = self.builder.build_classifier('sklearn-porter', 'test_cv',
                                                                     self.estimator, X_train, X_test, y_train, y_test,
                                                                     self.metrics, clean_project)

            acc_mean += float(acc)
            time_us_mean += float(time_us)
            model_size_mean += float(model_size)

            scores.append((float(acc), float(time_us), float(model_size)))

        self.builder.logger_builder(None, f"Accuracy: {acc_mean/self.cv}, Time: {time_us_mean/self.cv}, Size: {model_size_mean/self.cv}")

        return scores


# Example usage:
from sklearn.datasets import load_iris
from util.dataLoader import DataLoader

config_data = com.yaml_load("./config.yaml")
data_loader = DataLoader(config_data["training"]["dataset"])
X, y, _, _ = data_loader.load_data(split_test_train=1)

# Define the parameter grid for CustomRandomSearchCV
param_dist = {
    'n_estimators': [10, 5],
    'max_depth': [5],
}

cv_metrics = {
    'time_us': 0,
    'accuracy': 0,
    'size': 1
}

# Create a base classifier
base_clf = RandomForestClassifier()

# Create CustomRandomSearchCV instance
custom_random_search = CustomRandomSearchCV(
    estimator=base_clf,
    param_distributions=param_dist,
    config = config_data,
    n_iter=10,
    cv=3,
    random_state=42,
    metrics = cv_metrics
)

# Fit the CustomRandomSearchCV
custom_random_search.fit(X, y)

# Get the best parameters and score
print("Best Parameters:", custom_random_search.best_params_)
