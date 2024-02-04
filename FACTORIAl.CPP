 #include<iostream.h>
 #include<conio.h>
 int main()
 {
   int f=1,n;
   clrscr();
   cout<<"\n Enter The Number : " ;
   cin>>n;
   while(n>0)
   {
      f=f*n;
      n--;
   }
   cout<<"\n The Factorial : "<<f;
   getch();
   return 0;
 }