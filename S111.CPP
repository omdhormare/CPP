#include<ctype.h>
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
class MyFile
{
   public:
	    char ch;
	    fstream f1,f2,f3;
	    void accept()
	    {
	       f1.open("v1.txt",ios::in);
	       f2.open("v2.txt",ios::in);
	       f3.open("v3.txt",ios::out);
	       //f4.open("v4.txt");
	    }
	 void operator+(MyFile &ob1)
	 {
	   while(!f1.eof())
	   {
	      f1.get(ch);
	      f3.put(ch);
	   }
	   while(!f2.eof())
	   {
	      f2.get(ch);
	      f3.put(ch);
	   }
	   f1.close(); f2.close(); f3.close();

	  cout<<"\n Concat succ..";
	 }
	 void operator!()
	 {
	  while(!f1.eof())
	   {
	      if(f1.get(ch)%2==0)
	      if(islower(ch))
		f3.put(toupper(ch));
	      else if(isupper(ch))
		f3.put(tolower(ch));
	      else
		 f3.put(ch);
	   }
	   while(!f2.eof())
	   {
	      f2.get(ch);
	      if(islower(ch))
		f3.put(toupper(ch));
	      else if(isupper(ch))
		f3.put(tolower(ch));
	      else
		 f3.put(ch);
	   }
	   f1.close();
	   f2.close();
	   f3.close();
	   cout<<"\n Change Case";
	 }
};
int main()
{
   MyFile ob,ob1;
  clrscr();
   ob.accept();
   ob1.accept();
    !ob;
  ob+ob1;
  getch();
}