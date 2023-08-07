import yaml
import os
import logging

logging.basicConfig(level=logging.DEBUG, format='%(asctime)s - %(levelname)s - %(message)s')

########################################################################
# load parameters.yaml
########################################################################
def yaml_load():
    script_dir = os.path.dirname(__file__)
    abs_file_path = os.path.join(script_dir, "..\\baseline.yaml")

    with open(abs_file_path) as stream:
        param = yaml.safe_load(stream)
    return param

########################################################################
# tba
########################################################################
def create_build_path(src_root, output_dir_name, clf_type, framework, clf_name, ext):

    # Get the parent directory of src_root (one level up)
    parent_dir_one_level_up = os.path.dirname(src_root)

    # Get the parent directory of parent_dir_one_level_up (two levels up, one level back)
    parent_dir_two_levels_up = os.path.dirname(parent_dir_one_level_up)

    out_dir_root = os.path.join(parent_dir_two_levels_up, output_dir_name)
    # checking if the directory out_dir exists or not.
    if not os.path.exists(out_dir_root):
        # if the out_dir directory is not present then create it.
        os.makedirs(out_dir_root)

    clf_dir = os.path.join(parent_dir_two_levels_up, output_dir_name, clf_type)
    if not os.path.exists(clf_dir):
        os.makedirs(clf_dir)

    framework_dir = os.path.join(parent_dir_two_levels_up, output_dir_name, clf_type, framework)
    if not os.path.exists(framework_dir):
        os.makedirs(framework_dir)

    model_path = os.path.join(parent_dir_two_levels_up, output_dir_name, clf_type, framework, f'{clf_name}.{ext}')

    return model_path, framework_dir

########################################################################
# tba
########################################################################
def eliminate_main_function(file_path):
    with open(file_path, 'r') as file:
        content = file.read()

    # Find the position of the main function
    main_start = content.find("int main(")
    if main_start == -1:
        print("Main function not found in the file:", file_path)
        return

    # Find the opening brace of the main function
    brace_count = 1
    i = main_start + len("int main(int argc, const char * argv[]) {")
    while brace_count > 0:
        if i > len(content):
            print("Error: Unbalanced braces in the main function.")
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