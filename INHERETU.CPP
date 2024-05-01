 #include<conio.h>
 #include<iostream.h>
 class A
 {
    public:
    A()
    {
       cout<<"\n \n Hello C++";
    }
 };
 class B:public A
 {
    public:
    B()
    {
      cout<<"\n \n Hello Java ";
    }
 };
 int main()
 {
    clrscr();
    B ob;
    getch();
    return 0;
 }