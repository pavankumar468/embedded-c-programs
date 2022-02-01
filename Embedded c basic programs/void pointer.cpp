#include<stdio.h>
#include<stdlib.h>
typedef struct data data;
void callv(void *);

int* sum (int a, int b);
  
struct data {
	int add;	
	void *cb_ctx;
};

int * sum (int a, int b){
 	
 	 data *d = (struct data *) calloc (1,sizeof(struct data));
 	
 	d->add = a+b;
 	
 	return &d->add;
 }
 
 
 void call (void *cb_ctx){
 	
 	data *d = (struct data *) calloc (1,sizeof(struct data));
 	//printf("\n cb_ctx = %d",cb_ctx);
 	//printf("\n *cb_ctx = %d",*(int *)cb_ctx);
 	d->cb_ctx = cb_ctx;
 	
 	callv(d->cb_ctx);
 }
 
 
void callv(void *ctx){
		int *fp = (int *)ctx;
		printf("\n *fp = %d",*fp);
	}
	
	
int main(){

	data *d = (struct data *) calloc (1,sizeof(struct data));
 int *data = sum(4,5);
 //printf("data = %d",data);
// printf("\n *data = %d",*data);
	call((void *)data);
	
	
	
}
