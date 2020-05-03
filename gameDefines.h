#ifndef GAME_DEFINES_H
#define GAME_DEFINES_H

#include "Arduino.h"

const int I2C_DEVICE_NUMBER = 4;

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
   GAME_ON,
   NEW_BUTTON,
   CORRECT_BUTTONn ,
   WRONG_BUTTON,
   TOO_SLOW,
   AGAIN
};


#endif
