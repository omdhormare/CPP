#include<iostream>
using namespace std;

void add(int a,int b)
{
	cout<<"\nAddtion 1 : "<<a+b;
}

void add(int a,int b,int c)
{
	cout<<"\nAddtion 2 : "<<a+b+c;
}

void add(int a,float b)
{
	cout<<"\nAddtion 2 : "<<a+b;
}
 int main()
 {
 	int a,b,c;
 	add(10,20);
 	add(100,200,300);
 	add(1000,2000);
 }
