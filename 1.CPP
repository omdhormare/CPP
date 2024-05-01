#include<iostream.h>
#include<ctype.h>
#include<conio.h>
#include<fstream.h>
class myfile
{
   public:
     char ch;
    fstream f1,f2,f3;
    void accept()
    {
       f1.open("om.txt",ios::in);
       f2.open("om1.txt",ios::in);
       f3.open("om2.txt",ios::out);
    }
    void operator+()
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
    }
    void operator !()
    {
       while(!f1.eof())
       {
	  f1.get(ch);
	  if(islower(ch))
	   f3.put(toupper(ch));
	  else if(isupper(ch))
	   f3.put(isupper(ch));
	   else
	     f3.put(ch);
       }
       while(!f2.eof())
       {
	  f2.get(ch);
	  if(islower(ch))
	   f3.put(toupper(ch));
	  else if(isupper(ch))
	  f3.put(islower(ch));
	  else
	    f3.put(ch);
       }
    }
};
 void main()
 {
    myfile ob;
    clrscr();
    ob.accept();
    +ob;
    !ob;
    getch();

 }







