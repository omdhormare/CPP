 #include<conio.h>
 #include<iostream.h>
 class twod
 {
   public:
    int p,p1,p2,p3;
    void accept()
   {
     cout<<"\n Enter P1 Coordinates Point : \n";
     cout<<"Enter X Point Value : ";
     cin>>p;
     cout<<"Enter Y Pint Value : ";
     cin>>p1;
     cout<<"\n\n Enter P2 Coordinates Point : \n";
     cout<<"Enter X Point Value : ";
     cin>>p2;
     cout<<"Enter Y Point Value : ";
     cin>>p3;
   }
   void dis()
   {
     cout<<"\nDisplay P1 Coordinates : "<<"("<<p<<","<<p1<<")";
     cout<<"\nDisplay P2 Coordinates : "<<"("<<p2<<","<<p3<<")";
   }
   void operator+()
   {
      cout<<"\nAdd Coordinates P1 AND p2:"<<"("<<p+p2<<","<<p1+p3<<")";
   }
   void operator-()
   {
      cout<<"\nNegates Coordinates of point p1 : "<<"("<<-p<<","<<-p1<<")";
   }
   void operator*()
   {
      int n;
      cout<<"\n Enter Number To Multiply Coordinates Of Point p1 : ";
      cin>>n;
      cout<<"("<<p*n<<","<<p1*n<<")";
   }
 };
 void main()
 {
   twod ob;
   clrscr();
   ob.accept();
   ob.dis();
   +ob;
   -ob;
   *ob;
   getch();
 }