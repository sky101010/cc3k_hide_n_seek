
#ifndef __GAME_H__
#define __GAME_H__

#include "grid.h"
#include "humanPlayer.h"
using namespace std;


class game{
protected:
    grid * gameBoard;
    humanPlayer * human;
    
public:
    game(int l, int w);
    ~game();
    bool winning();

};

#endif