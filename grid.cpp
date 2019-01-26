#include "grid.h"
#include "spot.h"

grid::grid(int length, int width){
	this->length = length;
	this->width = width;
	for(int i = 0; i < length; ++i){
		for(int j = 0; j < width; ++j){
			spot *temp = new spot(i,j);
			v.push_back(temp);
		}
	}
}

grid::~grid(){}



