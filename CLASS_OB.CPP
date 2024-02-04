 #include<iostream.h>
 #include<conio.h>
 class addition
 {
   public:
   int a,b,c;
 }
 void accept()
 {
    cout<<"\n Enter 1 Number : ";
    cin>>a;
    cout<<"\n Enter 2 Number : ";
    cin>>b;
    c=a+b;
 }
 void dis()
 {
    cout<<"\n Addition : "<<c;
 };
 int main()
 {
   addition.ob;
   ob.accept();
   ob.dis();
   getch();
   return 0;
 }