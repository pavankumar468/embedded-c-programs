#include<stdio.h>
typedef struct pavan{
	int x=5,y=4;
	
} car;
 
int add(car *q){
 	return q->x+q->y;
 }
 
int main(){
//car p;
// car *q=&p ;

 
add(car *q);

 
 //printf("%d %f",p.x,p.y);
  printf("\n%d %d",q->x,q->y);
 	
}
