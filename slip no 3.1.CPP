 #include<iostream.h>
 #include<conio.h>
 void swap(int &a,int &b)
 {
     int temp;
     temp=a;
     a=b;
     b=temp;
 }
 int main()
 {
    int a,b;
    clrscr();
    cout<<"\n Enter A Value : ";
    cin>>a;
    cout<<"\n Enter B Value : ";
    cin>>b;
    cout<<"\n Before Swap A : "<<a;
    cout<<"\n Before Swap B : "<<b;
    swap(a,b);
    cout<<"\n \n After Swap A : "<<a;
    cout<<"\n After Swap B : "<<b;
    getch();
    return 0;
 }