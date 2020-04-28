#ifndef SOUND_SENDER_H
#define SOUND_SENDER_H

#include gameDefines.h


#include <Wire.h>

class SoundSender
{
public:

   SoundSender();
   ~SoundSender();

   bool send(SoundMessage message);

};

#endif
