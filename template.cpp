#include<iostream>
#include<string.h>
using namespace std;
template <class T>
void add(T a,T b)
{
	T c=a+b;
	cout<<"\nAddtion : "<<c;
}
 int main()
 {
 	add(10,20);//int number
 	add(10.2f,20.3f);//float Number
 	add(1.1d,2.2d);//double Number
 }
