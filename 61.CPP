#include<conio.h>
#include<iostream.h>
class square
{
   private:
     int s,s1;
   void accept()
   {
      cout<<"\n Enter Number : ";
      cin>>s;
      s1=s*s;
      cout<<"\nSquare Of These Number : "<<s1;
   }
   friend void(square,rectangle);
};
class rectangle
{
   private:
     int l,b,a;
   void square()
   {
      cout<<"\n Enter length : ";
      cin>>l;
       cout<<"\n Enter Breath : ";
      cin>>b;
      a=l*b;
      cout<<"\n Area of Rectanle : "<<a;
   }
   friend void(square,rectangle);
   void com()
   {
      if(s1>a)
      cout<<"\n Square Is Greater";
      else if(s1<a)
      {
       cout<<"\n Rectangle Is greater ";
      }
      else
       cout<<"\n Same ";
   }
};
  void main()
  {
     square ob;
     ob.accept();
     rectangle ob1;
     ob1.square();
     ob1.com();
  }

