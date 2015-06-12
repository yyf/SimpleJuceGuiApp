/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
    setSize (640, 480);
    
    button1 = new TextButton ("Button 1");
    slider = new Slider ("Slider");
    
    // add to component
    addAndMakeVisible (button1);
    addAndMakeVisible (slider);
    
    slider->setBounds (20, 40, 260, 20);
    button1->setBounds (20, 70, 260, 20);
    
    // to register
    button1->addListener(this);
    
    slider->setSliderStyle (Slider::LinearHorizontal);
    slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider->addListener (this);
}

MainContentComponent::~MainContentComponent()
{
    slider = nullptr;
    button1 = nullptr;
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colours::white);
    g.setFont (Font (24.0f));
    g.setColour (Colours::yellowgreen);
    g.drawText ("Simple JUCE GUI App", getLocalBounds(), Justification::centred, true);
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainContentComponent::buttonClicked (Button* button)
{
    if (button == button1)
    {
        std::cout<< "button1 clicked" << std::endl;
    }
}

void MainContentComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    if (sliderThatWasMoved == slider) {
        std::cout<< "slider dragged, value = " << slider->getValue() << std::endl;
    }
}