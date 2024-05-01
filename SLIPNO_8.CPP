/*Write a C++ program to create a class Number, which contain static data member ‘cnt’ and member
function ‘Display()’. Display() should print number of times display operation is performed irrespective
of the object responsible for calling Display() .*/

#include<iostream>
using namespace std;

class number 
{
	public:
	static void dis()
	{
		static int cnt;
		cnt++;
		cout<<cnt;
	}
};
int main()
{
	number ob,ob1,ob2,ob3,ob4,ob5;
	ob.dis();
	ob1.dis();
	ob2.dis();
	ob3.dis();
	ob4.dis();
	ob5.dis();
}
