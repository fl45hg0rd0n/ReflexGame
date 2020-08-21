// ButtonHelper

/// @TODO add all the action of setting the buttons, 
///       buttons need to be on the same bus,
///       create struct fot the potential bus output for faster loops

#ifndef BUTTON_HELPER_H
#define BUTTON_HELPER_H

#include gameDefines.h
#include "Arduino.h"

#define BUTTON_ONE    0b10000000
#define BUTTON_TWO    0b01000000
#define BUTTON_THREE  0b00100000
#define BUTTON_FOUR   0b00010000
#define BUTTON_FIVE   0b00001000
 
class ButtonHelper{
public:

	bool WasRightButton();
	int GetSize();
	int SetNextButton(int lastButton);
	bool WasButtonPress();


private:
	int m_numberOfButtons;
	uint8_t buttonPressed;


}

#endif