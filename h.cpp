#include<iostream>
using namespace std;
class Shape
{
	public:
	virtual void area()=0;
};
class Circle:public Shape
{
	public:
		float r,a;
		void area()
		{
			cout<<"\nEnter radius:";
			cin>>r;
			a=3.14*r*r;
			cout<<"Area of circle="<<a;
		}
};
class Sphere:public Shape
{
	public:
		float r,a;
		void area()
		{
			cout<<"\n\nEnter radius:";
			cin>>r;
			a=4*3.14*r*r;
			cout<<"Area of Sphere="<<a;
		}
};
class Cylinder:public Shape
{
	public:
		float a,r,h;
		void area()
		{
			cout<<"\n\nEnter radius & height:";
			cin>>r>>h;
			a=(2*3.14*r*h)+(2*3.14*r*r);
			cout<<"Area of Cylinder="<<a;
		}
};
int main()
{
	Circle ob;
	ob.area();
	
	Sphere ob1;
	ob1.area();
	
	Cylinder ob2;
	ob2.area();
}
