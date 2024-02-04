 #include<iostream.h>
 #include<conio.h>
 class collage
 {
    public:
    int cno;
    char cname[20],Address[20];
    void acceptc()
    {
       cout<<"\n Enter Collage No : ";
       cin>>cno;
       cout<<"\n Enter Collage Name : ";
       cin>>cname;
       cout<<"\n Enter Collage Address : ";
       cin>>Address;
    }
 };
 class student:public collage
 {
   public:
   int rno;
   char sname[30];
   int per;
   void accept()
   {
      cout<<"\n Enter Student Roll No :" ;
      cin>>rno;
      cout<<"\n Enter Name : ";
      cin>>sname;
      cout<<"\n Enter Per : ";
      cin>>per;
   }
   void dis()
   {

      cout<<"\n Collage No : "<<cno;
      cout<<"\n Collage Name : "<<cname;
      cout<<"\n Collage Address : "<<Address;
      cout<<"\n Student Roll No :"<<rno;
      cout<<"\n Student Name : "<<sname;
      cout<<"\n Student Per : "<<per;
   }
 };
 int main()
 {
    clrscr();
    collage student;
    ob.accept();
    ob.dis();
    getch();
    return 0;
 }



