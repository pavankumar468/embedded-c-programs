#include<stdio.h>

typedef enum
{
    FP_MODULE_ENROLL                = 0x00,
    FP_MODULE_BEGIN_ENROLL          = 0x01,
    FP_MODULE_NEXT_ENROLL           = 0x02,
     
} FPModuleOperation_t;


// call defination  
int Call(FPModuleOperation_t status){        // call defination
return status;
}


	typedef int (*funptr)(FPModuleOperation_t); 

// constructor defination
void WrapperFPModuleConstructor (funptr call)
{
	printf("show = %x",Call(FP_MODULE_NEXT_ENROLL));
}
	
int main(){
 
 // calling function 
	//Call(FP_MODULE_NEXT_ENROLL);    

	// call constructor 
	WrapperFPModuleConstructor (Call);
	
	

	
}
