#include<stdio.h>
#include<string.h>
int main(){

char a[6]="pavan";
char b[20]="pavan kumar";

if(memcmp(a,b,sizeof(a)) == 0){
	printf("yes,same");
}else{
	printf("no");
}


}
