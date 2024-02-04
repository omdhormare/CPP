 #include<iostream.h>
 #include<conio.h>
 inline max(int a,int b)
 {
    return((a>b)? a:b);
 }
 inline min(int a,int b)
 {
    return((a<b)?a:b);
 }
 int main()
 {
   int a,b;
   clrscr();
   cout<<"Enter 1 Number : ";
   cin>>a;
   cout<<"Enter 2 Number : ";
   cin>>b;
   cout<<"\n Max Number : "<<max(a,b);
   cout<<"\n Min Number : "<<min(a,b);
   getch();
   return 0;
 }