 #include<conio.h>
 #include<iostream.h>
 class worker
 {
    public:
     char wname[20];
     int noh,salary,prate;
     void accept()
     {
       cout<<"\nEnter Worker Name : ";
       cin>>wname;
       cout<<"\nEnter Worker Pay_rate : ";
       cin>>prate;
	cout<<"\nEnter Worker No Of Hourse : ";
       cin>>noh;
     }
     void dis(int prate=100)
     {
	cout<<"\n Total Salary Of Worker : "<<prate*noh;
     }
 };
 void main()
 {
   int prate;
   worker ob;
   clrscr();
   ob.accept();
   ob.dis(prate);
   getch();
 }

