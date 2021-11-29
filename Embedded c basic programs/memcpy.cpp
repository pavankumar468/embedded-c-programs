//memcpy = is used to copy a block of data from one to another location
// memcpy(destination, source, noofbytes_to_be_copied

#include<stdio.h>
#include<string.h>
struct {
	char name[20];
	int age;
}person, personcopy;

int main(){
	char myname[20]="hai i'm pavan";
	
	
	memcpy(person.name, myname ,strlen(myname)+1);
	
	printf("%s",person.name );
	
}
