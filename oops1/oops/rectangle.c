#include "rectangle.h"

void Rectangle_ctor(Rectangle *const me, int16_t x, int16_t y, int16_t width , int16_t height){
	
	/*me->super.x = x;
	me->super.y = y;*/
	Shape_ctor(&me->super, x, y);
	me->width = width;
	me->height = height;
	
	
}
