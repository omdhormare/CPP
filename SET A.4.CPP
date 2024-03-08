//Write a C++ program to display Armstrong numbers between two intervals
#include<iostream>
using namespace std;
int main()
{
	int i,n,d,sum=0,num;
	cout<<"Enter No : ";
	cin>>n;
	num=n;
	while(n>0)
	{
		d=n%10;
		sum=sum+(d*d*d);
		n=n/10;
	}
	if(sum==num)
	{
		cout<<"\n Armstrong No : "<<num;
	}
	else
	cout<<"\n NOT Armstrong No : "<<num;
}
