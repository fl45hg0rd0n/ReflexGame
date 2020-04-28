#include "ReflexGame.h"
#include "Arduino.h"
#include "SoundSender.h"

ReflexGame::ReflexGame()
	m_scoreCurrent = 0,
	m_scoreBest = 0,
	m_fastestTime = 0,
	m_state = READY
{};

ReflexGame::~ReflexGame(){};

int ReflexGame::Play(int delayTime, int[] buttons, int iterations)
{

}

