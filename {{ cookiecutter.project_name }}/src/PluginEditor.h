#pragma once

#include <juce_graphics/juce_graphics.h>
#include <juce_gui_basics/juce_gui_basics.h>
#include "PluginProcessor.h"

//==============================================================================
class {{ cookiecutter.plugin_name }}AudioProcessorEditor : public juce::AudioProcessorEditor
{
public:
    {{ cookiecutter.plugin_name }}AudioProcessorEditor({{ cookiecutter.plugin_name }}AudioProcessor&);
    ~{{ cookiecutter.plugin_name }}AudioProcessorEditor() override;

    void paint(juce::Graphics&) override;
    void resized() override;

private:
    {{ cookiecutter.plugin_name }}AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR({{ cookiecutter.plugin_name }}AudioProcessorEditor)
};

