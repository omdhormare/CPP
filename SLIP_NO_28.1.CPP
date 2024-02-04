 #include<iostream.h>
 #include<conio.h>
 int main()
 {
    int i,n;
    clrscr();
    cout<<"\n Enter Limit :";
    cin>>n;

    int *a=new int[n];

    cout<<"\nEnter N Number :\n";
     for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"\nReverse Array : \n";
    for(i=n-1;i>=0;i--)
    cout<<a[i]<<endl;
    getch();
    return 0;

 }