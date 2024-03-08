//Write a C++ program to generate multiplication table
#include<iostream>
using namespace std;
int main()
{
	int i,n,d;
	cout<<"Enter No : ";
	cin>>n;
	cout<<"\n \n Reverse No : ";
	while(n>0)
	{
		d=n%10;
		cout<<d;
		n=n/10;
	}
}
