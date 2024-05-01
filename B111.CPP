 /*Create a C++ class Person with data members Person name, Mobile number,
 Age, City. Write necessary member functions for the following:
i. Search the mobile number of given person.
ii. Search the person name of given mobile number.
iii. Search all person details of given city.
(Use function overloading)*/
#include<conio.h>
#include<iostream.h>
#include<string.h>
class person
{
  public:
 char pname[20],city[20];
    int mno,age;
    void accept()
    {
      cout<<"Enter Person Name: ";
      cin>>pname;
      cout<<"Enter Person City: ";
      cin>>city;
      cout<<"Enter Person Mobile No: ";
      cin>>mno;
      cout<<"Enter Person Age: ";
      cin>>age;
    }
      void dis()
    {
      cout<<"Person Name: "<<pname;
      cout<<"Person City: "<<city;
      cout<<"Person Mobile No: "<<mno;
      cout<<"Person Age: "<<age;
    }
    void ser(int m)
    {
       if(mno==m)
       {
	  cout<<"person Name : "<<pname;
       }
    }
    void ser(char name[])
    {
       if(strcmp(pname,name)==0)
       {
	 cout<<"Person Mobile No : "<<mno;
       }
    }
    void ser(char c[],int n)
    {
      if(strcmp(city,c)==0)
      {
	cout<<"\n Person Mobile No : "<<mno;
	cout<<"\n Person Name : "<<pname;
	cout<<"\nPerson Age : "<<age;
      }
};

int main()
{
   person ob[100];
   int m,i,n,ch;
   char c[20],name[20];
  //  clrscr();
  do{
       cout<<endl<<"-------------------------------------------"<<endl;
      cout<<"\n1.Accept Person Details ";
      cout<<"\n2.Display Persn Details ";
      cout<<"\n3.Serach Mobile Number to Given person : ";
      cout<<"\n4.Serach person Name of Given Mobile No";
      cout<<"\n5.serach All Person Details of given City";
      cout<<endl<<"------------------------------------------------"<<endl;
      cout<<"Enter Choice : ";
      cin>>ch;
      switch(ch)
      {
      case 1:cout<<"Enter Limit : ";
	     cin>>n;
	     for(i=0;i<n;i++)
	     ob[i].accept();
	     break;
      case 2:cout<<"\nDisplay Person Details : ";
	      for(i=0;i<n;i++)
	      ob[i].dis();
	      break;
       case 3:cout<<"\nEnter person Name To find Mobile No: ";
	      cin>>m;
	      for(i=0;i<n;i++)
	      ob[i].ser(m);
	      break;
       case 4:cout<<"\nEnter Mobile No to find Name : ";
	      cin>>name;
	      for(i=0;i<n;i++)
	      ob[i].ser(name);
	      break;
	case 5:cout<<"\nEnter City To Display All information : ";
	      for(i=0;i<n;i++)
	      ob[i].ser(c,n);
	      break;
     }
     }
     }while(ch<6);


