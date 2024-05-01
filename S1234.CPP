#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
class Time
{
    public:
       int h,m,s;
   void accept()
    {
	  cout<<"Enter Time To : hh mm ss : ";
	  cin>>h>>m>>s;
    }
  void dis()
  {
       cout<<setfill('0');
       cout<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s;
  }
void differnce(Time ob,Time ob1)
{
  if(ob.h>ob1.h)
  {
	 ob.m-ob1.m;
	  ob.s-ob1.s;
  }
 cout<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s;
}
};
 int main()
{
    Time ob[100],ob1[100];
    ob1.accept();
    ob.dis();
    ob.differnce(ob,ob1);
   getch();
  return 0;
}





