//callbacks are used to store a funtion as an argument to another function

#include<stdio.h>

int sum(int a, int b){
return a+b;
}

int mul(int a, int b){
return a*b;
}
 int ari(int (*ptrari) (int ,int))
{ int a,b;
printf("Enter 2 nos a,b:");
scanf("%d %d",&a,&b);
 
 ptrari(a,b);
 
	
}

int main(){
	
	int res1 = ari(&sum);
	int res2 = ari(&mul);
	
	printf("sum = %d , mul = %d",res1,res2);
}
