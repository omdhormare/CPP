/*Write a C++ program to define two function templates for calculating the square and cube of given
numbers with different data types*/
#include<iostream>
using namespace std;
template<class T>
void square(T n)
{
	T s=n*n;
	cout<<"\nSquare No : "<<s;
}
template<class T>
void cube(T n1)
{
	T c=n1*n1*n1;
	cout<<"\nCube Of No : "<<c;
}
int main()
{
	float n;
	int n1;
	cout<<"\nEnter Number :";
	cin>>n>>n1;
	square(n);
	cube(n1);
}
