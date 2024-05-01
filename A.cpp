 #include<isotream.h>
 #include<conio.h>
 int main()
 {
    int n,num,sum=0;
    clrscr();
    cout<<"\n Enter No :";
    cin>>n;
    num=n;
    while(n>0)
    {
      d=n%10;
      sum=sum+d*d*d;
      n=n/10;
    }
    if(sum==num)
    {
       cout<<"\nArmstrong No :"<<num;
    }
    else
    cout<<"\nNOT ARMSTRONG NO ";
    getch();
    return 0;
 }
