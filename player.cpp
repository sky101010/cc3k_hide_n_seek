#include "player.h"

player :: player(int hp, int x,int y, int atk){
	this->hp = hp;
	this->xlocation = x;
	this->ylocation = y;
	this->attackPerSecond = atk;
	
}

int player::getX(){
	return xlocation;
}
int player::getY(){
	return ylocation;
}
void player::moveUp(){
	ylocation += 1;
}
void player::moveDown(){
	ylocation -= 1;
}
void player::moveLeft(){
	xlocation -= 1;
}
void player::moveRight(){
	xlocation += 1;
}

player::~player(){}