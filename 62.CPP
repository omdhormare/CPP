#include<conio.h>
#include<iostream.h>
class matrix
{
  public:
    int a[2][2],b[2][2],i,j;
    matrix()
  {
     cout<<"Enter 1 Matrix Element : \n";
     for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
       {
	 cin>>a[i][j];
       }
     }
      cout<<"\nEnter 2 Matrix Element : \n";
     for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
       {
	 cin>>b[i][j];
       }
     }
  }
  void dis()
  {
     cout<<"\nDisplay 1 Matrix Element : \n";
     for(i=0;i<2;i++)
     {
	for(j=0;j<2;j++)
	{
	  cout<<a[i][j]<<" ";
	}
	cout<<"\n";
     }
     cout<<"\nDisplay 2 Matrix Element : \n";
     for(i=0;i<2;i++)
     {
	for(j=0;j<2;j++)
	{
	  cout<<b[i][j]<<" ";
	}
	cout<<"\n";
     }
  }
  void transponse()
  {
      cout<<"\n Calculate And Display Transponse Matrix Element : \n";
      cout<<"\n 1 Matrix Element Transport : \n";
      for(i=0;i<2;i++)
      {
	 for(j=0;j<2;j++)
	 {
	   cout<<a[j][i]<<" ";
	 }
	  cout<<"\n";
      }
       cout<<"\n 2 Matrix Element Transport : \n";
      for(i=0;i<2;i++)
      {
	 for(j=0;j<2;j++)
	 {
	   cout<<b[j][i]<<" ";
	 }
	  cout<<"\n";
      }
  }
  ~matrix
  {
     cout<<"\nMemory free...";
  }
};

void main()
{
   clrscr();
   matrix ob;
   ob.dis();
   ob.transponse();
   getch();
}



