#include<stdio.h>
#include<stdlib.h>

struct data1 {
	int add;
	long long p;	
}d;

struct data2 {
	int bad;	
}d2;

int main(){
	struct data1 *ptr = &d;
	struct data2 *ptr2 = &d2;
	
	int **pptr ;
	pptr = &(int*)ptr;
	pptr+1 = (int*)pptr2;
printf("%d" ,sizeof(d));	
	
}


