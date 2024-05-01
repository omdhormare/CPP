 #include<conio.h>
 #include<iostream.h>
 class point
 {
    int x,y;
    public:
     void setpoint(int x1,int y1)
     {
       x=x1;
       y=y1;
    }
    void showpoint()
    {
      cout<<"\n To Display (x,y) Format \n";
      cout<<"\n("<<x<<","<<y<<")";
    }
 };
 void main()
 {
   int x1,y1;
   clrscr();
   cout<<"\n Enter X values :";
   cin>>x1;
   cout<<"\n Enter Y values :";
   cin>>y1;
   point ob;
   ob.setpoint(x1,y1);
   ob.showpoint();
   getch();
 }


