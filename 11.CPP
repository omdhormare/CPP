#include<conio.h>
#include<iostream.h>
class student
{
   protected :
   int rno;
   char name[20];
   void accept()
   {
      cout<<"\nEnter Roll No : ";
      cin>>rno;
      cout<<"Enter Student Name : ";
      cin>>name;
   }
   void dis()
   {
     cout<<"\nRoll No : "<<rno;
     cout<<"\n Name : "<<name;
   }
};
class theory :virtual public student
{
   protected:
     int m1,m2,m3,m4;
     void acceptt()
   {
     cout<<"\nEnter M1 Mark : ";
     cin>>m1;
     cout<<"Enter M2 Mark : ";
     cin>>m2;
     cout<<"Enter M3 Mark : ";
     cin>>m3;
     cout<<"Enter M4 Mark : ";
     cin>>m4;
   }
    void dist()
    {
      cout<<"\n M1 Mark : "<<m1;
      cout<<"M2 Mark : "<<m2;
      cout<<"M3 Mark : "<<m3;
      cout<<"M4 Mark : "<<m4;
    }
};
class practical:virtual public student
{
   protected:
     int p1,p2;
     void acceptp()
   {
     cout<<"\nEnter P1 Mark : ";
     cin>>p1;
     cout<<"Enter P2 Mark : ";
     cin>>p2;
   }
    void disp()
    {
      cout<<"\n P1 Mark : "<<p1;
      cout<<"P2 Mark : "<<p2;
    }
};
class result :public theory,public practical
{
   protected:
     int total_mark;
     float per;
     char grade;
    void res()
    {
       total_mark=m1+m2+m3+m4+p1+p2;
       cout<<"\n Total Mark : "<<total_mark;
       per=total_mark/100;
       cout<<"\n Percentage : "<<per<<"%";
       if(per>90)
       cout<<"Grade :"<<"O";
       else if(per>80)
       cout<<"Grade :"<<"A+";
       else if(per>60)
       cout<<"Grade : "<<"A";
       else if(per>50)
       cout<<"Grade :"<<"B";
       else if(per>40)
       cout<<"Grade : "<<"PASS";
       else if(per<30)
       cout<<"grade :"<<"Fail";
    }
};
 void main()
 {
    clrscr();
    result ob;
    ob.accept();
    ob.dis();
    ob.acceptt();
    ob.dist();
    ob.acceptp();
    ob.disp();
    ob.res();
 }





	      Compiling 11.CPP:
Error 11.CPP 91: 'student::accept()' is not accessible
Error 11.CPP 92: 'student::dis()' is not accessible
Error 11.CPP 93: 'theory::acceptt()' is not accessible
Error 11.CPP 94: 'theory::dist()' is not accessible
Error 11.CPP 95: 'practical::acceptp()' is not accessible
Error 11.CPP 96: 'practical::disp()' is not accessible
Error 11.CPP 97: 'result::res()' is not accessible













