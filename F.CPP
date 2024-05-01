#include<conio.h>
#include<iostream.h>
class fraction
{
   public:
     int a,b,c,d,e,f;
     void accept()
     {
	cout<<"Enter First fraction : ";
	cin>>a>>b;
	cout<<"Enter Second Fraction  : ";
	cin>>c>>d;
     }
     void sum()
     {
	e=a*d+b*c;
	f=b*d;
	cout<<"\n Sum Of Two Fraction : "<<e<<"/"<<f;
     }
};
void main()
{
  fraction ob,ob1;
  clrscr();
  ob.accept();
  ob.sum();
  getch();
}