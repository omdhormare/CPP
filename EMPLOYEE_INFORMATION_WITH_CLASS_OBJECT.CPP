 #include<iostream.h>
 #include<conio.h>
 class emp
 {
    public:
    int eno;
    char name[90];
    char address[90];
    double salary;

       void accept()
       {
	  cout<<"\n Enter Employee No : ";
	  cin>>eno;
	  cout<<"\n Enter Employee Name : ";
	  cin>>name;
	  cout<<"\n Enter Employee Address : ";
	  cin>>address;
	  cout<<"\n Enter Employee Salary : ";
	  cin>>salary;
       }
       void dis()
       {
	   cout<<"\n \n Employee No : "<<eno;
	   cout<<"\n \n Employee Name : "<<name;
	   cout<<"\n \n Employee Address : "<<address;
	   cout<<"\n \n Employee Salary : "<<salary;
       }
 };
 int main()
 {
    emp ob;
    clrscr();
    ob.accept();
    ob.dis();
    getch();
    return 0;
 }








