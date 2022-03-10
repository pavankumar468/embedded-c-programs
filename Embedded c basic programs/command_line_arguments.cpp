/* command line arguments : main() is fun which takes arguments called command line arguments .
int main(int argc, char *argv[])
->argc = counts no of parameters = default value =1
->argv = is 2d character array store arguments= default first argument is filename; 
*/

#include<stdio.h>
int main(int argc, char *argv[]){

	for(int i=0;i<argc;i++){
		printf("arg[%d] = %s\n",i,argv[i]);	
	}
	return 0;
	
}
