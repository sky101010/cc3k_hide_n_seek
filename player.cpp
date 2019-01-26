#include "player.h"

player::playerplayer(int hp, int x,int y, int atk, grid * g){
	this->hp = hp;
	this->xlocation = x;
	this->ylocation = y;
	this->attackPerSecond = atk;
	this->gameBoard = g;
}


player::~player(){}