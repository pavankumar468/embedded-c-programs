#include<stdio.h>
#include<assert.h>

void call(float size, int *ptr){
	assert(size>=30);
	assert(ptr!=NULL);

}

int main(){
   //int c;
   //int *p =&c;
   call(8,NULL);	
}

