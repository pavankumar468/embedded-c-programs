// selection sort = selection sorting is used to find lowest/highest element in unsorted array and swap it to begnning
#include<iostream>
using namespace std;


void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b=temp;
	
}

void selection_sort(int arr[],int n){
	
	for(int i=0;i<n-1;i++){
		for(int j= i+1;j<n;j++){
			
			if(arr[j]<arr[i]){
				swap(&arr[j],&arr[i]);
				
			}
		}	
	}	
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
int arr[] = {4,7,3,8,2};
int size = sizeof(arr)/sizeof(arr[0]);
printf("Before sorting ");
print(arr,size);
//printf("%d",size);
 selection_sort(arr,size);

printf("\nAfter sorting :");

print(arr,size);
	
}
