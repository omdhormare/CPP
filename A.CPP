 #include<conio.h>
 #include<iostream.h>
 void stat()
 {
    int m=0;
    static int n=0;
    m++;
    n++;
    cout<<m<<" "<<n<<"\n";
 }
 void main()
 {
    clrscr();
    stat();
    stat();
    getch();
 }