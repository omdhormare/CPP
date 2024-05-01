 #include<iostream.h>
 #include<conio.h>
 class add
 {
    public:
    int a,b,c;
    void accept()
    {
       cout<<"\n Enter 1 Number :";
       cin>>a;
       cout<<"\n Enter 2 Number :";
       cin>>b;
    }
    void dis()
    {
       c=a+b;
       cout<<"\n Addition : "<<c;
    }
 };
 int main()
 {
    add ob;
    clrscr();
    ob.accept();
    ob.dis();
    getch();
    return 0;
 }