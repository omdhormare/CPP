#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
   char ch;
   fstream f1,f2;
   clrscr();
   f1.open("f1.txt",ios::in);
   f2.open("f2.txt",ios::out);
   if(!f1.fail())
   {
     cout<<"\nFile No Found : ";
   }
   while(!f1.eof())
   {
      f1.get(ch);
      f2.put(ch);
   }
   cout<<"\n File Data Copy Succefull In Anothr File....";
   f1.close();
   f2.close();
   getch();
}