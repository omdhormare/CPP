#include<conio.h>
#include<iostream.h>
class add
{
 int a,b,c;
  public:
    void accept()
    {
      cout<<"Enter 2 number : ";
      cin>>a>>b;
    }
    friend void sum(add &t);
    void dis()
    {
      cout<<"sum : "<<c;
    }
};
  void sum(add &t)
  {
    t.c=t.a+t.b;
  }
  void main()
  {
     add ob;
     clrscr();
     ob.accept();
     add(ob);
     ob.dis();
     getch();
  }


