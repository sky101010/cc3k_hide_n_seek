#include "player.h"

player :: player(int hp, int x,int y, int atk, grid * gb){
	this->hp = hp;
	this->xlocation = x;
	this->ylocation = y;
	this->attackPerSecond = atk;
	this->gameBoard = gb;
}

int player::getX(){
	return xlocation;
}
int player::getY(){
	return ylocation;
}

player::~player(){}