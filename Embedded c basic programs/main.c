#include<stdio.h>
#include "muldec.h"
int main(){
	int a,b;
	printf("Enter a,b :");
	scanf("%d, %d",&a,&b);
	
	int result=add(a,b);
	printf("add = %d",result);
	return 0;
}
