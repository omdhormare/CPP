 #include<conio.h>
 #include<iostream.h>
 class Mystring
 {
   public:
    int *a,n,i;
    void accept();
    void dis();
    void operator-();
    void operator+();
 };
   void Mystring :: accept()
    {
      cout<<"Enter Array Element Limit : ";
      cin>>n;
      a=new int[n];
      cout<<"Enter Array Element : ";
      for(i=0;i<n;i++)
      cin>>a[i];
    }
    void Mystring :: dis()
    {
      cout<<"\nDisplay  Array Element : ";
      for(i=0;i<n;i++)
      cout<<a[i]<<" ";
    }
    void Mystring:: operator-()
    {
       cout<<"\nReverse Array Element : ";
       for(i=n-1;i>=0;i--)
       cout<<a[i]<<" ";
    }
    void Mystring :: operator+()
    {
       int n1;
       cout<<"\nEnter Array Element Constant : ";
       cin>>n1;
       for(i=0;i<n;i++)
       cout<<a[i]+n1<<" ";
    }
  void main()
  {
    Mystring AA;
    clrscr();
    AA.accept();
    AA.dis();
    -AA;
    +AA;
    getch();
  }











