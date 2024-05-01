 #include<conio.h>
 #include<string.h>
 #include<iomanip.h>
 #include<iostream.h>
 class student
 {
   protected:
   int roll_no;
   char name[100];
   public:
   void acceptstudent()
   {
     cout<<"\n\nEnter Roll No : ";
     cin>>roll_no;
     cout<<"\n\nEnter Student Name : ";
     cin>>name;
   }
   void disstudent()
   {
     cout<<"\n Student Roll No : "<<roll_no;
     cout<<"\n Student Name : "<<name;
   }
 };
 class theory:virtual public student
 {
   protected:
   int m1,m2,m3,m4;
   public:
   void accepttheory()
   {
     cout<<"\n\nEnter M1 Mark : ";
     cin>>m1;
     cout<<"\n\nEnter M2 Mark : ";
     cin>>m2;
     cout<<"\n\nEnter M3 Mark : ";
     cin>>m3;
     cout<<"\n\nEnter M4 Mark : ";
     cin>>m4;
   }
  /* void disstudent()
   {
     cout<<"\nM1 Mark : "<<m1;
     cout<<"\nM2 Mark : "<<m2;
     cout<<"\nM3 Mark : "<<m3;
     cout<<"\nM4 Mark : "<<m4;
   } */

 };
  class practical:virtual public student
 {
   protected:
   int p1,p2;
   public:
   void acceptp()
   {
     cout<<"\n\nEnter P1 Mark : ";
     cin>>p1;
     cout<<"\n\nEnter P2 Mark : ";
     cin>>p2;
   }
   /*void disp()
   {
     cout<<"\nP1 Mark : "<<p1;
     cout<<"\nP2 Mark : "<<p2;
   }  */
 };

 class result:public theory,public practical
 {
     protected:
     int total_mark;
     float per;
     char grade[2];
     public:
     void calculate()
 {
     total_mark=m1+m2+m3+m4+p1+p2;
     per=total_mark/6;
    cout<<"\nThe Total Mark : "<<total_mark;
    cout<<"\npercentage : "<<per<<"%";
    cout<<"\n Grade : ";
     if(per>90)
     cout<<"O";
     else if(per>75)
      cout<<"A+";
     else if(per>60)
      cout<<"A";
     else if(per>50)
     cout<<"B";
     else
     cout<<"F";
 }
  void disr()
  {
    //cout<<"\nThe Total Mark : "<<total_mark;
   // cout<<"\npercentage : "<<per<<"%";
    //cout<<"\nGrade : "<<grade;
  }
 };

 void main()
 {
   int ch;
   result ob;
   clrscr();
   do{
	cout<<"\n"<<endl<<"--------------------------------"<<"\n"<<endl;
	cout<<"\n1. Accept Student information :";
	cout<<"\n2. Display Student Information : ";
	cout<<"\n3. Calculate Per,Mark,grade ";
	cout<<"\n"<<endl<<"--------------------------------"<<"\n"<<endl;
	cout<<"\nEnter A choice : ";
	cin>>ch;
	switch(ch)
	{
	  case 1:ob.acceptstudent();
		 break;
	  case 2:ob.disstudent();
		 break;
	  case 3:ob.accepttheory();
		 ob.acceptp();
		// ob.result();
		 ob.calculate();
		 ob.disr();
		 break;
	}
     }while(ch<6);
     getch();
 }









