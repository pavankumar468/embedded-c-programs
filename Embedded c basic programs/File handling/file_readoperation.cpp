#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	
	char data[50];
	fp = fopen("memory.cpp","r");
	
	 if ( fp == NULL )
    {
        printf( " file failed to open." ) ;
    }else {
    	  printf("The file is now opened.\n") ;
    	  
    	 while(fgets(data,50,fp)!=NULL){
    	 	
    	 	printf("%s",data);
		 }
	}
	
	fclose(fp);
	printf("The file is now closed.") ;
    }

