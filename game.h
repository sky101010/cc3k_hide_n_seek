
#ifndef __GAME_H__
#define __GAME_H__

#include "grid.h"
#include "humanPlayer.h"
#include "baseEnemy.h"
#include <vector>
using namespace std;


class game{
protected:
    grid * gameBoard;
    humanPlayer * human;
    vector<baseEnemy *> enemyList;

public:
    game(int l, int w);
    void addPlayer(player* human);
    void addEnemy(player* enemy);
    ~game();
    bool winning();
    void print();

};

#endif