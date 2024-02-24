/*Write a C++ program to find average of 3 integer numbers and average of 3 float numbers.
(Use function overloading)*/
#include<iostream>
using namespace std;

int avg(int a,int b,int c)
{
	return a+b+c/3;
}

int avg(float n1,float n2,float n3)
{
	return n1+n2+n3/3;
}
int main()
{
	int a,b,c;
	float n1,n2,n3;
	cout<<"\n Enter Three Number integer : ";
	cin>>a>>b>>c;
	cout<<"\nThe Integer Number Avarage : "<<avg(a,b,c);
	cout<<"\n"<<"-------------------------------------------------<<""\n";
	
	cout<<"\n Enter Three Number float : ";
	cin>>n1>>n2>>n3;
	cout<<"\nThe Float Number Avarage : "<<avg(n1,n2,n3);
}
