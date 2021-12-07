even odd
============
using System;
public class ifprogram{
public static void Main(string[] args){
 Console.WriteLine("Enter no : ");
	int no = Convert.ToInt32(Console.ReadLine());
	
	if(no%2 == 0){
	Console.WriteLine("Even");}
	else if(no%2 !=0){
	Console.WriteLine("odd");
	}

}

}

If else if grade program
===================
using System;
public class ifelseifprogram{
public static void Main(string[] args){
Console.WriteLine("Enter no:");
int no = Convert.ToInt32(Console.ReadLine());
	
	if(no<0 ||no>100){
	Console.WriteLine("Wrong no");
	}
	else if(no>0 && no<50){
	Console.WriteLine("failed");
	}
	else if(no>50 && no<70){
	Console.WriteLine("Grade B");
	}
	else if(no>=70 && no<=100){
	Console.WriteLine("Grade A");
	}
	

}}

switch program
==================
using System;
public class switch_program{
public static void Main(string[] args)
{
		Console.WriteLine("Enter a no: ");
		int no = Convert.ToInt32(Console.ReadLine());
	switch(no){
		case 1: Console.WriteLine("one");
			break;
		case 2: Console.WriteLine("two");
			break;
		default: Console.WriteLine(" error ");
			break;
	
	}
}
}


for program
===========
using System;
public class forprogram{
public static void Main(String[] args){

for(int i=10; i>0 ;i--){
Console.WriteLine(i);

}
}
}

while program
============
using System;
public class while_program{
public static void Main(string[] args){

	int n=1;
	while(n<=10){
	Console.WriteLine(n);
		n++;
	}
	
}
}

dowhile program
=================
using System;
public class dowhile_program{
public static void Main(string[] args){
 int n=9;
do{
Console.WriteLine(n);
n--;
}while(n>=0);

}
}


 breaK program
==============
using System;
public class break_program{
public static void Main(string[] args){

for(int i=0; i<10 ;i++){
	
if(i==5){
break;}
	
	Console.WriteLine(i);
}
}
}

inner break program
=====================
using System;  
public class BreakExample  
    {  
      public static void Main(string[] args)  
      {  
          for(int i=1;i<=3;i++){      
                    for(int j=1;j<=3;j++){      
                        if(i==2&&j==2){      
                            break;      
                        }      
                        Console.WriteLine(i+" "+j);      
                    }      
          }      
      }  
   }  

continue program
========================
using System;
public class continue_program{
public static void Main(string[] args){

for(int i=0;i<10;i++){
if(i==5){
continue;}

	Console.WriteLine(i);
}
}
}

inner continue program
==============================
using System;
public class innercontinue_program{
public static void Main(string[] args){

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	if(i==1  && j==1){
			continue;}

	Console.WriteLine(i+" "+j );
	
	
	}
}
}
}

PRIME OR NOT
========================
using System;
public class program{
public static void Main(string[] args){

	Console.WriteLine("Enter no: ");
	int n = Convert.ToInt32(Console.ReadLine());
	
	int count=0;
	for(int i=1;i<=n;i++){
	if(n%i == 0){
	count++;
	}
	}
	
	if(count ==2){
	Console.WriteLine("prime");
	}else{
	Console.WriteLine("Not prime");
	}
}
}

prime no using functions
==================================
using System;
public class program{
	
	public string prime(int n){
			int count=0;
		for(int i=1;i<=n;i++){
		if(n%i == 0){
		count++;
			}
		}
	
		
		if(count ==2){
		return ("yes prime ");
		}else{
		return ("not prime");
		}
	
	}
		
public static void Main(string[] args){

	Console.WriteLine("Enter no: ");
	int n = Convert.ToInt32(Console.ReadLine());
	
	program p=new program();
	
	
	string s= p.prime(n);
	
	Console.WriteLine(s);
	
}
}


factorial of no
==========================
using System;
namespace projects{

public class math{

	public int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
		
	}

public static void Main(string [] args){
		Console.WriteLine("Enter a no:");
		int n = Convert.ToInt32(Console.ReadLine());
	
	math m = new math();
	int s= m.factorial(n);
	
		
	Console.WriteLine("factorial of "+ n +" = "+s );
}

}
}


sum of n nos
============================
using System;
namespace project{
	
public class math{

	public int sumofdigits(int n)
	{ int sum=0,r;
	
	 while(n!=0){
	 r = n%10;
	 sum = sum+r;
	 n = n/10;	 
	 }
	 return sum;	
	}

public static void Main(string [] args){
	Console.WriteLine("Enter a no: ");
	int n = Convert.ToInt32(Console.ReadLine());
	
	math m = new math();
	
	int k = m.sumofdigits(n);
		
	Console.WriteLine("sum of "+ n+" = "+k);

}

} 
}


reverse of no
=========================
using System;
namespace programs{

public class math{

	public int reverse(int n){
	int sum=0,r;
		while(n!=0){
		r = n%10;
		sum=sum*10+r;
		n=n/10;
		}
	
	return sum;
	}
	


public static void Main(string[] args){
 	Console.WriteLine("Enter a no");
	int n = Convert.ToInt32(Console.ReadLine());
	
	math m = new math();
	int k = m.reverse(n);
	
	Console.WriteLine("Reverse of"+" = "+ k );
}

}
}
decimal to binary
==========================
using System;
namespace project{
public class math{

	public int dtob(int n){
		int sum=0,s=0,r,R;
		while(n!=0){
		r=n%2;
		sum=sum*10+r;
		n=n/2;
		}
		
		while(sum!=0){
		R=sum%10;
		s=s*10+R;
		sum=sum/10;
		}
		
		return s;
	}


public static void Main(string[] args){
	Console.WriteLine("Enter a no:");
	int n = Convert.ToInt32(Console.ReadLine());
	
	
	math l=new math();
	int p= l.dtob(n);
	
	Console.WriteLine("Decimal to binary of "+n+" = "+p);
	
}

}
}


swap 2 no using call by reference
===================
using System;
namespace programs{
public class math{
	
	public void swap(ref int c,ref int d){
	
	c = c + d;
	d = c - d;
	c = c - d;
	
	}
	
	public static void Main(string[] args){
		Console.WriteLine("Enter a :");
		int a= Convert.ToInt32(Console.ReadLine());
		Console.WriteLine("Enter b :");
		int b= Convert.ToInt32(Console.ReadLine());
		
		math m = new math(); 
	
		Console.WriteLine("Before a = "+a+", b = "+b);
		m.swap(ref a,ref b);
		Console.WriteLine("Before a = "+a+", b = "+b);
	
	}



}
}


array
=================
using System;
namespace program{

public class math{


	public void print(int []b,int size){
	
		
	Console.WriteLine("Elements in array :");
		
		for(int i=0;i<size;i++){
		Console.Write("{0} ",b[i]);
		}
	
	}
	
	
	
	
	public static void Main(string[] args){
		
		Console.WriteLine("Enter size if array : ");
		int size = Convert.ToInt32(Console.ReadLine());
		
		int []a= new int[size];
	
		Console.WriteLine("Enter elements: ");
		
		for(int i=0 ;i<size ;i++ ){
			Console.Write("element {0} =",i);
		a[i] = Convert.ToInt32(Console.ReadLine());
		}
	
	
	
		math m = new math();
		m.print(a,size);
		
	
	}

}


}


params
=========================
using System;
namespace program{
	public class math{

	public void Array(params int [] a){
		Console.WriteLine("Elements in array are: ");
		for(int i=0; i<a.Length ;i++){
		Console.WriteLine(a[i]);
		}
		
	}

public static void Main(string[] args)
 {  math m = new math();  // object is created
       m.Array(12,23,34,56,67,78);
 }

}
}

params objects
================
using System;
namespace program{
public class math{

	public void show(params object[] items){
	Console.WriteLine("Objects in array: ");
		for(int i=0 ; i<items.Length ; i++){
		   Console.WriteLine(items[i]);
		}
		
	
	}
	
	
	public static void Main(string[] args){
	math m = new math();
		m.show("pavan","kumar ", 12, 23.45, 'd');
	
	
	}
	
}
}



