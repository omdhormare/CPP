#include<iostream.h>
#include<fstream.h>
#include<ctype.h>
#include<conio.h>
//using namespace std;
class myfile
{
    public:
	fstream f1,f2,f3;
	char ch;
	 void accept()
	 {
	    f1.open("f1.txt",ios::in);
	    f2.open("f2.txt",ios::in);
	    f3.open("f3.txt",ios::out);
	 }
	 void operator+()
	 {
	    while(f1.get(ch))
	    {
	     f3.put(ch);
	    }
	     while(f2.get(ch))
	    {
	     f3.put(ch);
	    }
	 }
	 void operator!()
	 {
	     while(!f1.eof())
	     f1.get(ch);
	    if(islower(ch))
	     f3.put(isupper(ch));
	    else if(toupper(ch))
	      f3.put(tolower(ch));

	     while(!f2.eof())
	     f2.get(ch);
	    if(islower(ch))
	     f3.put(isupper(ch));
	    else if(toupper(ch))
	      f3.put(tolower(ch));
	 }
};
int main()
{
    myfile ob;
    clrscr();
    ob.accept();
    +ob;
    !ob;
    getch();
}
