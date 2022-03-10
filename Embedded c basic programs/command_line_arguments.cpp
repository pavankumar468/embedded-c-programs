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

/* o/p:
C:\Users\ajay.t\Desktop\Embedded c basic programs>command_line_arguments.exe
arg[0] = command_line_arguments.exe

C:\Users\ajay.t\Desktop\Embedded c basic programs>command_line_arguments.exe pavan kumar jan
arg[0] = command_line_arguments.exe
arg[1] = pavan
arg[2] = kumar
arg[3] = jan

*/
