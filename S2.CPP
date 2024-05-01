#include<conio.h>
#include<iostream.h>
class mymatrix
{
  public:
    int a[2][2],b[2][2],i,j;
    void accept()
    {
      cout<<"Enter 1 Matrix : ";
      for(i=0;i<2;i++)
      {
	for(j=0;j<2;j++)
       {
	 cin>>a[i][j];
       }
      }
       cout<<"Enter 2 Matrix : ";
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
       cout<<"\n1 Matrix Display \n";
       for(i=0;i<2;i++)
       {
	 for(j=0;j<2;j++)
	 {
	   cout<<a[i][j]<<" ";
	 }
	 cout<<"\n";
      }
      cout<<"\n2 Matrix Display \n";
      for(i=0;i<2;i++)
      {
	 for(j=0;j<2;j++)
	 {
	   cout<<b[i][j]<<" ";
	 }
	 cout<<"\n";
      }
   }
   void operator-()
    {
       cout<<"\n1 Display Transponse Matrix \n";
       for(i=0;i<2;i++)
       {
	 for(j=0;j<2;j++)
	 {
	   cout<<a[j][i]<<" ";
	 }
	 cout<<"\n";
      }
      cout<<"\n2 Display Transponse Matrix \n";
      for(i=0;i<2;i++)
      {
	 for(j=0;j<2;j++)
	 {
	   cout<<b[j][i]<<" ";
	 }
	 cout<<"\n";
      }
   }
   void operator++()
    {
       cout<<"\n Add 1 Element Matrix \n";
       for(i=0;i<2;i++)
       {
	 for(j=0;j<2;j++)
	 {
	   cout<<a[i][j]+1<<" ";
	 }
	 cout<<"\n";
      }
      cout<<"\n2 Add 1 Element Matrix \n";
      for(i=0;i<2;i++)
      {
	 for(j=0;j<2;j++)
	 {
	   cout<<b[i][j]+1<<" ";
	 }
	 cout<<"\n";
      }
   }


};

 void main()
 {
    mymatrix ob;
    clrscr();
    ob.accept();
    ob.dis();
    -ob;
    ++ob;
    getch();
 }



