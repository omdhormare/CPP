
#include<iostream>
#include<iomanip>
using namespace std;
class Travels
{
  public:
     int tno,rid;
    char cname[20];
    char source[20];
    char destination[20];
void accepT()
{
cout<<"\nEnter travel Number : ";
cin>>tno;
cout<<"\nEnter travel Company Name: ";
cin>>cname;
}
void dis1()
{
  cout<<"\nTravel No : "<<tno;
  cout<<"\nTravel Comapany Name  : "<<tno;
}
};
class route:public Travels
{
	public:
		 int no_of_seat;
		 char travels_class[30];
		 int dd,mm,yy;
void acceptR()
{
cout<<"\nEnter Route Id : ";
cin>>rid;
cout<<"\nEnter Source : ";
cin>>source;
cout<<"\nEnter Destination : ";
cin>>destination;
}
void dis2()
{
  cout<<"\nRoute Id : "<<rid;
  cout<<"\nRoute Sourse  : "<<source;
  cout<<"\nRoute Destination  : "<<destination;
}
};
class Reservation:public route
{
public:
    void accept()
    {
        cout<<"\nEnter Number of seat  : ";
        cin>>no_of_seat;
        cout<<"\nEnter travels Class : ";
        cin>>travels_class;
        cout<<"\nEnter Travel Date : ";
        cin>>dd>>mm>>yy;
    }
    void dis3()
    {
        cout<<"\nRoute Id : "<<rid;  // Accessing rid from the base class
        cout<<"\nRoute Class  : "<<travels_class;  // Accessing travels_class from the derived class
        cout<<setfill('0');
        cout<<"\nTravel Date  : "<<setw(2)<<dd<<":"<<setw(2)<<mm<<":"<<setw(2)<<yy;
    }
};

int main()
{
	Travels ob[100];
	int n,i;
	cout<<"\nEnter Limit : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		ob[i].accepT();
	}
		for(i=0;i<n;i++)
	{
		ob[i].acceptR();
	}
		for(i=0;i<n;i++)
	{
		ob[i].accept();
	}
	for(i=0;i<n;i++)
	{
		ob[i].dis1();
	}
	for(i=0;i<n;i++)
	{
		ob[i].dis2();
	}
	for(i=0;i<n;i++)
	{
		ob[i].dis3();
	}
	
}
