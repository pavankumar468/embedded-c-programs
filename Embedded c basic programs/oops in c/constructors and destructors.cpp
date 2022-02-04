#include<iostream>
using namespace std;

class emp{
	
	public:
	string name;
		int age;
	
	emp(){     //default constructor
	cout<<"constructor can be declared inside class ";
		age = 12;
		name = "pavan";	
	}
	
	~emp(){
	cout<<"destructor can be declared inside class ";	
	}
};

/*employee::employee(){
	cout<<"constructor can be declared outside class "<<endl;
	age = 12;
}*/


class colg{
	public:
	int no;
	
	colg(int n){  //parameterised constructor
		no = n;
	}
};

int main(){
	//emp e;
	colg c(1234);
	
//	cout<<e.age<<e.name;
 cout<< c.no;
 

}
