 #include<conio.h>
 #include<iostream.h>
 #include<string.h>
 class city
 {
   public:
    int city_code,population;
    char city_name[20];
    void accept()
    {
      cout<<"\nEnter City Code : ";
      cin>>city_code;
      cout<<"Enter City Name : ";
      cin>>city_name;
      cout<<"Enter City Population : ";
      cin>>population;
    }
    void dis()
    {
      cout<<"\n\nCity Code : "<<city_code;
      cout<<"\nCity Name : "<<city_name;
      cout<<"\nCity population : "<<population;
    }
    void details(char s1[])
    {
       if(strcmp(city_name,s1)==0)
       {
	 cout<<"\nCity Code : "<<city_code;
	 cout<<"\nCity population : "<<population;
       }
    }
 };
    void asc(city ob[],int n)
    {
	int i,pass,temp;
	for(pass=0;pass<n;pass++)
	{
	  for(i=0;i<n-1-pass;i++)
	  {
	    if(ob[i+1].population < ob[i].population)
	    {
	      temp=ob[i+1].population;
	      ob[i+1].population=ob[i].population;
	      ob[i].population=temp;
	    }
	  }
	}
	cout<<"\nAscending Order All City Information : ";
	for(i=0;i<n;i++)
	{
	  ob[i].dis();
	}
    }
 void main()
 {
   int i,n,ch;
   char s1[100];
   clrscr();
   do{
      cout<<endl<<"--------------------------------------------------"<<endl;
      cout<<"\n1. Enter Limit : ";
      cout<<"\n2. Display Details : ";
      cout<<"\n3. All Display City In Ascending Order : ";
      cout<<"\n4. Display Details Of Particular City : ";
      cout<<endl<<"--------------------------------------------------"<<endl;
      cout<<"\nEnter Choice : ";
      cin>>ch;
      switch(ch)
      {
	 case 1:cout<<"Enter Limit : ";
		cin>>n;
		city *ob=new city[n];
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
	 case 3:asc(ob,n);
		break;
	 case 4: cout<<"\nEnter A City Name To Display Information : ";
		 cin>>s1;
	       for(i=0;i<n;i++)
	       {
		ob[i].details(s1);
	       }
		break;
      }

     }while(ch<5);
     getch();
 }
