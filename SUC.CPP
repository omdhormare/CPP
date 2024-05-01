#include<iostream.h>
#include<conio.h>
class book
{
  public:
    static int cnt;
    int bid;
    char name[20],author[20],pub[20];
    void accept()
    {
	cout<<"Enter Book No : ";
	cin>>bid;
	cout<<"Enter Book Name : ";
	cin>>name;
	cout<<"Enter Book Author : ";
	cin>>author;
	cout<<"Enter Book Publication : ";
	cin>>pub;
    }
    void dis()
    {
     cout<<"\nBook No : "<<bid;
     cout<<"\nBook Name : "<<name;
     cout<<"\nBook Author : "<<author;
     cout<<"\nBook Publication : "<<pub;
     cnt++;
    }
};
 int book::cnt;
 void main()
 {
   int i,n;
   book ob[100];
   clrscr();
   cout<<"\nEnter Limit : ";
   cin>>n;
   for(i=0;i<n;i++)
   ob[i].accept();
   for(i=0;i<n;i++)
   ob[i].dis();
   cout<<"\n\n Total Count Book : "<<book::cnt++;
   getch();
 }



