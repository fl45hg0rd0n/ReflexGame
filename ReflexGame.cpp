#include "ReflexGame.h"
#include "Arduino.h"
#include "SoundSender.h"

ReflexGame::ReflexGame()
	: m__scoreCurrent = 0
	, m_scoreBest = 0
	, m_fastestTime = 0
	, m_state = READY
	, m_difficulty
{};

ReflexGame::~ReflexGame(){};

int ReflexGame::Play(int delayTime,
                     int[] lights,
                     int iterations,
                     &ButtonHelper buttons,
			 		 &TimerHelper timer,
			 		 &DisplayHelper)
{
	unsigned long timeNow = timer.getTime();
	int lastButton = 0;
	for(int i = 0; i < iterations; ++i)
	{
		int newbtn = timer.randomNumber(buttons.getsize() - 1)
		while(newbtn == lastButton)
		{
			newbtn = timer.randomNumber(buttons.getsize() - 1)
		}
	}
}

