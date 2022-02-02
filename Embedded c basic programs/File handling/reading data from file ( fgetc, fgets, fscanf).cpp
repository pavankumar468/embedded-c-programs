#include<stdio.h>
#include<string.h>
int main(){
	
	char buffer[50], c;
	FILE *fp;
	 fp = fopen( "memory.cpp", "r");
	 
	 if(fp == NULL){
	 	printf(" file cannot be opened");
	 }else{
	 	 //printf("file is opened now ");
	 	 
	 	/* while( fgets(buffer, 50 , fp)!= NULL)
	    {
		 printf("%s", buffer);
		
     	}*/
     	
		
     	while(fscanf(fp , "%s", &buffer) == 1){
     			 printf("%s ", buffer);
		
		 }
	 }
	 
	fclose(fp);
	 
	
}
