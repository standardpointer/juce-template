#include "PluginEditor.h"
#include "PluginProcessor.h"

//==============================================================================
{{ cookiecutter.plugin_name }}AudioProcessorEditor::{{ cookiecutter.plugin_name }}AudioProcessorEditor({{ cookiecutter.plugin_name }}AudioProcessor& p)
    : AudioProcessorEditor(&p), audioProcessor(p)
{
    setSize(400, 300); // Default window size
}

{{ cookiecutter.plugin_name }}AudioProcessorEditor::~{{ cookiecutter.plugin_name }}AudioProcessorEditor() = default;

void {{ cookiecutter.plugin_name }}AudioProcessorEditor::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);          // Fill background with black
    g.setColour(juce::Colours::white);        // Set text color
    g.setFont(20.0f);                         // Set font size
    g.drawText("Hello, World!", getLocalBounds(), juce::Justification::centred, true);
}

void {{ cookiecutter.plugin_name }}AudioProcessorEditor::resized() {}
