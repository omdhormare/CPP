#include<conio.h>
#include<iostream.h>
#include<string.h>
class string
{
    public:
     char s1[50],s2[200];
     int i;
    void rep()
    {
       cout<<"\nEnter String : ";
       cin>>s1;
       cout<<"\nEnter A string To replace  : ";
       cin>>s2;
       for(i=0;i<=strlen(s2);i++)
       {
	 if(strcmp(s1,s2)=0)
	 {
	    cout<<s2=s1;
	 }
       }
    }
};

void main()
{
  string ob;
  clrscr();
  ob.rep();
  getch();
}