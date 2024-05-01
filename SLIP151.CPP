 #include<conio.h>
 #include<iostream.h>
 class fraction
 {
    public:
     float n,d;
     fraction()
     {
	cout<<"Enter A Numerator : ";
	cin>>n;
	cout<<"Enter A Denometer : ";
	cin>>d;
     }
     void dis()
     {
       cout<<"\nNumerator And Denometer : "<<n/d;
     }
 };
 void main()
 {
   clrscr();
   fraction ob;
   ob.dis();
   getch();
 }