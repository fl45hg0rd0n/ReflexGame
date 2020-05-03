// ButtonHelper

/// @TODO add all the action of setting the buttons, 
///       buttons need to be on the same bus,
///       create struct fot the potential bus output for faster loops

#ifndef BUTTON_HELPER_H
#define BUTTON_HELPER_H

#include gameDefines.h
#include "Arduino.h"

class ButtonHelper{
public:

	int getSize();
	int getNewButton(int lastButton);


private:
	int m_numberOfButtons;
	uint8_t buttonPressed;


}

#endif