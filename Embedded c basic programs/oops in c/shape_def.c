

#include "shape_dec.h"

void shape_ctor(shape *const me, int x ,int y){
	me->x = x;
	me->y = y;
}


void shape_moveby(shape *const me, int x ,int y){
	me->x+=x;
	me->y+=y;
	
}

int getx(shape *const me){
	return me->x;
}


int gety(shape *const me){
	return me->y;
}
