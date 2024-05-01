#include<iostream>
using namespace std;
inline void fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"\nFactorial : "<<f;
}
int main()
{
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	fact(n);
}
