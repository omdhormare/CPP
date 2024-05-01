 #include<iostream.h>
 #include<conio.h>
 int main()
 {
    int n,d;
    clrscr();
    cout<<"\n Enter Number : ";
    cin>>n;
    cout<<"\n Reverse No : ";
    while(n>0)
    {
       d=n%10;
       cout<<d;
       n=n/10;
    }
    getch();
    return 0;
 }