//Write a C++ program to generate multiplication table
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter No : ";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<"\n"<<i*n;
	}
}

