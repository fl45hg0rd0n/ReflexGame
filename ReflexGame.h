#ifndef REFLEX_GAME_H
#define REFLEX_GAME_H

#include "Game.h"

class ReflexGame : public Game
{
public:

   ReflexGame();
   ~ReflexGame();

   int Play(int delayTime, int[] buttons, int iterations) override;

   int getScore();
   long unsigned int getFastestTime();

   void setState(GamesState state);

private:
   int m_scoreCurrent;
   int m_scoreBest;
   long unsigned int m_fastestTime;

   GameState m_state;

};
