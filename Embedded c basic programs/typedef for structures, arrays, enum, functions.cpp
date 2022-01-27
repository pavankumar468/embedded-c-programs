#include<stdio.h>
 typedef enum {      // typedef used in enum
		jan,feb
	}pvan;
	
typedef struct loop kumar;  //typedef used in structures
struct loop {
	int a;
	int ab;
} ;


typedef int jaguar[2];  //typedef used in arrays

//typedef used in functions
int call(int a){
	return a=a+2;
}

typedef int (*funptr) (int);

void print(funptr call){
	printf("function pointer = %d",call(3));
}

int main(){

	 pvan l;
	 kumar k;
	 k.a =23;
	 
	l=feb;
	printf("%d",l);
		printf("\n %d",k.a);
	
	jaguar j;
	j[1] = 143;
		printf("\n %d",j[1]);
		
		
		
	print(call);
	
}
