/* sprintf(string printf) = is not used to print string of variable , it is used to store data in a variable as string.
     sprintf(destination_buffer, " text" ,source_buffer);
	sscanf() = is used to copy string from one variable to another variable.
	sscanf(source, "format specifiers", destination_buffer); 
 
 */
#include<stdio.h>
int main(){
	char buffer[78];
	//char *buffer; dont use pointer buffer
	int a = 10, b=23, c;
	 c=a+b;
	 sprintf(buffer, "sum of %d + %d = %d", a,b,c);
	 printf("%s",buffer);
	

	char *name =" pavan kumar 23";
	char e_name[20];  
	int age;
	sscanf(name ," %s %d", e_name, &age);
	printf("e_name = %s, age = %d",e_name, age);
}
