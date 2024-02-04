 #include<iostream.h>
 #include<conio.h>
 class number
 {
    private:
      static int cnt;
    public:
      static void dis()
     {
	 cnt++;
	 cout<<"\n Total Display : "<<cnt;
     }
 };
 int number::cnt=0;
 void main()
 {
    number ob;
    clrscr();
    ob.dis();
    getch();
 }
