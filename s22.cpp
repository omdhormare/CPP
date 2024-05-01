 /*Create a base class Travels with data members T_no, Company_Name.
 Derive a class Route with data members Route id, Source, and Destination
 from Travels class. Also derive a class Reservation with data members
 Number_of_ Seats, Travels Class, Fare, and Travel Date from Route.
Write a C++ program to perform following necessary member functions:
i. Accept details of n reservations.
ii. Display details of all reservations.
ili. Display reservation details of a specified Date.   */
#include<conio.h>
#include<iostream.h>
  class Travels
  {
    public:
      int tno;
      char cname[30];
      void accept()
      {
	cout<<"\nEnter T_No :";
	cin>>tno;
	cout<<"\nEnter Company Name : ";
	cin>>cname;
      }
  };
  class Route:public Travels
  {
     public:
       int rid;
       char source[30];
       char destination[20];
     void acceptR()
     {
	cout<<"\nEnter Route Id :";
	cin>>rid;
	cout<<"\nEnter Source : ";
	cin>>source;
	cout<<"\nEnter Destination : ";
	cin>>destination;
     }
  };
  class Reservation :public Route
  {
     public:
      int no_of_seat,date;
     void acceptRE()
     {
	  cout<<"\nEnter No Of Seat : ";
	  cin>>no_of_seat;
	  cout<<"\nEnter Travels date :";
	  cin>>date;
     }
     void dis()
     {
       cout<<"\nTravels No : "<<tno;
       cout<<"\nComapny Name : "<<cname;
       cout<<"\nRoute Id :"<<rid;
       cout<<"\nDestination : "<<destination;
       cout<<"\nNo Of Seats : "<<no_of_seat;
       cout<<"\nTravel Date : "<<date;
     }
  };
   int main()
   {
      int i,n,ch;
       Reservation ob[100];
      clrscr();
      do{
	   cout<<"\n\n1.Accept Details N Reservation ...";
	   cout<<"\n\n2.Display All Resarvation....";
	   cout<<"\n\n3.Display Reservation Details Of Specific date ..\n";
	   cout<<"--------------------------------------------";
	   cout<<"\nEnter Choice : ";
	   cin>>ch;
	   switch(ch)
	   {
	      case 1:cout<<"\nEnter Limit : ";
		     cin>>n;
		     for(i=0;i<n;i++)
		     cout<<"\nEnter Details : ";
		     for(i=0;i<n;i++)
		     {
		       ob[i].accept();
		       ob[i].acceptR();
		       ob[i].acceptRE();
		     }
		     break;
	      case 2:for(i=0;i<n;i++)
		     ob[i].dis();
		     break;
	   }
	}while(ch<5);
	getch();
	return 0;
   }


