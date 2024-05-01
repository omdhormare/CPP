 #include<iostream.h>
 #include<conio.h>
 class even_odd
 {
    public:
    int n;
     void accept()
    {
	 cout<<"\n Enter The Number :";
	 cin>>n;
    }
    void dis()
    {
      if(n%2==0)
      cout<<"\n Even Number : "<<n;
      else
      cout<<"\n Odd Number : "<<n;
    }
 };
 int main()
 {
   even_odd ob;
   ob.accept();
   ob.dis();
   getch();
   return 0;
 }