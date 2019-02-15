#include "spot.h"


spot::spot(int xi, int yi){
	this->x = xi;
	this->y = yi;
	this->occupant = 0x0;
}
void spot::linkPlayer(player* p){
	this->occupant = p;
}
spot::~spot(){}