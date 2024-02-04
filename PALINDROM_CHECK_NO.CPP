 #include<iostream.h>
 #include<conio.h>
 int main()
 {
    int n,n1,sum=0,d;
    clrscr();
    cout<<"\n Enter The Number : ";
    cin>>n;
    n1=n;
    while(n>0)
    {
       d=n%10;
       sum=d+(sum*10);
       n=n/10;
    }
    if(sum==n1)
    cout<<"\n Number Is Palindrom : "<<sum;
    else
    cout<<"\n Number NOT Palindrom ";
    getch();
    return 0;
 }