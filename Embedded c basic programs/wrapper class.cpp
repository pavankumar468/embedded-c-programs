#include<stdio.h>
#include<stdlib.h>
struct pavan{
	int i;
};
int main(){

	int a=8; //normal variable installization
	struct pavan *g =  (struct pavan*)malloc(sizeof(struct pavan));

	(g+0)->i=1;
	(g+1)->i=12;
	(g+2)->i=19;
	
	for(int j=0; j<3;j++){
		printf("%d ",(g+j)->i);
	}
	

	 
	
}
