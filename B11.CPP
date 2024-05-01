#include<conio.h>
#include<iostream.h>
#include<string.h>
class person
{
  public:
    int age,mno;
    char pname[30],city[20];
    void accept()
    {
       cout<<"Enter Person Name : ";
       cin>>pname;
       cout<<"Enter person Mobile No : ";
       cin>>mno;
       cout<<"Enter person City :";
       cin>>city;
       cout<<"Enter person Age : ";
       cin>>age;
    }
    void dis()
    {
       cout<<"\n \nperson Name :"<<pname;
       cout<<"Person Mobile No :"<<mno;
       cout<<"Person Age : "<<age;
       cout<<"Person City : "<<city;
    }
    void ser(char name[])
    {
       if(strcmp(pname,name)==0)
       {
	 cout<<"\nPerson Phone No  : "<<mno<<endl;
       }
    }
     void ser(int no)
    {

       if(mno==no)
       {
	 cout<<"\nPerson Name : "<<pname<<endl;
       }
    }
     void ser(char c[],int n)
    {
       if(strcmp(city,c)==0)
       {
	 cout<<"\nPerson Name : "<<pname<<endl;
	 cout<<"\nPerson Phone No  : "<<mno;
	 cout<<"\nPerson Age : "<<age;
       }
    }
};
int main()
{
    person ob[100];
    int n, ch, i,no;
    char c[20],name[20];
    do {
	cout<<endl<<"-------------------------------------------"<<endl;
	cout<<"\n1.Accept Person Details ";
	cout<<"\n2.Display Person Details :";
	cout<<"\n3. Search The Mobile Number Of given Person ";
	cout<<"\n4. Serach The Person Name of Give Mobile Number :";
	cout<<"\n4. Search All person Details of Given City : ";
	cout<<endl<<"-------------------------------------------"<<endl;
	cout << "Enter Choice: ";
	cin >> ch;
	switch (ch)
	{
	    case 1:cout<<"Enter Limit : ";
		   cin>>n;
		   for(i=0;i<n;i++)
		   ob[i].accept();
		   break;
	    case 2:cout<<"\nDisplay All person Details : ";
		   for(i=0;i<n;i++)
		   ob[i].dis();
		   break;
	    case 3:cout<<"\nEnter Person name To Find Mobile No : ";
		   cin>>no;
		   for(i=0;i<n;i++)
		   ob[i].ser(no);
		   break;
	    case 4:cout<<"\nEnter Person Mobile No To Find Name : ";
		   cin>>name;
		   for(i=0;i<n;i++)
		   ob[i].ser(name);
		   break;
	    case 5:cout<<"\nEnter Person city To find All Information : ";
		   cin>>c;
		   for(i=0;i<n;i++)
		   ob[i].ser(c,n);
		   break;
	}
    } while (ch>6);
     getch();
    return 0;
}
