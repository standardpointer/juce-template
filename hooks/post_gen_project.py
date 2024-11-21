import os
import subprocess


def initialize_submodule(submodule_url, submodule_path):
    try:
        # Ensure we're in the new project directory
        project_dir = os.getcwd()

        subprocess.check_call(['git', 'init'], cwd=project_dir)
        # Add the submodule
        subprocess.check_call(
            ['git', 'submodule', 'add', submodule_url, submodule_path], cwd=project_dir)

        # Initialize and update the submodule
        subprocess.check_call(
            ['git', 'submodule', 'update', '--init', '--recursive'], cwd=project_dir)
        print(
            f"Submodule {submodule_url} initialized successfully at {submodule_path}.")
    except subprocess.CalledProcessError as e:
        print(f"Error during submodule initialization: {e}")
        exit(1)


if __name__ == "__main__":
    # Read values from the context
    submodule_url = "https://github.com/juce-framework/juce.git"
    submodule_path = "modules/JUCE"

    # Initialize the submodule
    if submodule_url and submodule_path:
        initialize_submodule(submodule_url, submodule_path)
    else:
        print("No submodule configuration found in cookiecutter.json.")
