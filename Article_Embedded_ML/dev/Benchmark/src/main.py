import sklearn.ensemble
import sklearn.tree
import sklearn.neural_network
import sklearn.naive_bayes
import sklearn.svm

import classifier_builder as CB

frameworks  = {'sklearn-porter', 'emlearn'}
classifiers = {
    'decision_tree': sklearn.tree.DecisionTreeClassifier(),
    'random_forest': sklearn.ensemble.RandomForestClassifier(n_estimators=10, random_state=1),
    'extra_trees': sklearn.ensemble.ExtraTreesClassifier(n_estimators=10, random_state=1),
    #'svc': sklearn.svm.SVC(C=1., gamma=0.001, kernel='rbf', random_state=0),
    #'adaBoost': sklearn.ensemble.AdaBoostClassifier(base_estimator=sklearn.tree.DecisionTreeClassifier(max_depth=4, random_state=0), n_estimators=100,random_state=0)
    'gaussian_naive_bayes': sklearn.naive_bayes.GaussianNB(),
    'sklearn_mlp': sklearn.neural_network.MLPClassifier(hidden_layer_sizes=(10,10,), max_iter=1000, random_state=1),
}

if __name__ == "__main__":
    builder = CB.ClassifierBuilder()
    for name, cls in classifiers.items():
        builder.build_classifier('emlearn',  name, cls)

    for name, cls in classifiers.items():
        builder.build_classifier('sklearn-porter',  name, cls)

    builder.print_log_summary()