#include "rectangle.h"

Rectangle_t* Rectangle_constructor(int l,int w){
	Rectangle_t* rt = (Rectangle_t *) malloc (sizeof(Rectangle_t));
	rt->length = l;
	rt->width = w;
	printf("\nlength = %d,\nwidth = %d",rt->length, rt->width);
	return &rt;
	
}

int area (Rectangle_t *rt)
{
	return rt->length;
}

int perimeter(Rectangle_t *rt)
{
	return rt->width;
}
