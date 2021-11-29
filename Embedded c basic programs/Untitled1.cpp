#include<stdio.h>

int sum(int a,int b){
	return a+b;
}

int main(){

int a=5, b=6;

//printf("sum = %d",sum(a,b));
int (*ptrsum) (int ,int);
ptrsum=sum;

printf("ptrsum = %d",ptrsum(a,b));

}
