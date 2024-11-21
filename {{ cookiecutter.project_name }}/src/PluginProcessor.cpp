#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
{{ cookiecutter.plugin_name }}AudioProcessor::{{ cookiecutter.plugin_name }}AudioProcessor()
    : AudioProcessor(BusesProperties()
                         .withInput("Input", juce::AudioChannelSet::stereo(), true)
                         .withOutput("Output", juce::AudioChannelSet::stereo(), true))
{
}

{{ cookiecutter.plugin_name }}AudioProcessor::~{{ cookiecutter.plugin_name }}AudioProcessor() = default;

void {{ cookiecutter.plugin_name }}AudioProcessor::prepareToPlay(double, int) {}
void {{ cookiecutter.plugin_name }}AudioProcessor::releaseResources() {}

void {{ cookiecutter.plugin_name }}AudioProcessor::processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer&)
{
    buffer.clear(); // Silence audio for this basic template
}

juce::AudioProcessorEditor* {{ cookiecutter.plugin_name }}AudioProcessor::createEditor() { return new {{ cookiecutter.plugin_name }}AudioProcessorEditor(*this); }
bool {{ cookiecutter.plugin_name }}AudioProcessor::hasEditor() const { return true; }

const juce::String {{ cookiecutter.plugin_name }}AudioProcessor::getName() const { return "{{ cookiecutter.plugin_name }}"; }
bool {{ cookiecutter.plugin_name }}AudioProcessor::acceptsMidi() const { return false; }
bool {{ cookiecutter.plugin_name }}AudioProcessor::producesMidi() const { return false; }
bool {{ cookiecutter.plugin_name }}AudioProcessor::isMidiEffect() const { return false; }
double {{ cookiecutter.plugin_name }}AudioProcessor::getTailLengthSeconds() const { return 0.0; }

int {{ cookiecutter.plugin_name }}AudioProcessor::getNumPrograms() { return 1; }
int {{ cookiecutter.plugin_name }}AudioProcessor::getCurrentProgram() { return 0; }
void {{ cookiecutter.plugin_name }}AudioProcessor::setCurrentProgram(int) {}
const juce::String {{ cookiecutter.plugin_name }}AudioProcessor::getProgramName(int) { return {}; }
void {{ cookiecutter.plugin_name }}AudioProcessor::changeProgramName(int, const juce::String&) {}

void {{ cookiecutter.plugin_name }}AudioProcessor::getStateInformation(juce::MemoryBlock& destData) {}
void {{ cookiecutter.plugin_name }}AudioProcessor::setStateInformation(const void* data, int sizeInBytes) {}

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new {{ cookiecutter.plugin_name }}AudioProcessor();
}
