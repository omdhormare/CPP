 #include<iostream.h>
 #include<conio.h>
 class worker_information
 {
    public:
    char name[30];
    int no_hourse,salary;
    void accept()
    {
	cout<<"\n Enter Worker Name : ";
	cin>>name;
	cout<<"\n Enter Hourse : ";
	cin>>no_hourse;
    }
    void dis()
    {
       cout<<"\n............... WORKER INFORMATION ..........\n";
       cout<<"\n\n Worker Name :  "<<name;
       cout<<"\n Worker Salary : "<<cal_salary(no_hourse);
    }
    int cal_salary(int no_hourse,int pay_rate=1000)
    {
       return(no_hourse*pay_rate);
    }
 };
 int main()
 {
    worker_information ob;
    clrscr();
    ob.accept();
    ob.dis();
    getch();
    return 0;
 }



