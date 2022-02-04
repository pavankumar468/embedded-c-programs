//#ifndef SHAPE_DEC_H
//#define SHAPE_DEC_H


typedef struct{
	int x;
	int y;
}shape;

void shape_ctor(shape *const, int ,int);
void shape_moveby(shape *const, int ,int);
int getx(shape *const);
int gety(shape *const);

//#endif;
