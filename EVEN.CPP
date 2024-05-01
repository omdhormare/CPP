 #include<conio.h>
 #include<stdlib.h>
 #include<iostream.h>
 #include<fstream.h>
 int main(int argc,char *argv[])
 {
    ofstream f1,f2;
    int n,s;
    cout<<"\n Enter No : ";
    clrscr();
    f1.open("even.txt",ios::out);
    f2.open("odd.txt",ios::out);
 {
    for(int i=0;i<argc;i++)
    n=atoi(argv[i]);
  {
    if(n%2==0)
    f1<<n<<" ";
    else
     f2<<n<<" ";
  }
 }
    getch();
 }