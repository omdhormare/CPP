//Multiple Inheritance 
using namespace std;
#include<iostream>
class A
{
	public:
		int a,b,c;
	void accept1()
	{
	  cout<<"Enter 1 Number : ";
	  cin>>a;	
	}	
};
class B:public A
{
	public:
		void accept2()
		{
			cout<<"Enter 2 Number : ";
	        cin>>b;
		}
};
class C: public B
{
	public:
		void add()
		{
	        cout<<"Addtion :";
	        c=a+b;
	        cout<<c;
		}
};
int main()
{
	C AA;
	AA.accept1();
	AA.accept2();
	AA.add();
}






