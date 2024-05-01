 #include<iostream.h>
 #include<conio.h>
 class swap
 {
   public:
     swap(int a,int b)
     {
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter Swap No : "<<a;
	cout<<"\nAfter Swap No : "<<b;
     }
 };
 int main()
 {
   int a,b;
   cout<<"\nEnter 1 No :";
   cin>>a;
   cout<<"\nEnter 2 No : ";
   cin>>b;
   cout<<"\n\nBefore Swaping : "<<a;
   cout<<"\nBefore Swaping : "<<b;
   swap ob(a,b);
   getch();
 }