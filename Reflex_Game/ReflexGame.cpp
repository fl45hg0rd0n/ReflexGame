#include "ReflexGame.h"
#include "Arduino.h"
#include "SoundSender.h"

ReflexGame::ReflexGame()
	: m__scoreCurrent(0)
	, m_scoreBest(0)
	, m_fastestTime(0)
	, m_state(READY)
	, m_difficulty(NEWB)
	, m_lastButton(0)
{};	

ReflexGame::~ReflexGame(){}

int ReflexGame::Play(unsigned long delayTime,
                     int[] lights,
                     int iterations,
                     &ButtonHelper buttons,
	                  &TimerHelper timer,
                     &DisplayHelper display,
                     &SoundSender sounds)
{
	sendSound_(REFLEX_GAME_BOOTUP, 0);
	unsigned long timeNow = timer.getTime();

	//The working game loop
	for(int i = 0; i < iterations; ++i)
	{
		sendSound_(GAME_ON, 0);

		int newButton = buttons.SetNextButton(lastButton);
		while(timer.getTime() < (timeNow + delayTime))
		{
			if(buttons.WasButtonPress())
			{
				break;
			}
		}
		unsigned long reflexTime = timer.getTime() - timeNow;
		if(buttons.WasRightButton())
		{
			sendSound_(CORRECT_BUTTON, reflexTime);
		}
		else
		{
			sendSound_(WRONG_BUTTON, 0);
		}
		lastButton = newButton;
	}
}


void ReflexGame::sendSound_(SoundMessage sound, unsigned long time)
{
	sounds.send(sound);
	display.update(sound, time);
	timer.waitFor(sound);
};
