import yaml
import os
import re

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
def get_model_path(src_root, output_dir_name, clf_type, framework):
    main_dir     = os.path.join(src_root, '..' )

    out_dir_root = os.path.join(main_dir, output_dir_name)
    # checking if the directory out_dir exists or not.
    if not os.path.exists(out_dir_root):
        # if the out_dir directory is not present then create it.
        os.makedirs(out_dir_root)

    clf_dir = os.path.join(main_dir, output_dir_name, clf_type)
    if not os.path.exists(clf_dir):
        os.makedirs(clf_dir)

    framework_dir = os.path.join(main_dir, output_dir_name, clf_type, framework)
    if not os.path.exists(framework_dir):
        os.makedirs(framework_dir)

    model_path = os.path.join(main_dir, output_dir_name, clf_type, framework, f'{framework}_{clf_type}.c')

    return model_path, framework_dir

def extract_custom_main(template_file_path):
    # Read the main_template.c file
    with open(template_file_path, 'r') as file:
        template_c_code = file.read()

    # Use regular expressions to find the custom main function in the template
    pattern = r'\bint\s+main\s*\([^)]*\)\s*\{[^}]*\}'
    match = re.search(pattern, template_c_code)

    if match:
        # Extract the custom main function from the template
        custom_main_code = match.group()
        return custom_main_code
    else:
        print("Custom main function not found in the template.")
        return None

def replace_main(c_code, new_main_code):
    # Use regular expressions to find the main function in the C code
    pattern = r'\bint\s+main\s*\([^)]*\)\s*\{[^}]*\}'
    match = re.search(pattern, c_code)

    if match:
        # Replace the main function with the new_main_code
        new_c_code = c_code[:match.start()] + new_main_code + c_code[match.end():]
        return new_c_code
    else:
        # Place the new_main_code at the end of the C code
        new_c_code = c_code.strip() + "\n\n" + new_main_code
        return new_c_code