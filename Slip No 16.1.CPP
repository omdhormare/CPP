/* Write a C++ program to create a class Machine with data members MachineId,
 Machine Name, Price.Create and initialize all values of Machine object by
 using parameterized constructor and copy constructor.
 Display details of Machine using setw() and setprecision( ). */
 #include<conio.h>
 #include<iostream.h>
 #include<string.h>
 #include<iomanip.h>
 class machine
 {
  int machine_id;
  float mprice;
  char name[30];
  public:
    machine(int mid,float price,char mname[])
    {
       machine_id=mid;
       mprice=price;
       strcpy(mname,mname);
       cout<<"Enter Machine Id : ";
       cin>>machine_id;
       cout<<"Enter Machine Name : ";
       cin>>name;
       cout<<"Enter Machine price : ";
       cin>>mprice;
    }
    machine(machine &m)
    {
       machine_id=m.machine_id;
       mprice=m.mprice;
       strcpy(name,m.name);
    }
    void dis()
    {
      cout<<"\nMachine Id : "<<setw(10)<<machine_id;
      cout<<"\nMachine Name : "<<setw(10)<<name;
      cout<<"\nMachine Price : "<<setfill(2)<<mprice;
    }
 };
  void main()
  {
    int mid;
    float price;
    char mname[20];
    clrscr();
    machine ob(mid,price,mname);
    machine ob1(ob);
    ob.dis();
    getch();
  }
