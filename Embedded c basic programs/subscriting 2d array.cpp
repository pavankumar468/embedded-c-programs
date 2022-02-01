#include<stdio.h>

void call(char *men[]){
	for(int i=0 ; i<4 ;i++){
		printf("%s ",men[i]);
	}
	
}

int main(){
	char *menu[] = {"Set pin", "Change pin", "Get Credentials", "Make Credentials"};
	
	call(menu);
}
