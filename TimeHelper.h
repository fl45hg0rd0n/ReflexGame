#ifndef TIMER_HELPER_H
#define TIMER_HELPER_H

#include "Arduino.h" 
#include "gameDefines.h"

class TimerHelper
{
public:
	TimerHelper();
	~TimerHelper();

	unsigned long getTime();
	int randomNumber(); 


private:
	unsigned long m_time;

}




#endif