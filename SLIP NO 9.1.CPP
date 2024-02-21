 //#include<conio.h>
 //#include<iostream.h>
 class person
 {
    public:
      char name[30];
      char addr[30];
      float salary,tax_amout;
      void accept()
      {
	 cout<<"\n Enter Person Name : ";
	 cin>>name;
	 cout<<"\n Enter Person Address : ";
	 cin>>addr;
	 cout<<"\n Enter Person salary : ";
	 cin>>salary;
      }
      void dis()
      {
	 cout<<"\n \n Person Name : "<<name;
	 cout<<"\nperson Address : "<<addr;
	 cout<<"\nperson Salary : "<<salary;
      }
      void cal_Tax()
      {
	 if(salary<=20000)
	 {
	    tax_amout=0;
	 }
	 else if(salary>=20000 || salary<=40000)
	 {
	    tax_amout=(salary*5)/100;
	 }
	 else if(salary>=40000)
	 {
	    tax_amout=(salary*10)/100;
	 }
	 cout<<"\nTotal Tax : "<<tax_amout;
      }
 };
 void main()
 {
    person ob;
    clrscr();
    ob.accept();
    ob.dis();
    ob.cal_Tax();
    getch();
 }

