//memset() is used to fill a block of memory with a particular value.
/*#include<stdio.h>
#include<string.h>
int main(){
	int n=10;
	int a[n];
	memset(a,1,n*sizeof(a[0]));
	
	for(int i=0;i<10;i++){
		printf(" a[%d]= %d ",i,a[i]);
	}

}*/
#include <stdio.h>
#include <string.h>
  
int main()
{
    //int n = 10;
    //int arr[n];
   char a[20] = "geeks for is geeks";
  
    //memset(arr+4, 0, n*sizeof(arr[0]));
    memset(a+4,'/',6*sizeof(char));
	printf("Array after memset()\n %s",a);
  //for (int i=0; i<n; i++)
    //  printf("%d ", arr[i]);
   
   
   
    return 0;
}
