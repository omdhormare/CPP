 #include<conio.h>
 #include<iostream.h>
 int main()
 {

     int a,b,temp;
     clrscr();
     cout<<"\n Enter A Number : ";
     cin>>a;
     cout<<"\n Enter B Number : ";
     cin>>b;
     temp=a;
     a=b;
     b=temp;
     cout<<"\n After Swap  A : "<<a;
     cout<<"\n After Swap  B :"<<b;
     getch();
     return 0;

 }