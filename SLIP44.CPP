#include<conio.h>
#include<iostream.h>
class emp
{
  public:
     int ecode,salary;
     char name[20];
     void accept()
    {
     cout<<"\nEnter Emp Code : ";
     cin>>ecode;
     cout<<"Enter Emp Name : ";
     cin>>name;
    }
    void dis()
    {
       cout<<"\nEmp Code : "<<ecode;
	cout<<"Emp Name : "<<name;
    }
};
 class fulltime :public emp
 {
     public:
	int daily_wages,no_of_days,salary;
      void aceptf()
      {
	 cout<<"\nEnter Fultime Employee Daily Wages : ";
	 cin>>daily_wages;
	 cout<<"Enter Fultime Employee No Of Days Work : ";
	 cin>>no_of_days;
      }
      void calf()
      {
	  salary=daily_wages*no_of_days;
	  cout<<"\nTotal Salary Of FullTime Employee : "<<salary;
      }
 };
 class parttime : public emp
 {
      public:
	int h_wages,no_of_h,salary1;
      void aceptp()
      {
	 cout<<"\nEnter Parttime Employee Daily Wages : ";
	 cin>>h_wages;
	 cout<<"Enter parttime Employee No Of Days Work : ";
	 cin>>no_of_h;
      }
      void calp()
      {
	  salary1=h_wages*no_of_h;
	  cout<<"\nTotal Salary Of parttime Employee : "<<salary1;
      }
      void cals()
      {
	if(salary>salary1)
	cout<<"\nMaxmim Salary Of fullTime : "<<salary;
	else if(salary<salary1)
	   cout<<"Maxmimum Salary Of Parttime: "<<salary1;
      }
 };
 void main()
 {
    int i,n;
    clrscr();
    fulltime ob[200];
    parttime ob1[200];
    emp ob2[200];
    cout<<"Enter Employye Limit : ";
    cin>>n;
    for(i=0;i<n;i++)
   {
    ob2[i].accept();
    ob[i].aceptf();
    ob1[i].aceptp();
   }
   for(i=0;i<n;i++)
   {
     ob2[i].dis();
     ob[i].calf();
     ob1[i].calp();
     ob1[i].cals();
   }
   getch();
 }



