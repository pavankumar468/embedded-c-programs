#include<iostream>
using namespace std;

class employee{
	public:
	string name_t;
	int age_t;
	
	void get_details(string name, int age){
		name_t = name;
		age_t = age;
		
	}
	
	void print_details(){
		cout<<"\n name_t : "<<name_t <<" \n age_t :"<<age_t;
	}
};

int main(){
	string name;
	int age;
	
	employee e;  // here employee is class name, e is object name;

	cout<<"\n Enter name : " ;
	cin>>name;
	cout<<"\n Enter age : " ;
	cin>>age;
	e.get_details(name, age);
	e.print_details();
	
}
