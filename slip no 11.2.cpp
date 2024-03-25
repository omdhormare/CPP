 #include<conio.h>
 #include<iostream.h>
 class student
 {
   protected:
    int rno;
    char name[30];
   public:
    void acceptstudent()
    {
      cout<<"Enter Roll No : ";
      cin>>rno;
      cout<<"\nEnter Student Name : ";
      cin>>name;
    }
    void diss()
    {
      cout<<endl<<"-------------------------------------------------"<<endl;
      cout<<"\nRoll No :"<<rno;
      cout<<"\nStudent Name: "<<name;
    }
 };
 class theory:virtual public student
 {
   protected:
    int m1,m2,m3,m4;
   public:
    void acceptT()
    {
      cout<<endl<<"-------------------------------------------------"<<endl;
      cout<<"Enter M1 Mark : ";
      cin>>m1;
      cout<<"\nEnter M2 Mark: ";
      cin>>m2;
      cout<<"\nEnter M3 Mark : ";
      cin>>m3;
      cout<<"\nEnter M4 Mark: ";
      cin>>m4;
    }
 };
  class practical:virtual public student
 {
   protected:
    int p1,p2;
   public:
    void acceptP()
    {
      cout<<"Enter P1 Mark : ";
      cin>>p1;
      cout<<"\nEnter p2 Mark: ";
      cin>>p2;
    }
 };
 class result: public theory,public practical
 {
   protected:
    int total_mark;
    float per;
   public:
    void cal()
    {
       total_mark=p1+p2+m3+m4+m1+m2;
       per=total_mark/6;
       cout<<endl<<"-------------------------------------------------"<<endl;
       cout<<"\nTotal Mark :"<<total_mark;
       cout<<"\nPercentage : "<<per<<"%";
       cout<<"\nGrade : ";
       if(per>90)
       cout<<"O";
       else if(per>75)
       cout<<"A+";
       else if(per>60)
       cout<<"A";
       else if(per>45)
       cout<<"B";
       else if(per>40)
       cout<<"P";
       else
	cout<<"F";
       //cout<<"\nGrade : ";
    }
 };
 void main()
 {
    int ch;
    result ob;
    clrscr();
    do{
	cout<<endl<<"-----------------------------------------------"<<endl;
	cout<<"\n1.Accept Student Information : ";
	cout<<"\n2.Display Student Infoamtion :";
	cout<<"\n3.Calculate Total Mark,per,grade ";
	cout<<endl<<"-------------------------------------------------"<<endl;
	cout<<"\nEnter A choice : ";
	cin>>ch;
	switch(ch)
	{
	  case 1:ob.acceptstudent();
		 break;
	  case 2:ob.diss();
		 break;
	  case 3:ob.acceptT();
		 ob.acceptP();
		 ob.cal();
		 break;
	}
      }while(ch<4);
      getch();
 }




