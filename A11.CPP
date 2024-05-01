#include<conio.h>
#include<iostream.h>
class student
{
  public:
    int sid;
    char name[100],class1[100];
    void accept()
    {
      cout<<"Enter Student id : ";
      cin>>sid;
      cout<<"Enter Student Name : ";
      cin>>name;
      cout<<"Enter Student class : ";
      cin>>class1;
    }
   void dis()
   {
     cout<<"\nStudent Id : "<<sid;
     cout<<"\nStudent Name : "<<name;
     cout<<"\nStudent class : "<<class1;
   }
};
class stud_comp :public student
{
  public:
    int rank;
    void accepts()
    {
       cout<<"Enter Rank : ";
       cin>>rank;
    }
    void diss()
    {
      cout<<"\nRank : "<<rank;
    }

void sort()
{
   int i,pass,t,n;
   for(pass=0;pass<n;pass++)
   {
     for(i=0;i<pass;i++)
     {
	if(ob[i].rank<ob[i+1].rank)
	{
	   stud_comp t=ob[i];
	   ob[i+1]=ob[i];
	   ob[i+1]=t;
	}
     }
     cout<<"\n Display Rank In Acending Order : \n";
     for(i=0;i<n;i++)
     {
       cout<<id<<"\t"<<name<<"\t"<<class1<<"\t"<<rank;
     }
   }
}
};
void main()
{
  clrscr();
  stud_comp ob,ob1;
  ob.accept();
  ob.accepts();
  ob.dis();
  ob.diss();
  ob1.sort();
  getch();
}









Compiling A11.CPP:
Warning A11.CPP 41: Functions containing for are not expanded inline
Error A11.CPP 45: Undefined symbol 'ob'
Warning A11.CPP 50: 't' is assigned a value that is never used
Error A11.CPP 55: Undefined symbol 'id'
