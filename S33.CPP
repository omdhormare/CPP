#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
int main(int argc,char argv[])
{
   int i,n,num;
   clrscr();
   fstream p1,p2;
   p1.open("even.txt",ios::out);
   p2.open("odd.txt",ios::out);
   for(i=0;i<argc;i++)
   num=atoi(argv[i]);
   {
      if(num%2==0)
      p1<<num;
      else
      p1<<num;
   }
   p1.close();
   p2.close();
   getch();
}
