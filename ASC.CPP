#include<conio.h>
#include<iostream.h>
class city
{
  public:
     int pop,cid;
     char name;
     void accept()
     {
	cout<<"Enter City No : ";
	cin>>cid;
	cout<<"Enter City Name : ";
	cin>>name;
	cout<<"Enter City Population : ";
	cin>>pop;
     }
     void dis()
    {
      cout<<"\nCity No :"<<cid;
      cout<<"\nCity Name : "<<name;
      cout<<"\nCity Population : "<<pop;
    }
};
void sort(city ob[],int n,int t)
{
   int pass,i;
   for(pass=0;pass<n;pass++)
   {
      for(i=0;i<n-pass;i++)
      {
	 if(ob[i].pop > ob[i+1].pop)
	 {
	   t=ob[i+1].pop;
	   ob[i].pop=ob[i+1].pop;
	   t=ob[i+1].pop;
	 }
      }
}
      for(i=0;i<n;i++)
      cout<<"\n Display City In Ascending Order :\n";
      {
	ob[i].dis();
      }
}
void main()
{
   city ob[100];
   int i,n,ch,t;
   clrscr();
   do{
	cout<<"\n1Enter Limit : ";
	cout<<"\n2Display";
	cout<<"\n3 Ascending Order ";
	cout<<"Enter Choice : ";
	cin>>ch;
	switch(ch)
	{
	  case 1:cout<<"\nEnter Limit : ";
		 cin>>n;
		 for(i=0;i<n;i++)
		 {
		   ob[i].accept();
		 }
		 break;
	 case 2:for(i=0;i<n;i++)
		{
		   ob[i].dis();
		}
		break;
	  case 3:for(i=0;i<n;i++)
		{
		   sort(ob,n,t);
		 }
		 break;
	}
     }while(ch<5);
}








