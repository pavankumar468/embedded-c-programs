#include "shape.h"
#include<assert.h>
//shape's prototype of its virtual functions
static uint32_t Shape_area_(Shape const * const me);
static void Shape_draw_(Shape const * const me);

//constructor
void Shape_ctor(shape *const me ,int16_t x, int16_t y)
{
	static struct ShapeVtbl const vtbl = {
	//vtbl of the shape class
	&Shape_area_, & Shape_draw_
	};
	
	me->vptr = &vtbl; //"hook" the vptr to vtbl
    me->x = x;
    me->y = y;
}

/* move-by operation */
void Shape_moveBy(shape *const me ,int16_t x, int16_t y)
{
    me->x+=x;
    me->y-=y;
}

int16_t Shape_getX(shape *const me )
{
     return me->x;
}

int16_t Shape_getY(shape *const me )
{
    return  me->y;
}
