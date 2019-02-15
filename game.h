
#ifndef __GAME_H__
#define __GAME_H__

#include "grid.h"
#include "humanPlayer.h"
#include "baseEnemy.h"
#include <vector>
using namespace std;


class game{
protected:
    humanPlayer * human;
    vector<baseEnemy *> enemyList;

public:
    grid * gameBoard;
    game(int l, int w);
    void addPlayer(humanPlayer* human);
    void addEnemy(player* enemy);
    ~game();
    bool winning();
    void print();

};

#endif