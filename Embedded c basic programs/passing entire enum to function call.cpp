#include<stdio.h>
typedef enum{
		bat, ball,
	}data_t;

void call(data_t *e){
	*e= ball;
	printf("%d",*e);
}
	
int main(){
	data_t d;
	
	call(&d);
	
}
