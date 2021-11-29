// funtion pointers used to store address of another function
 // returntype (*function name) (arguments)
 // functionname = &originalfunction
#include<stdio.h>

int sum(int a,int b){
	return a+b;
}

int main(){

int a=5, b=6;

//printf("sum = %d",sum(a,b));
int (*ptrsum) (int ,int);
ptrsum=sum;  //or ptrsum = &sum

int result= ptrsum(a,b);
printf("ptrsum = %d",ptrsum);

}
