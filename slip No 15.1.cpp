#include<iostream>
using namespace std;
class fraction
{
	public:
		 int n,n1;
   fraction(int a,int b)
   {
   	    n=a;
   	    n1=b;
   }
   void add(fraction ob,fraction ob1)
   {
   	  int n=ob.n+ob1.n;
   	  int d=ob1.n1+ob1.n1;
   	  cout<<"\n Sum Of Fraction : "<<n<<"/"<<d;
   }	
};

int main()
{
	int a,b;
	cout<<"Enter Numerator :";
	cin>>a;
	cout<<"Enter Denometer :";
	cin>>b;
		cout<<"Enter Numerator :";
	cin>>a;
	cout<<"Enter Denometer :";
	cin>>b;
	fraction ob1(a,b);
	fraction ob(a,b);
	ob.add(ob,ob1);
	//ob1.add(ob,ob1);
}
