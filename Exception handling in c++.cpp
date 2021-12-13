//Exception handling: while program is running for some i/ps output might get error ,so those i/p values that might get error is checked in try block , those exceptions sent to catch using throw block , those exceptions are handled in catch block

#include<iostream>
using namespace std;
int main(){
	int nume,deno;
	cout<<"Enter numerator,denomenator :";
	cin>>nume>>deno;
	
	int result;
	
	try{
	    	if(deno == 0){
			
			throw deno;
			}
		
		result = nume/deno;		
		
	   }
	
	catch(int ex){
	cout<<"Exception divided by zero";
	}	
	
	cout<<"Division = "<<result;
	
	
	
	
}

