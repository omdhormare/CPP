#include<conio.h>
#include<iostream.h>
class myarray
{
   public:
     int a[100],n,i;
     void accept()
     {
       cout<<"Enter Array Limit : ";
       cin>>n;
       cout<<"Enter Array Element : ";
       for(i=0;i<n;i++)
       {
	 cin>>a[i];
       }
     }
     void dis()
     {
       cout<<"\nDisplay Array Element : \n";
       for(i=0;i<n;i++)
       {
	 cout<<a[i]<<" ";
       }
     }
};
void main()
{
  myarray ob;
  clrscr();
  ob.accept();
  ob.dis();
  getch();
}




