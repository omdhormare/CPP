#include<conio.h>
#include<iostream.h>
#include<fstream.h>
class Movie
{
    public:
	char mname[30],dname[30];
	int ryear,budget;
	void accept()
	{
	  cout<<"\nEnter Movie Name: ";
	  cin>>mname;
	  cout<<"Enter Director Name : ";
	  cin>>dname;
	  cout<<"Enter Release year: ";
	  cin>>ryear;
	  cout<<"Enter Budget : ";
	  cin>>budget;
	}
};
 void main()
 {
    Movie ob[100];
    int i,n;
    char ch;
    clrscr();
    cout<<"\n Enter Movie Limit : ";
    cin>>n;
    for(i=0;i<n;i++)
    ob[i].accept();

    fstream t1;
    t1.open("movie1.txt",ios::out);
    for(i=0;i<n;i++)
    {
    t1<<"Movie Name :"<<ob[i].mname<<"\n";
    t1<<"Movie Director Name : "<<ob[i].dname<<"\n";
    t1<<"Movie Budget : "<<ob[i].budget<<"\n";
    t1<<"Movie Release :"<<ob[i].ryear<<"\n\n";
    }
     t1.close();

    t1.open("movie1.txt",ios::in);
    while(t1.get(ch))
    {
      cout<<ch;
    }

    t1.close();
    cout<<"\n Number Of Object Cout In File : "<<n;
    getch();
 }











