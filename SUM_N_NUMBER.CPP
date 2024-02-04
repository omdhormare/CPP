 #include<iostream.h>
 #include<conio.h>
 int main()
 {
   int i,n,sum=0;
   clrscr();
   cout<<"\n Enter The Number : ";
   cin>>n;
   for(i=0;i<=n;i++)
   {
     sum=sum+i;
   }
   cout<<"\n Sum Of N Number : "<<sum;
   getch();
   return 0;
 }