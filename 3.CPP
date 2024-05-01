#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
int main(int argc,char *argv[])
{
  int n,i;
  clrscr();
  fstream f1,f2;
  f1.open("1.txt",ios::out);
  f2.open("2.txt",ios::out);
  for(i=0;i<argc;i++)
  {
    n=atoi(argv[i]);
    if(n%2==0)
     f1<<n<<" ";
    else
      f2<<n<<" ";
  }
  f1.close();
  f2.close();
  getch();
  return 0;
}