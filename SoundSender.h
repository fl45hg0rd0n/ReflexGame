#ifndef SOUND_SENDER_H
#define SOUND_SENDER_H

#include gameDefines.h
#include "Arduino.h"


#include <Wire.h>

class SoundSender
{
public:

   SoundSender();
   ~SoundSender();

   void send(SoundMessage message);
   void i2cSetup();

private:

	int m_SCL;
	int m_SDA;

};

#endif
