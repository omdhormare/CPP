 #include<iostream.h>
 #include<conio.h>
 int main()
 {
    int n,count=0;
    clrscr();
    cout<<"Enter The Number : ";
    cin>>n;
    while(n>0)
    {
       n=n/10;
       count++;
    }
    cout<<"\n Total Digit Count :"<<count;
    getch();
    return 0;

 }