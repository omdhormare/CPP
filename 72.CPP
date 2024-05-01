#include<conio.h>
#include<iostream.h>
class vector
{
      int n,n1,*s,*s1;
      public:
     vector(int a1,int b1)
    {
       s=new int[n];
       s1=new int[n1];
    }
    void accept()
    {
       int a,b,i;
       cout<<"Enter 1 Vector Number : ";
       for(i=0;i<n;i++)
       {
	 cin>>a[i];
       }
       cout<<"\nEnter 2 Vector Number : ";
       for(i=0;i<n1;i++)
       {
	 cin>>b[i];
       }
    }
    void dis()
    {
      cout<<"\n 1 Vector Number Display : ";
      for(i=0;i<n;i++)
      {
       cout<<"("<<","<<a[i];
      }
       cout<<"\n 2 Vector Number Display : ";
      for(i=0;i<n1;i++)
      {
       cout<<"("<<","<<b[i];
      }
    }
};

 void main()
 {
    int a,b;
    clrscr();
    cout<<"\nEnter First Vector Limit : ";
    cin>>a;
    cout<<"Enter Second Vector Limit : ";
    cin>>b;
    vector ob(a,b);
    ob.accept();
    ob.dis();
    getch();
 }






