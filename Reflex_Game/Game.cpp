#include "Game.h"
#include "Arduino.h"

Game::Game(){}

Game::~Game(){}

Game* Game::Start(GameType type)
{
	if(type == GT_REFLEX_GAME)
	{
		return new ReflexGame();
	}
	else if (type == GT_SPEED_GAME) 
	{
		return new SpeedGame();
	}
	else return NULL;
}
