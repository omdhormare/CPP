 #include<iostream.h>
 #include<conio.h>
 int main()
 {
    int d,n,sum=0;
    clrscr();
    cout<<"\n Enter The Number : ";
    cin>>n;
    while(n>0)
    {
	d=n%10;
	sum=sum+d;
	n=n/10;
    }
    cout<<"\n Sum Of Digit : "<<sum;
    getch();
    return 0;
 }