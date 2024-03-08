/* Write a C++ program to create two Classes Square and Rectangle. 
Compare area of both the shapes
using friend function. .
Accept appropriate data members for both the classes.*/
#include<iostream>
using namespace std;
class Rectangle;
class square
{
	int s;
	public:
		void acceptSquare()
		{
			cout<<"\nEnter Number For find square : ";
			cin>>s;
		}
		friend void area(square,Rectangle);
};
class Rectangle
{
	int l,b;
	public:
		void acceptRectangle()
		{
			cout<<"\nEnter Length : ";
			cin>>l;
			cout<<"\nEnter Breath : ";
			cin>>b;
		}
		friend void area(square,Rectangle);
};
void area(square ob,Rectangle ob1)
{
	int s,r;
	
	s=ob.s*ob.s;
	r=ob1.l*ob1.b;
	
	cout<<"\nSquare Of Number : "<<s;
	cout<<"\nThe Rectagle : "<<r;
	
	if(s<r )
	cout<<"\n\nRectangle Is Greater ..";
	
	else if(s>r)
	cout<<"\n\nRectangle Is Small ..";
	
	else
	cout<<"\nEqual..";
}


int main()
{
	square ob;
	Rectangle ob1;
	ob.acceptSquare();
	ob1.acceptRectangle();
	area(ob,ob1);
}




