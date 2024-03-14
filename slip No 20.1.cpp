/* Create a C++ class Number with integer data member. Write necessary member functions to overload
the operator unary pre and post increment ‘++’.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int a;
		void accept()
		{
			cout<<"\nEnter Number : ";
			cin>>a;
		}
		void dis()
		{
			cout<<"\n Number : "<<a;
		}
		void operator++()
		{
			cout<<"\n Post Increament : " ;
			a++;
		}
		void operator++(int)
		{
			cout<<"\n Pre Increament : " ;
			++a;
		}
};

 int main()
 {
 	Number ob;
 	ob.accept(); 
 	ob.dis(); 
 	++ob; 
 	ob.dis(); 
 	
 	ob++; 
 	ob.dis(); 
 }






