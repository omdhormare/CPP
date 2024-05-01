/*Write a C++ program to create a class which contains two data members.
Write member functions to accept, display and swap two entered numbers
using call by reference*/
#include<iostream>
using namespace std;
class a
{
   public:
      int x,y;
	  void accept()
	{
	    cout<<"Enter Two No : ";
		cin>>x>>y; 	
	}	
	void change(int &a,int &b)
	{
		int t;
		t=a;
		a=b;
		b=t;
	}
	void dis()
	{
		cout<<"Before Swap Value : "<<x<<" "<<y;
	}
};
int main()
{
	a ob;
	ob.accept();
	ob.change(ob.x,ob.y);
	ob.dis();
}

