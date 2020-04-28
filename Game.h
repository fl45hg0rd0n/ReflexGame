#ifndef GAME_H

#define GAME_H


#include "gameDefines.h"

class Game
{
public:

   Game();
   virtual ~Game();

   static Game* Start(GameType game);
   virtual int Play();

}

#endif

