#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#include "shape_dec.h"

int main(int argc, char *argv[]) {
	
	shape s1,s2;  // shape is class &  s1,s2 are objects
	
	shape_ctor(&s1,2,4);
	shape_ctor(&s2,5,8);
	
	shape_moveby(&s1, 1,1);
	shape_moveby(&s2,2,2);
	
	printf("\ns1->x = %d",getx(&s1));
	printf("\ns1->y = %d",gety(&s1));
	printf("\ns2->x = %d",getx(&s2));
	printf("\ns2->y = %d",gety(&s2));
	
	
	
	
	return 0;
}
