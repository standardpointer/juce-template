#pragma once

#include <juce_audio_processors/juce_audio_processors.h>

const std::string plugin_ame = "{{ cookiecutter.plugin_name }}";

//==============================================================================
class {{ cookiecutter.plugin_name }}AudioProcessor : public juce::AudioProcessor
{
public:
    {{ cookiecutter.plugin_name }}AudioProcessor();
    ~{{ cookiecutter.plugin_name }}AudioProcessor() override;

    // AudioProcessor overrides
    void prepareToPlay(double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;
    void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    // Editor-related overrides
    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    // State management
    const juce::String getName() const override;
    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram(int index) override;
    const juce::String getProgramName(int index) override;
    void changeProgramName(int index, const juce::String& newName) override;

    void getStateInformation(juce::MemoryBlock& destData) override;
    void setStateInformation(const void* data, int sizeInBytes) override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR({{ cookiecutter.plugin_name }}AudioProcessor)
};

