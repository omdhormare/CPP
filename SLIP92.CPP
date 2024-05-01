) Create a C++ class Time with data members Hours, Minutes and Seconds. Write necessary member
functions for the following: (Use Objects as arguments)
i. To accept a time.
i. To display a time in format hh:mm:ss.
111. To find difference between two time and display it in format hh:mm:ss 
#include<conio.h>
 #include<iostream.h>
 #include<iomanip.h>
 class Time
 {
   public:
    int h,m,s;
    void accept()
    {
      cout<<"\n Enter A time Hourse,minit,second : ";
      cin>>h>>m>>s;
    }
    void dis()
    {
      cout<<setfill('0');
      cout<<"\n"<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s;
    }
    void calculate(Time ob,Time ob1)
    {
	int hh,mm,ss;
	if(ob.h>ob1.h)
	{
	  hh=ob.h-ob1.h;
	  mm=ob.m-ob1.m;
	  ss=ob.s-ob1.s;
	}
	else
	{
	  hh=ob1.h-ob.h;
	  mm=ob1.m-ob.m;
	  ss=ob1.s-ob.s;
	}
	cout<<"\n\n Two time Difference Between : "<<setw(2)<<hh<<":"<<setw(2)<<mm<<":"<<setw(2)<<ss;
    }
 };


 void main()
 {
    clrscr();
   Time ob,ob1;
   cout<<"\n Enter 1 Time : ";
   ob.accept();
   cout<<"\nEnter 2 time : ";
   ob1.accept();
   ob.dis();
   ob1.dis();
   ob.calculate(ob,ob1);
   getch();
 }