 #include<iostream.h>
 #include<conio.h>
 int main()
 {
    int num1,d,n,sum=0;
    clrscr();
    cout<<"Enter The Number : ";
    cin>>n;
    num1=n;
    while(n>0)
    {
      d=n%10;
      sum=sum+d*d*d;
      n=n/10;
    }
    if(num1==sum)
    cout<<"\n Armstrong No :"<<num1;
    else
    cout<<"Not Armstrong No :"<<num1;
    getch();
    return 0;
 }