#include "ReflexGame.h"
#include "Arduino.h"
#include "SoundSender.h"

ReflexGame::ReflexGame()
	: m__scoreCurrent = 0
	, m_scoreBest = 0
	, m_fastestTime = 0
	, m_state = READY
	, m_difficulty = NEWB
{};

ReflexGame::~ReflexGame(){};

int ReflexGame::Play(unsigned long delayTime,
                     int[] lights,
                     int iterations,
                     &ButtonHelper buttons,
			 		 &TimerHelper timer,
			 		 &DisplayHelper display,
			 		 &SoundSender sounds)
{
	sounds.send(REFLEX_GAME_BOOTUP);
	timer.waitFor(REFLEX_GAME_BOOTUP);
	unsigned long timeNow = timer.getTime();
	int lastButton = 0;

	//The working game loop
	for(int i = 0; i < iterations; ++i)
	{
		sounds.send(GAME_ON);
		display.update(GAME_ON);
		timer.waitFor(GAME_ON)
		int newButton = buttons.getNewButton(lastButton);
		while(timer.getTime() < timeNow + delayTime)
		{
			if(buttons.wasButtonPress())
			{
				break;
			}
		}
		unsigned long reflexTime = timer.getTime() - timeNow;
		if(buttons.wasRightButton())
		{
		    timer.waitFor(CORRECT_BOTTON);
			sounds.send(CORRECT_BUTTON);
			display.update(CORRECT_BUTTON, reflextime); 
		}
		else
		{
			sounds.send(WRONG_BUTTON);
			display.update(WRONG_BUTTON);
		}
		lastButton = newButton;
	}
}