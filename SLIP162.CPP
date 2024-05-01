#include<conio.h>
#include<iostream.h>
class MyMatrix
{
  public:
  int a[2][2],b[2][2],i,j;
  void accept();
  void dis();
  MyMatrix operator-();
  MyMatrix operator++();
};
 void MyMatrix::accept()
 {
     cout<<"\n Enter 1 Matrix Element : ";
     for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
       {
	 cin>>a[i][j];
       }
     }
     cout<<"\n Enter 2 Matrix Element : ";
     for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
       {
	 cin>>b[i][j];
       }
     }
 }
 void MyMatrix::dis()
 {
      cout<<"\n Display 1 Matrix Element : \n";
     for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
       {
	 cout<<a[i][j]<<" ";
       }
       cout<<"\n";
     }
      cout<<"\n Display 2 Matrix Element : \n";
     for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
       {
	 cout<<b[i][j]<<" ";
       }
       cout<<"\n";
     }
 }
  MyMatrix MyMatrix:: operator-()
  {
    cout<<"\n Calculate Transponse Matrix : \n";
     for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
       {
	 cout<<a[j][i]<<" ";
       }
       cout<<"\n";
     }
     cout<<"\n Calculate Transponse Matrix : \n";
     for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
       {
	 cout<<b[j][i]<<" ";
       }
       cout<<"\n";
     }
  }
    MyMatrix MyMatrix:: operator++()
  {
    cout<<"\n 1. Matrix Element Increase By 1: \n";
     for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
       {
	 cout<< ++a[i][j]<<" ";
       }
       cout<<"\n";
     }
      cout<<"\n 2. Matrix Element Increase By 1: \n";
     for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
       {
	 cout<< ++b[i][j]<<" ";
       }
       cout<<"\n";
     }
  }

 void main()
 {
   clrscr();
   MyMatrix ob;
   ob.accept();
   ob.dis();
   -ob;
   ++ob;
   getch();
 }