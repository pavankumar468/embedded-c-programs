#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<stdint.h>
#include "shape.h"

typedef struct{
	shape super;
	
	int16_t width;
	int16_t height;
}Rectangle;


void Rectangle_ctor(Rectangle *const me, int16_t x, int16_t y, int16_t width , int16_t  height);
#endif
