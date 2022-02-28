#include <stdlib.h>
#include <stdio.h>
typedef struct _RECTANGLE Rectangle_t;

struct __attribute__((__packed__))_RECTANGLE
{
	int length;
	int width;
 };
 
Rectangle_t* Rectangle_constructor(int l,int w);
int area (Rectangle_t *);
int perimeter(Rectangle_t *);
