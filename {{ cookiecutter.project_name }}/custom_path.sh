#!/bin/zsh

: <<'END'
This optional script is used to copy the vst3 compiled to the VST3 folder in the artefacts directory to a custom path on Windows.
On Windows, the default location for VSTs is in C:/ProgramData/, which requires admin permission.

You COULD give that folder admin permissions, but if you use a custom plugin path anyways, this should be useful.
END

echo "Do you want to move your release to a custom path? [y/n]: " 
read user_input
user_input=$(echo "$user_input" | tr '[:upper:]' '[:lower:]')

if [[ "$user_input" == "y" ]]; then
    # Define source and destination paths
    src_file="build/{{ cookiecutter.project_name }}_artefacts/Release/VST3/{{ cookiecutter.product_name }}.vst3"
    dest_dir="F:/Plugins/VST3"

    # Ensure the source file exists
    if [ -d "$src_file" ]; then
        # Move the file
        mv "$src_file" "$dest_dir"
        echo "File moved to $dest_dir"
    else
        echo "Error: Source file does not exist."
    fi
elif [ "$user_input" == "n" ]; then
    echo "done"
else
    echo "Invalid input. Please enter 'y' or 'n'."
fi
