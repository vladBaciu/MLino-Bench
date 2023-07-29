import yaml
import os

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