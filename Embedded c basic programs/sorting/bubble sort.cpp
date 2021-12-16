//Bubble sort : In bubble sorting adjacent elements are swaped repeatedly until array is sorted.
#include <iostream>
#include<stdbool.h>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}



void  sort(int a[], int n){
//	bool swapped;
	
	for(int i=0;i<n-1 ;i++){
	//	swapped = false;
		for(int j = 0 ; j<n-i-1 ;j++){
			if(a[j] >a[j+1]){
				swap(&a[j] ,&a[j+1]);
			//	swapped = true;
			}
		}
		
		//if(swapped == false){
	//		break;
	//	}
	}
		
}

void print( int a[],int n){
	for(int k =0 ;k<n;k++){
		cout<<a[k]<<' ';
	}
}

int main(){
	int a[] = {5,3,6,4,2};
	int size = sizeof(a)/sizeof(a[0]);
	
	cout<<"Before sorting :";
		print(a,size);
	sort(a,size);
	
	
	cout<<"\nAfter sorting :";
	print(a,size);
	
}
