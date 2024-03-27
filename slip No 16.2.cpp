#include<conio.h>
#include<iostream.h>
class MyMatrix
{
  public:
  int a[2][2],b[2][2],i,j;
  void accept();
  void dis();
};
 void MyMatrix::accept()
 {
     cout<<"\n Enter 1 Matrix Element : ";
     for(i=0;i<2;i++)
     {
       cin>>a[i][j];
     }
     cout<<"\n Enter 2 Matrix Element : ";
     for(j=0;j<2;j++)
     {
       cin>>b[i][j];
     }
 }
 void MyMatrix::dis()
 {
      cout<<"\n Display 1 Matrix Element : ";
      for(i=0;i<2;i++)
     {
       cout<<a[i]<<" ";
     }
       cout<<"\n";
      cout<<"\n Display 2 Matrix Element : ";
      for(j=0;j<2;j++)
     {
       cout<<b[j]<<" ";
     }
      cout<<"\n";
 }
 void main()
 {
   MyMatrix ob;
   ob.accept();
   ob.dis();
   clrscr();
   getch();
 }
