#include<iostream>
using namespace std; 

/*#define max(x,y) x>y?x:y

int main(){
	printf("%d",max(5,9));
}*/


//#define text(a,b) a+b
/*
string text(const string a,const string b){
	return a+b;
}
int main(){
	
	string a="pavan ";
	string b="kumar";
	
	string s=text(a,b );
	cout<<s;
}*/


// #s = hash prints whatever there inside variable as string 
#define str(s) #s
#define PI 3.14
#define ref(s) str(s)   // 3.14 is printed because # function not used in this statement
#define combine(a,b) (a##b)+3 
#define flex(...) __VA_ARGS__   // __VA_ARGS__ represent what ever there inside ...
#define flexi(A,...) __VA_ARGS__##A 
int main(){
	
	cout<<str(Bla      bla)<<endl;  /*#BLA BLA*/
	cout<<str(PI)<<endl;
	cout<<ref(PI)<<endl;
	cout<<combine(1,5 )<<endl;
//	cout<<flex(1,2,3,4) ;  /* replace 1,2,3,4*/ 
	cout<<flexi(1,2)+3;
}
