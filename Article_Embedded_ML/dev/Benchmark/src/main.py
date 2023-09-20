import sklearn.ensemble
import sklearn.tree
import sklearn.neural_network
import sklearn.naive_bayes
import sklearn.svm
from xgboost import XGBClassifier

import classifier_builder as CB

frameworks  = ['sklearn-porter', 'emlearn', 'micromlgen']
classifiers = {
    #'decision_tree': sklearn.tree.DecisionTreeClassifier(),
    #'random_forest': sklearn.ensemble.RandomForestClassifier(n_estimators=10, random_state=50),
    #'extra_trees': sklearn.ensemble.ExtraTreesClassifier(n_estimators=10, random_state=50),
    #'svc': sklearn.svm.SVC(gamma = 0.05, kernel='linear'),
    #'adaBoost': sklearn.ensemble.AdaBoostClassifier(base_estimator=sklearn.tree.DecisionTreeClassifier(max_depth=4, random_state=0), n_estimators=100,random_state=0),
    #'gaussian_naive_bayes': sklearn.naive_bayes.GaussianNB(),
    #'sklearn_mlp': sklearn.neural_network.MLPClassifier(solver='lbfgs', alpha=1e-5, hidden_layer_sizes=(5, 6), random_state=1)
    #'linearSVC': sklearn.svm.LinearSVC(C=0.1),
    #'nuSVC': sklearn.svm.NuSVC(gamma=0.1),
    #'adaBoost': sklearn.ensemble.AdaBoostClassifier(base_estimator=sklearn.tree.DecisionTreeClassifier(max_depth=4, random_state=0), n_estimators=20,random_state=0),
    #'xgboost': XGBClassifier(eval_metric='merror')
}

sklearnporter_classifiers = {
    #'decision_tree': sklearn.tree.DecisionTreeClassifier(),
    #'random_forest': sklearn.ensemble.RandomForestClassifier(n_estimators=10, random_state=50),
    #'extra_trees': sklearn.ensemble.ExtraTreesClassifier(n_estimators=10, random_state=50),
    #'svc': sklearn.svm.SVC(gamma = 0.05, kernel='linear'),
    #'adaBoost': sklearn.ensemble.AdaBoostClassifier(base_estimator=sklearn.tree.DecisionTreeClassifier(max_depth=4, random_state=0), n_estimators=100,random_state=0),
    #'linearSVC': sklearn.svm.LinearSVC(C=0.1),
    #'nuSVC': sklearn.svm.NuSVC(gamma=0.1),
    #'adaBoost': sklearn.ensemble.AdaBoostClassifier(base_estimator=sklearn.tree.DecisionTreeClassifier(max_depth=4, random_state=0), n_estimators=20,random_state=0),
}

emlearn_classifiers = {
    #'decision_tree': sklearn.tree.DecisionTreeClassifier(),
    #'random_forest': sklearn.ensemble.RandomForestClassifier(n_estimators=10, random_state=50),
    #'extra_trees': sklearn.ensemble.ExtraTreesClassifier(n_estimators=10, random_state=50),
    #'gaussian_naive_bayes': sklearn.naive_bayes.GaussianNB(),
    #'sklearn_mlp': sklearn.neural_network.MLPClassifier(solver='lbfgs', alpha=1e-5, hidden_layer_sizes=(5, 6), random_state=1)
    #'sequential': tba
}

micromlgen_classifiers = {
    #'decision_tree': sklearn.tree.DecisionTreeClassifier(),
    #'random_forest': sklearn.ensemble.RandomForestClassifier(n_estimators=10, random_state=50),
    #'svc': sklearn.svm.SVC(gamma = 0.05, kernel='linear'),
    #'gaussian_naive_bayes': sklearn.naive_bayes.GaussianNB(),
    #'xgboost': XGBClassifier(eval_metric='merror')
    #'SEFR'
    #"RVM"
}

m2gen = {
    #tba
}
embml = {
    #MLPClassifier for MLP classifiers;
    #LogisticRegression for logistic regression classifiers;
    #LinearSVC for SVM classifiers with linear kernel;
    #SVC for SVM classifiers -- with polynomial and RBF kernels;
    #DecisionTreeClassifier for decision tree models.
}

if __name__ == "__main__":
    builder = CB.ClassifierBuilder()

    #for name, cls in classifiers.items():
    #    builder.build_classifier(frameworks[0],  name, cls)
    #for name, cls in classifiers.items():
    #    builder.build_classifier(frameworks[1],  name, cls)
    for name, cls in emlearn_classifiers.items():
        builder.build_classifier(frameworks[1],  name, cls)

    builder.print_log_summary()