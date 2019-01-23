#include "grid.h"


grid::grid(){
	for(int i = 0; i < length; ++i){
		for(int j = 0; j < width; ++j){
			spot temp(i,j);
			g[i][j] = temp;
		}
	}
}

grid::~grid(){};



