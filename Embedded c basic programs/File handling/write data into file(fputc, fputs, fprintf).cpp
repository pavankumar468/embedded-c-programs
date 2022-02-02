#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	/*fp = fopen("memory.cpp", "w");
	
	fprintf(fp, " learing file handling in embedded c ");
	 fclose(fp);*/
	 
	 fp = fopen("memory.cpp", "a+");
	 fprintf(fp, " learing file handling in embedded c ");
	 fputs("We don't need to use for loop\n", fp);
	 fclose(fp);
}
