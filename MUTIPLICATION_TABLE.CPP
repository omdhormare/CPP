 #include<iostream.h>
 #include<conio.h>
 int main()
 {
   int i,n;
   clrscr();
   cout<<"Enter The Number :";
   cin>>n;
   for(i=1;i<=10;i++)
 {
   cout<<"\n"<<n<<"*"<<i<<"="<< i*n;
 }
   getch();
   return 0;
 }