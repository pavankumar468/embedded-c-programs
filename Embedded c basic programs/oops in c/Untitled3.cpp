#include<iostream>
using namespace std;
class A
{
	
 public:
 A()
 {
  cout << "Constructor called";
 }
 ~A()
 {
  cout << "Destructor called";
 }
};


int main()
{
 A obj1; 
 // Constructor Called 
 int x=1;
 if(x)
 {
    A obj2; 
    // Constructor Called
  } 
 // Destructor Called for obj2 as obj2 out of scope
} 
// Destructor called for obj1 as obj1 out of scope
