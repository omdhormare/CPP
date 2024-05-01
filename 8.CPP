#include<conio.h>
#include<iostream.h>
#include<string.h>
class person
{
   public:
     char pname[30],city[20];
     int mno,age;
     void accept()
     {
	cout<<"\nEnter Person Name : ";
	cin>>pname;
	cout<<"Enter Person City : ";
	cin>>city;
	cout<<"Enter Person Age : ";
	cin>>age;
	cout<<"Enter Person Mobile No : ";
	cin>>mno;
     }
     void dis()
     {
       cout<<"\nPerson Name : "<<pname;
       cout<<"Person City : "<<city;
       cout<<"Person Age : "<<age;
       cout<<"Person Mobile No  : "<<mno;
     }
     void ser(int pno)
     {
	if(mno==pno)
	{
	   cout<<"\nPerson Name : "<<pname;
	    cout<<"Person City : "<<city;
	   cout<<"Person Age : "<<age;
	}
     }
     void ser(char pname[])
     {
	if(strcmp(pname,pname)==0)
	{
	   cout<<"Person Mobile No  : "<<mno;
	}
     }
      void ser(char c[],s1[])
     {
	if(strcmp(city,c)=0)
	{
	   cout<<"\nPerson Name : "<<name;
	    cout<<"Person Mobile No : "<<mno;
	   cout<<"Person Age : "<<age;
	}
     }
};
void main()
{
   char c[20],pname[20];
   int pno,i;
   person ob;
   clrscr();
   cout<<"\nEnter Limit To Person :";
   cin>>n;
   for(i=0;i<n;i++)
   {
      ob[i].accept();
      ob[i].dis();
      cout<<"\nEnter Person Mobile No : ";
      cin>>pno;
      ob[i].ser(pno);
      cout<<"\nEnter person Name : ";
      cin>>pname;
      ob[i].ser(pname[]);
	cout<<"\nEnter person City : ";
      cin>>c;
      ob[i].ser(c[],s1[]);
   }
     getch();
}


