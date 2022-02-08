#include<stdio.h>
int main(){
	//implicit typecasting : it happened automatically by compiler, if there 2 variable of different datatype ,lower size datatype variable
						//	can be implicitly copied to higher size datatype variable.
	//implicit datatype sequence:
		//	bool->char->short int->int ->unsigned int -> long int-> unsigned long int ->long long int->float-> double->long double.
	short int a=5;
	char ch = 'A';
	
	float z= a+ch;
	printf("%f",z);
	
	//Explicit typecasting :unlike implicit type-casting data-types of variable is forcefully converted into another datatype.
					//->it is used when we move high size datatype to low size
	int c=4, d=7,result;
	result=d/c;
	printf("\nint_result = %d",result); //here we are losing correct value
	float float_result = (float)d/c;
	printf("\n float_result = %f",float_result);
}
