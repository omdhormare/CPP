 #include<conio.h>
 #include<iostream.h>
 class Mymatrix
 {
   public:
   int a1[2][2],a2[2][2],j,i,res[2][2];
    void accept()
    {
       cout<<"\n Enter Matrix 1 Element: \n";
       for(i=0;i<2;i++)
       {
	 for(j=0;j<2;j++)
	 {
	   cin>>a1[i][j];
	 }
       }
    cout<<"\n Enter Matrix 2 Element: \n";
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
	cin>>a2[i][j];
      }
    }
   }
    void dis()
    {
      cout<<"\n Display 1 Matrix : \n";
      for(i=0;i<2;i++)
      {
	for(j=0;j<2;j++)
	{
	  cout<<a1[i][j]<<" ";
	}
	cout<<endl;
      }
      cout<<"\n Display 2 Matrix : \n";
      for(i=0;i<2;i++)
      {
	for(j=0;j<2;j++)
	{
	  cout<<a2[i][j]<<" ";
	}
	cout<<endl;
      }
    }
    void operator-()
    {
       for(i=0;i<2;i++)
       {
	  for(j=0;j<2;j++)
	  {
	    res[i][j]=a2[i][j]-a1[i][j];
	  }
       }
       cout<<"\n\n Two Matrices Substrction \n\n";
       for(i=0;i<2;i++)
       {
	 for(j=0;j<2;j++)
	 {
	   cout<<res[i][j]<<" ";
	 }
	 cout<<endl;
       }
    }
 };

 void main()
 {
  clrscr();
  Mymatrix ob;
  ob.accept();
  ob.dis();
  -ob;
 // ob.dis();
  getch();
 }








