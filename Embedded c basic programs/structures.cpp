#include<stdio.h>
typedef struct pavan{
	int x;
	float y;
} car;

int main(){
car p;
 p.x= 4;
 p.y=6.7;
 
 car *q = &p;
 
 
 printf("%d %f",p.x,p.y);
  printf("\n%d %f",q->x,q->y);
 	
}
