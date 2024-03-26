 #include<conio.h>
 #include<iostream.h>
 #include<string.h>
 class student
 {
    public:
     int rno;
     char name[20];
     student(int r,char sname[]) //Parameterized Constructor  
     {
	rno=r;
	strcpy(name,sname);
     }
     student(student &a) //Copy Constructor  
     {
	rno=a.rno;
	strcpy(name,a.name);
     }
     void dis()
     {
       cout<<"\n Roll No : "<<rno;
       cout<<"\nName : "<<name;
     }
 };
 void main()
 {
    int r;
    char sname[20];
    clrscr();
    cout<<"\nEnter Roll No : ";
    cin>>r;
    cout<<"\nEnter Name : ";
    cin>>sname;
    student ob(r,sname);
    student ob1(ob); //Copy Constructor  Pass Object As parameter Constructor  
    ob.dis();
     getch();
 }






