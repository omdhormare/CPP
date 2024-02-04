 #include<iostream.h>
 #include<conio.h>
 int main()
 {
    int i,n,count=0;
    clrscr();
    cout<<"\n Enter The Number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       count++;
    }
    if(count==2)
    cout<<"\n Prime Number :"<<n;
    else
    cout<<"\n Not Prime Number : "<<n;
    getch();
    return 0;
 }