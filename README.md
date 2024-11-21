# juce-template

This is a simple JUCE template using the CMake API. To use this template, run
```
cookiecutter gh:standardpointer/juce-template
```
and enter the following prompts.

To build this demo HelloWorld project, run:
```
mkdir build && cd build
cmake ..
cmake --build /path/to/build
```
The JUCE framework is added as a git submodule. The `post_gen_project.py` script inits a git project and adds the submodule.

# Dependencies:
- CMake
- cookiecutter
- Python3