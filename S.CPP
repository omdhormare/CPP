#include<iostream>
#include<fstream>
using namespace std;

class mystring
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
	void operator!()
	{
	      while(!f1.eof())
	   {
	      f1.get(ch);
	      if(islower(ch))
		f3.put(toupper(ch));
	      else if(isupper(ch))
		f3.put(tolower(ch));
	      else
		 f3.put(ch);
		 
		   while(!f1.eof())
	   {
	      f1.get(ch);
	      if(islower(ch))
		f3.put(toupper(ch));
	      else if(isupper(ch))
		f3.put(tolower(ch));
	      else
		 f3.put(ch);
	    	 
		}
	}	
}
}
};
int main()
{
	mystring ob;
	ob.accept();
	+ob;
	!ob;
}
islower TOUpper
isupper Tolower 


