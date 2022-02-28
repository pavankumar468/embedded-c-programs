#include<stdio.h>
#include<dir.h>
#include<dirent.h>
#include <sys/stat.h>
#include<stdlib.h>
int main(){
	 struct dirent *de;
	int check = mkdir("generate_bin_files");
	if(check == 0){
		
		printf("directory is created");
	}else{
			printf("no directory is created");
	}
	
	system("cp ./binary.c ./generate_bin_files");
	
		system("pwd");
	DIR* dir_var = opendir("./generate_bin_files");
	system("pwd");
	system("../ generate_bin_files");
	
	
	 system("pwd");
	 /*while ((de = readdir(dir_var)) != NULL)
            printf("%s\n", de->d_name);
            */
	closedir(dir_var);
	
}
