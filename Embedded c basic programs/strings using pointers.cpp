#include<iostream>
int main(){
	char name[] = "pavan kumar";
	char *namm = &name[3];
	
	std::cout<<"location = "<<(int)namm<<std::endl;
	
}
