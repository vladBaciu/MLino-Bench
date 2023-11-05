import yaml
import os
import logging
import numpy as np
import matplotlib.pyplot as plt

logging.basicConfig(level=logging.DEBUG, format='%(asctime)s - %(levelname)s - %(message)s')

ACC_SCALE = 1

# Load parameters from a YAML file
def yaml_load(file_path):
    """
    Load parameters from a YAML file.

    Args:
        file_path (str): Path to the YAML file.

    Returns:
        dict: Loaded parameters from the YAML file.
    """
    with open(file_path) as stream:
        params = yaml.safe_load(stream)
    return params

# Dump content into a YAML file
def yaml_dump(content):
    """
    Dump content into a YAML file.

    Args:
        content (dict): Content to be written to the YAML file.
    """
    if content['runtime']['generated_model_dir']:
        file_path = os.path.join(content['runtime']['generated_model_dir'], "config.yaml")
        with open(file_path, 'w') as file:
            yaml.dump(content, file, default_flow_style=False)

# Create build paths for generated models
def create_build_path(src_root, output_dir_name, clf_type, framework, clf_name, ext):
    """
    Create build paths for generated models.

    Args:
        src_root (str): Source root directory.
        output_dir_name (str): Output directory name.
        clf_type (str): Classifier type.
        framework (str): Framework.
        clf_name (str): Classifier name.
        ext (str): File extension.

    Returns:
        tuple: Tuple containing model path and framework directory.
    """
    # Get the parent directory of src_root (one level up)
    parent_dir_one_level_up = os.path.dirname(src_root)
    # Get the parent directory of parent_dir_one_level_up (two levels up, one level back)
    parent_dir_two_levels_up = os.path.dirname(parent_dir_one_level_up)

    out_dir_root = os.path.join(parent_dir_two_levels_up, output_dir_name)
    os.makedirs(out_dir_root, exist_ok=True)

    clf_dir = os.path.join(out_dir_root, clf_type)
    os.makedirs(clf_dir, exist_ok=True)

    framework_dir = os.path.join(clf_dir, framework)
    os.makedirs(framework_dir, exist_ok=True)

    model_path = os.path.join(framework_dir, f'{clf_name}.{ext}')

    return model_path, framework_dir

# Eliminate the main function from a given file
def eliminate_main_function(file_path):
    """
    Eliminate the main function from a given file.

    Args:
        file_path (str): Path to the file to process.
    """
    with open(file_path, 'r') as file:
        content = file.read()

    # Find the position of the main function
    main_start = content.find("int main(")
    if main_start == -1:
        logging.info(f"Main function not found in the file: {file_path}")
        return

    # Find the opening brace of the main function
    brace_count = 1
    i = main_start + len("int main(int argc, const char * argv[]) {")
    while brace_count > 0:
        if i > len(content):
            logging.info("Error: Unbalanced braces in the main function.")
            return
        if content[i] == '{':
            brace_count += 1
        elif content[i] == '}':
            brace_count -= 1
        i += 1
    # Find the closing brace of the main function
    main_end = i

    # Remove the main function and its content
    updated_content = content[:main_start] + content[main_end:]

    # Write the updated content back to the file
    with open(file_path, 'w') as file:
        file.write(updated_content)

# Calculate classifier overall accuracy
def calculate_accuracy(framework, cls, y_pred, labels):
    """
    Calculate classifier overall accuracy.

    Args:
        framework (str): Framework name.
        cls (str): Classifier name.
        y_pred (numpy.ndarray): Predicted labels.
        labels (numpy.ndarray): True labels.

    Returns:
        float: Calculated accuracy.
    """
    y_pred_label = np.argmax(y_pred, axis=1)
    correct = np.sum(labels == y_pred_label)
    accuracy = ACC_SCALE * correct / len(y_pred)
    logging.info(f"{framework}:{cls} overall accuracy = {accuracy:2.1f}")
    return accuracy

# Calculate classifier accuracy per class
def calculate_all_accuracies(framework, cls, y_pred, labels, classes):
    """
    Calculate classifier accuracy per class.

    Args:
        framework (str): Framework name.
        cls (str): Classifier name.
        y_pred (numpy.ndarray): Predicted labels.
        labels (numpy.ndarray): True labels.
        classes (list): List of class names.

    Returns:
        numpy.ndarray: Array of accuracies per class.
    """
    n_classes = len(classes)
    accuracies = np.zeros(n_classes)

    for class_item in range(n_classes):
        true_positives = 0
        for i in range(len(y_pred)):
            if labels[i] == class_item:
                y_pred_label = np.argmax(y_pred[i, :])
                if labels[i] == y_pred_label:
                    true_positives += 1

        accuracies[class_item] = ACC_SCALE * true_positives / np.sum(labels == class_item)
        logging.info(f"{framework}:{cls} class accuracy = {accuracies[class_item]:2.1f} ({classes[class_item]})")

    return accuracies

# Calculate classifier ROC AUC
def calculate_auc(y_pred, labels, classes, name):
    """
    Calculate classifier ROC AUC.

    Args:
        y_pred (numpy.ndarray): Predicted labels.
        labels (numpy.ndarray): True labels.
        classes (list): List of class names.
        name (str): Model name.

    Returns:
        float: Calculated ROC AUC.
    """
    n_classes = len(classes)
    thresholds = np.arange(0.0, 1.01, .01)
    fpr = np.zeros([n_classes, len(thresholds)])
    tpr = np.zeros([n_classes, len(thresholds)])
    roc_auc = np.zeros(n_classes)

    n_normal = np.sum(labels == 0)

    for class_item in range(n_classes):
        all_positives = sum(labels == class_item)
        all_negatives = len(labels) - all_positives

        for threshold_item in range(1, len(thresholds)):
            threshold = thresholds[threshold_item]
            false_positives = 0
            true_positives = 0
            for i in range(len(y_pred)):
                if y_pred[i, class_item] > threshold:
                    if labels[i] == class_item:
                        true_positives += 1
                    else:
                        false_positives += 1
            fpr[class_item, threshold_item] = false_positives / float(all_negatives)
            tpr[class_item, threshold_item] = true_positives / float(all_positives)

        fpr[class_item, 0] = 1
        tpr[class_item, 0] = 1

        for threshold_item in range(len(thresholds) - 1):
            roc_auc[class_item] += .5 * (tpr[class_item, threshold_item] + tpr[class_item, threshold_item + 1]) * (
                    fpr[class_item, threshold_item] - fpr[class_item, threshold_item + 1]);

    roc_auc_avg = np.mean(roc_auc)
    print(f"Simplified average roc_auc = {roc_auc_avg:.3f}")

    plt.figure()
    for class_item in range(n_classes):
        plt.plot(fpr[class_item, :], tpr[class_item, :],
                 label=f"auc: {roc_auc[class_item]:0.3f} ({classes[class_item]})")
    plt.xlim([0.0, 0.1])
    plt.ylim([0.5, 1.0])
    plt.legend(loc="lower right")
    plt.xlabel('False Positive Rate')
    plt.ylabel('True Positive Rate')
    plt.title('ROC: ' + name)
    plt.grid(which='major')
    plt.show(block=False)

    return roc_auc

# Calculate autoencoder overall accuracy
def calculate_ae_pr_accuracy(y_pred, y_true):
    """
    Calculate autoencoder overall accuracy using precision-recall curve.

    Args:
        y_pred (numpy.ndarray): Predicted labels.
        y_true (numpy.ndarray): True labels.

    Returns:
        float: Calculated accuracy.
    """
    thresholds = np.amin(y_pred) + np.arange(0.0, 1.0, .01) * (np.amax(y_pred) - np.amin(y_pred))
    accuracy = 0
    n_normal = np.sum(y_true == 0)
    precision = np.zeros(len(thresholds))
    recall = np.zeros(len(thresholds))

    for threshold_item in range(len(thresholds)):
        threshold = thresholds[threshold_item]
        y_pred_binary = (y_pred > threshold).astype(int)
        true_negative = np.sum((y_pred_binary[0:n_normal] == 0))
        false_positive = np.sum((y_pred_binary[0:n_normal] == 1))
        true_positive = np.sum((y_pred_binary[n_normal:] == 1))
        false_negative = np.sum((y_pred_binary[n_normal:] == 0))
        precision[threshold_item] = true_positive / (true_positive + false_positive)
        recall[threshold_item] = true_positive / (true_positive + false_negative)
        accuracy_tmp = ACC_SCALE * (precision[threshold_item] + recall[threshold_item]) / 2
        if accuracy_tmp > accuracy:
            accuracy = accuracy_tmp

    print(f"Precision/recall accuracy = {accuracy:2.1f}")

    plt.figure()
    plt.plot(recall, precision)
    plt.xlim([0.0, 1.0])
    plt.ylim([0.0, 1.0])
    plt.xlabel('Recall')
    plt.ylabel('Precision')
    plt.title('Precision vs Recall')
    plt.grid(which='major')
    plt.show(block=False)

    return accuracy

# Calculate autoencoder ROC AUC
def calculate_ae_auc(y_pred, y_true, name):
    """
    Calculate autoencoder ROC AUC.

    Args:
        y_pred (numpy.ndarray): Predicted labels.
        y_true (numpy.ndarray): True labels.
        name (str): Model name.

    Returns:
        float: Calculated ROC AUC.
    """
    thresholds = np.amin(y_pred) + np.arange(0.0, 1.01, .01) * (np.amax(y_pred) - np.amin(y_pred))
    roc_auc = 0

    n_normal = np.sum(y_true == 0)
    tpr = np.zeros(len(thresholds))
    fpr = np.zeros(len(thresholds))

    for threshold_item in range(1, len(thresholds)):
        threshold = thresholds[threshold_item]
        y_pred_binary = (y_pred > threshold).astype(int)
        tpr[threshold_item] = np.sum((y_pred_binary[n_normal:] == 1)) / float(len(y_true) - n_normal)
        fpr[threshold_item] = np.sum((y_pred_binary[0:n_normal] == 1)) / float(n_normal)

    fpr[0] = 1
    tpr[0] = 1

    for threshold_item in range(len(thresholds) - 1):
        roc_auc += .5 * (tpr[threshold_item] + tpr[threshold_item + 1]) * (
                fpr[threshold_item] - fpr[threshold_item + 1]);

    print(f"Simplified roc_auc = {roc_auc:.3f}")

    plt.figure()
    plt.plot(tpr, fpr, label=f"auc: {roc_auc:0.3f}")
    plt.xlim([0.0, 1.0])
    plt.ylim([0.0, 1.0])
    plt.legend(loc="lower right")
    plt.xlabel('False positive rate')
    plt.ylabel('True positive rate')
    plt.title('ROC: ' + name)
    plt.grid(which='major')
    plt.show(block=False)

    return roc_auc
