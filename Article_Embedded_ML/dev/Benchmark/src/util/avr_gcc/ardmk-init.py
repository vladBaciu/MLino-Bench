#!/usr/bin/python3

"""
Arduino-mk Makefile and project initialiser

This script can be used in its basic form create a project specific Makefile
for use with Arduino-mk. Addionally, it can be used to create a template
Arduino source file and a traditional boilerplate project file structure.

Example:
    * Run prompted within current working directory (requires Clint): `ardmk-init --cli`
    * Create Arduino Uno Makefile (useful within a library example): `ardmk-init -b uno`
    * Create boilerplate Arduino Uno project in current working directory of same
      name: `ardmk-init -b uno --project`
    * Create Arduino-mk nano Makefile in current working directory with template .ino:
    `ardmk-init -b nano -u atmega328 -tn my-project`

See `armk-init --help` for CLI arguments
"""

import os
import argparse

## Global Vars
VERSION = "1.2"
ARD_TEMPLATE = "\n\
#include <Arduino.h>\n\
#include <Wire.h>\n\
\n\
\n\
void setup() {\n\
}\n\
\n\
void loop() {\n\
}\n\
"

## Command Parser
PARSER = argparse.ArgumentParser(prog='ardmk-init',
                                 description='Arduino Makefile and boilerplate project generator.\
        For use with Ard-Makefile: https://github.com/sudar/Arduino-Makefile.\
        Script created by John Whittington https://github.com/tuna-f1sh 2017\
        Modified by Vlad Baciu 2023\
        \n\nVersion: ' + VERSION)
PARSER.add_argument('-v', '--verbose', action='store_true',
                    help="print file contents during creation")
PARSER.add_argument('-d', '--directory', default=os.getcwd(), help='directory to run generator, default cwd')
PARSER.add_argument('-b', '--board', default='uno', help='board tag')
PARSER.add_argument('-u', '--micro', default='AUTO', help='microcontroller on board')
PARSER.add_argument('-f', '--freq', default='AUTO', help='clock frequency')
PARSER.add_argument('-p', '--port', default='AUTO', help='monitor port')
PARSER.add_argument('-n', '--name', default=os.path.basename(os.getcwd()), help='project name')
PARSER.add_argument('-s', '--sam', action='store_true', help='sam device, will include Sam.mk rather than Arduino.mk')
PARSER.add_argument('--cli', action='store_true', help='run with user prompts (requires "Clint" module), rather than args')
PARSER.add_argument('-P', '--project', action='store_true',
                    help='create boilerplate project with src, lib and bin folder structure')
PARSER.add_argument('-t', '--template', action='store_true',
                    help='use template to generate main file')
PARSER.add_argument('-o', '--overwrite', action='store_true',
                    help='always overwrite generated file')
PARSER.add_argument('--template_path', action='store',
                    help='specify the file path of the template')
PARSER.add_argument('--optimization_level', action='store',
                    help='specify the optimization level')
PARSER.add_argument('--input_size', action='store',
                    help='specify the number of features')
PARSER.add_argument('-V', '--version', action='version', version='%(prog)s '+ VERSION)
ARGS = PARSER.parse_args()

try:
    from clint.textui import prompt, validators
except ImportError:
    if ARGS.cli:
        print("Python module 'clint' is required for running prompted. Install the module or run with arguments only")
        quit()


def generate_makefile():
    """
    Generate the Makefile content using prompts or parsed arguments
    """
    # Header
    file_content = "# Generated by ard-make version " + VERSION + "\n\n"

    # Basic
    if ARGS.cli:
        print("Generating Arduino Ard-Makefile project in "
                          + os.path.abspath(ARGS.directory))
        btag = prompt.query('Board tag?', default='uno')
        if btag != 'uno':
            bsub = prompt.query('Board sub micro?', default='atmega328')
            f_cpu = prompt.query('Board frequency', default='16000000L')
        else:
            bsub = 'AUTO'
            f_cpu = 'AUTO'
        monitor_port = prompt.query('Arduino port?', default='AUTO')
    else:
        btag = ARGS.board
        bsub = ARGS.micro
        f_cpu = ARGS.freq
        monitor_port = ARGS.port

    file_content += check_define('BOARD_TAG', btag)
    file_content += check_define('BOARD_SUB', bsub)
    file_content += check_define('F_CPU', f_cpu)
    file_content += check_define('MONITOR_PORT', monitor_port)

    # Extended
    if ARGS.cli:
        if not prompt.yn('Extended options?', default='n'):
            if not prompt.yn('Define local folders?', default='n'):
                src_dir = prompt.query('Sources folder (Makefile will be created here)?',
                                       default='', validators=[])
                userlibs = prompt.query('Library folder (will create if does not exist) - AUTO is Sketchbook directory?',
                                        default='AUTO', validators=[])
                obj_dir = prompt.query('Output directory?', default='AUTO', validators=[])
            else:
                src_dir = ''
                userlibs = 'AUTO'
                obj_dir = 'AUTO'
            boards_txt = prompt.query('Boards file?', default='AUTO')
            isp_prog = prompt.query('ISP programmer?', default='atmelice_isp')
            isp_port = prompt.query('ISP port?', default='AUTO')
            if not prompt.yn('Quiet make?', default='n'):
                file_content += "ARDUINO_QUIET = 1\n"

            file_content += check_define('ISP_PROG', isp_prog)
            file_content += check_define('ISP_PORT', isp_port)
            file_content += check_define('BOARDS_TXT', boards_txt)

            # Check andd create folders
            check_create_folder(src_dir)
            check_create_folder(userlibs)
            check_create_folder(obj_dir)

            # Makefile will be in src_dir so lib and bin must be relative
            if src_dir:
                userlibs = "../" + userlibs
                obj_dir = "../" + obj_dir

            file_content += check_define('USER_LIB_PATH', userlibs)
            file_content += check_define('OBJDIR', obj_dir)
        else:
            src_dir = ''

        if ARGS.template or not prompt.yn('Create template Arduino source?', default='n'):
            source_filename = prompt.query('Name of project?',
                                           default=os.path.basename(os.getcwd()))
            if src_dir:
                write_template(src_dir + "/" + source_filename)
            else:
                write_template(source_filename)
            file_content += check_define('TARGET', source_filename)

    else:
        if ARGS.project:
            src_dir = 'src'
            userlibs = 'lib'
            obj_dir = 'bin'
        else:
            src_dir = ''
            userlibs = 'AUTO'
            obj_dir = 'AUTO'

        # Check andd create folders
        check_create_folder(src_dir)
        check_create_folder(userlibs)
        check_create_folder(obj_dir)

        # Makefile will be in src_dir so lib and bin must be relative
        if src_dir:
            userlibs = "../" + userlibs
            obj_dir = "../" + obj_dir

        file_content += check_define('USER_LIB_PATH', userlibs)
        file_content += check_define('OBJDIR', obj_dir)

        if ARGS.project or ARGS.template:
            if src_dir:
                write_template(src_dir + "/" + ARGS.name)
            else:
                write_template(ARGS.name)
            file_content += check_define('TARGET', ARGS.name)

    if not "ARDMK_DIR" in os.environ:
        if not ARGS.cli:
            print("Warning: ARDMK_DIR environment variable not defined. \
                        Must be defined for Makefile to work")
        else:
            ardmk = prompt.query('Arduino Makefile path?',
                                 default='/usr/share/arduino',
                                 validators=[validators.PathValidator()])
            ardmk = "ARDMK_DIR := " + ardmk + "\n"

    # Get model name and set it as a define compilation flag
    file_content += "\nCPPFLAGS += -D{}".format(os.path.basename(os.path.dirname(ARGS.directory)).upper())

    #Set number of features
    file_content += "\nCPPFLAGS += -DNUMBER_OF_FEATURES={}".format(ARGS.input_size)

    # Set model directory as include directory. Emlearn generates includes statements
    # with angle brackets used for compiler-defined include paths
    file_content += "\nCPPFLAGS += -I{}".format(ARGS.directory.replace("\\", "/"))

    # Set optimization level
    file_content += "\nOPTIMIZATION_LEVEL={}".format(ARGS.optimization_level)

    # Generate also a map file
    file_content += "\nOTHER_LIBS =-Wl,-Map,$(OBJDIR)/$(TARGET).map"

    if ARGS.sam:
        file_content += "\ninclude $(ARDMK_DIR)/Sam.mk"
    else:
        file_content += "\ninclude $(ARDMK_DIR)/Arduino.mk"

    # Add forward slash if source directory exists
    if src_dir:
        write_to_makefile(file_content, (src_dir + "/"))
    else:
        write_to_makefile(file_content, "")

    return file_content

def write_to_makefile(file_content, path):
    """
    Write the Makefile file
    """
    makefile = open(path + "Makefile", 'w')
    print("Writing Makefile...")
    if ARGS.verbose:
        print(file_content)
    makefile.write(file_content)
    makefile.close()

def write_template(filename):
    """
    Write template Arduino .ino source
    """
    print("Writing " + os.path.abspath(filename) + ".ino...")
    if os.path.isfile(filename + '.ino') and not ARGS.overwrite:
        if not ARGS.cli:
            print(filename + '.ino' + ' already exists! Stopping.')
            return
        print(filename + '.ino' + ' already exists! Overwrite?')
        if prompt.yn('Continue?', default='n'):
            return
    src = open((filename + ".ino"), 'w')
    if ARGS.verbose:
        print(ARD_TEMPLATE)
    if ARGS.template_path is not None:
        template_file_path = ARGS.template_path
        # Read the content from the template file
        try:
            with open(template_file_path, 'r') as file:
                template_content = file.read()
        except FileNotFoundError:
            if ARGS.cli:
                print(f"Error: File '{template_file_path}' not found.")
        src.write("/* Project: " + filename + " */\n" + template_content)
    else:
        src.write("/* Project: " + filename + " */\n" + ARD_TEMPLATE)
    src.close()

def check_create_folder(folder):
    """
    Check if folder exists and make it if it doesn't and hasn't been set to AUTO
    """
    if folder and not folder == 'AUTO':
        if not os.path.exists(folder):
            print("Creating " + os.path.abspath(folder) + " folder")
            os.makedirs(folder)

def check_define(define, user):
    """
    Check whether user has set define and return Makefile formatted string if they have
    """
    # Return is empty unless user has passed value
    string = ""

    # Set define only if not empty or set to AUTO
    if user and not user == 'AUTO':
        string = define + " = " + user + "\n"

    return string

def check_args():
    """
    Check input args will work with Makefile
    """
    # Micro should be defined for non uno boards
    if ARGS.board != 'uno' and ARGS.micro == 'AUTO':
        print('\n!!! Warning: --micro should be defined and not left AUTO for non-Uno boards\n')


if __name__ == '__main__':
    # Create directory if not exist
    check_create_folder(ARGS.directory)
    # Check input args
    check_args()
    # Change to dir so all commands are run relative
    os.chdir(ARGS.directory)
    if os.path.isfile('Makefile'):
        if not ARGS.cli:
            print('Makefile in ' + os.path.abspath(ARGS.directory)
                             + ' already exists! Please remove before generating. Stopping.')
            quit()

        # Confirm with user if not quiet mode
        print('Makefile in ' + os.path.abspath(ARGS.directory)
                         + ' already exists! Overwrite?')
        if prompt.yn('Continue?', default='n'):
            quit()
    # Run it
    generate_makefile()
