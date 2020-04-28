#ifndef GAME_DEFINES_H
#define GAME_DEFINES_H

#include "Arduino.h"


enum GameType
{
   GT_REFLEX_GAME,
   GT_SPEED_GAME

};


enum GameState
{
   SETUP,
   READY,
   RUNNING,
   RESET,
   GAMEOVER
};


enum Difficulty
{
   NEWB,
   BASIC,
   HARDCORE,
   HELL
};


enum SoundMessage
{
   BOOTUP,
   CHOOSE_GAME,
   REFLEX_GAME_BOOTUP,
   SPEED_GAME_BOOTUP,
   NEW_BUTTON,
   CORRECT_BUTTON,
   WRONG_BUTTON,
   TOO_SLOW,
   AGAIN
};


#endif
