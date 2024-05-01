 #include<conio.h>
 #include<iostream.h>
 #include<string.h>
 class Mystring
 {
    public:
    char s1[20],s2[20];
     void accept()
     {
       cout<<"Enter 1 String : ";
       cin>>s1;
	cout<<"\nEnter 2 String : ";
       cin>>s2;
     }
     void dis()
     {
       cout<<"\nString 1 : "<<s1;
       cout<<"\nString 2 :" <<s2;
     }
     void operator+()
     {
	strcat(s1,s2);
	cout<<"\n\n String Concat : "<<s1;
     }
 };
 void main()
 {
   clrscr();
   Mystring ob;
   ob.accept();
   ob.dis();
   +ob;
   getch();
 }