#include "Arduino.h"


TimerHelper::TimerHelper()
	:m_time = 0
	{};

TimerHelper::~TimerHelper()
	{};

unsigned long TimerHelper::getTime()
{
	return micros();
};

int TimerHelper::randomNumber(int _max)
{
	return random(_max);
}; 

void TimerHelper::waitFor(SoundMessage song)
{
	switch(song){
		case():
		
	}
};