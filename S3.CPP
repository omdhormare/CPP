#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{
   int i,a[100],n;
   clrscr();
   cout<<"\nEnter Limit : ";
   cin>>n;
   cout<<"Enter N Number : ";
   for(i=0;i<n;i++)
   cin>>a[i];
   fstream f1,f2;
   //f1.open("odd.txt",ios::out);
  // f2.open("even.txt",ios::out);
    if(a[i]%2==0)
     f1.open("odd.txt",ios::out);
    else
    f1.open("even.txt",ios::out);
    getch();
}