#include<conio.h>
#include<iostream.h>
class vector
{
   int *a,*b,n,n1;
    public:
   int i;
   vector(int n,int n1)
   {
     *a=n;
     *b=n1;
     a=new int[n];
     b=new int[n1];
   }
   void accept()
   {
      cout<<"\nEnter 1 Vector No : ";
      for(i=0;i<n;i++)
     {
       cin>>a[i];
     }
     cout<<"Enter 2 Vector No : ";
      for(i=0;i<n1;i++)
      {
	  cin>>b[i];
      }
   }

   void dis()
   {
      cout<<"\nDisplay 1 Vector No : ";
      for(i=0;i<n;i++)
      {
	  cout<<n[i];
      }
      cout<<"\nDisplay 2 Vector No : ";
      for(i=0;i<n1;i++)
      {
	  cout<<"("<<" , "<<n1[i]<<")";
      }
   }
};
 void main()
 {
   clrscr();
   int n,n1;
   clrscr();
   cout<<"Enter 1 Vector Limit : ";
   cin>>n;
   cout<<"Enter 2 Vector Limit : ";
   cin>>n1;
   vector ob(n,n1);
   ob.accept();
   ob.dis();
   getch();
 }