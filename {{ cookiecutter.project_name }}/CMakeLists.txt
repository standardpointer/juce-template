cmake_minimum_required(VERSION 3.24)

project({{ cookiecutter.project_name }} VERSION 1.0.0)

# Add JUCE using add_subdirectory and the symlink
add_subdirectory(modules/JUCE)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Available configurations" FORCE)

# Create the plugin target
juce_add_plugin({{ cookiecutter.project_name }}
    COMPANY_NAME "{{ cookiecutter.author }}"
    PLUGIN_NAME  "{{ cookiecutter.plugin_name }}"
    BUNDLE_ID    "com.{{ cookiecutter.author }}.{{ cookiecutter.project_name }}.plugin"
    IS_SYNTH     FALSE
    NEEDS_MIDI_INPUT FALSE
    NEEDS_MIDI_OUTPUT FALSE
    EDITOR_WANTS_KEYBOARD_FOCUS FALSE
    # COPY_PLUGIN_AFTER_BUILD TRUE
    PLUGIN_MANUFACTURER_CODE "Sptr"
    PLUGIN_CODE "{{ cookiecutter.code_name }}"
    FORMATS VST3  # Add other formats (AU, AAX) if needed
    PRODUCT_NAME "{{ cookiecutter.product_name }}"
)

if(WIN32)
    set(JUCE_COPY_PLUGIN_AFTER_BUILD FALSE)
else()
    set(JUCE_COPY_PLUGIN_AFTER_BUILD TRUE)
endif()

# Add src files
target_sources({{ cookiecutter.project_name }} PRIVATE
    src/PluginProcessor.cpp
    src/PluginProcessor.h
    src/PluginEditor.cpp
    src/PluginEditor.h
)

# Link the required JUCE modules
target_link_libraries({{ cookiecutter.project_name }} PRIVATE
    juce::juce_audio_utils
)
