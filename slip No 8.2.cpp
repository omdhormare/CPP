#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
class person
{
	public:
   int no,mob; 
   char name[10],city[10];
   void acc() // function overloading 
   {
   	cout<<"\nEnter person no : ";
      cin>>no;
      cout<<"\nEnter person name : ";
      cin>>name;
      cout<<"\nEnter person city : ";
      cin>>city;
      cout<<"\nEnter person mob no : ";
      cin>>mob;

   }
   void acc(char nme[]) // function overloading 
   {
   	if(strcmp(nme,name)==0)
      {
      cout<<"\nPerson name   : "<<name;
      cout<<"\nPerson mob no : "<<mob<<endl;
      }
   }
   void acc(int mno)  // function overloading 
   {
   	if(mno==mob)
      {
      cout<<"\nPerson name   : "<<name;
      cout<<"\nPerson mob no : "<<mob<<endl;
      }
   }
   void dis()
   {
      cout<<"\nPerson details"<<endl;
      cout<<"\nPerson no     : "<<no;
      cout<<"\nPerson name   : "<<name;
      cout<<"\nPerson city   : "<<city;
      cout<<"\nPerson mob no : "<<mob<<endl;
   }

};
int main()
{
   char nme[10];
   int mno,i,no,ch;// mno=mobile no , no=total person no , ch=choice
   person p[20];
   do{
   cout<<"\n1.Accept person details\n2.Display person details\n3.To search the mobile number of a given person\n4.To search the Person details of a given mobile number\n5.Exit\nEnter your choice :- ";
   cin>>ch;
   switch(ch)
   {
   case 1:cout<<"Enter how many Person Details you want to enter: ";
   		 cin>>no;
          
          for(i=0;i<no;i++)
   		{
	 			p[i].acc();
   		}
         break;
   case 2:for(i=0;i<no;i++)
   		 p[i].dis();
          break;
   case 3:cout<<"\nEnter person name search for mob no : ";
   		 cin>>nme;
          for(i=0;i<no;i++)
  			 p[i].acc(nme);
          break;
   case 4:cout<<"\nEnter mob no search for person name : ";
  			 cin>>mno;
  			 for(i=0;i<no;i++)
  			 p[i].acc(mno);
          break;
   }
   }while(ch!=5);

   return 0;
}
