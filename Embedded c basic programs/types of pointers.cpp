#include<stdio.h>
int main(){
	//WILD POINTER : pointer variable not intialized with any value (pointer variable store garbage value).
	int c = 123;
	int *p = &c;  //WILD POINTER
	
	printf(" p = %d", p);
	printf("\n *p = %d", *p);
	
	
	//void pointer
/*	int c = 123;
	float f = 34.65;
	void *ptr;
	ptr = &c;
	
	printf(" c= %d", *(int *)ptr);
	
	ptr = &f;
	printf("f = %d ",*(float *)ptr);
	
	int h = 56;
	int *ptr = 34;*/
	
	
}
