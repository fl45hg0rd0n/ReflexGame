#ifndef REFLEX_GAME_H
#define REFLEX_GAME_H

#include "Game.h"

class ReflexGame : public Game
{
public:

   ReflexGame();
   ~ReflexGame();

   int Play(unsigned long delayTime, int[] lights, int iterations, &ButtonHelper buttons, &TimerHelper timer, &DisplayHelper display, &SoundSender sounds);

   int Play(int delayTime, int[] buttons, int iterations) override;

   int getScore();
   long unsigned int getFastestTime();

   void sendSound_(SoundMessage sound, unsigned long time);
   void setState(GameState state);

private:
   int m_scoreCurrent;
   int m_scoreBest;
   long unsigned int m_fastestTime;
   int m_lastButton;

   GameState m_state;

};

#endif