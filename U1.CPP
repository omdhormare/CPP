 #include<conio.h>
 #include<iostream.h>
 class product
 {
     public:
       int pid,qty,price;
       static int cnt;
       char pname[10];
     void accept()
     {
       cout<<"\nEnter product Id : ";
       cin>>pid;
       cout<<"Enter Product Name : ";
       cin>>pname;
       cout<<"Enter Product Qty : ";
       cin>>qty;
       cout<<"Enter Product Price : ";
       cin>>price;
     }
     void dis()
     {
       cout<<"\n Product Id : "<<pid;
       cout<<"\n Product Name : "<<pname;
       cout<<"\n Product Qty : "<<qty;
       cout<<"\n Product Price : "<<price;
     }
     void static no_object()
     {
	cout<<"\nTotal Number Of Object Created : "<<cnt++;
     }
 };
   int product::cnt=0;
  void main()
  {
     clrscr();
     product ob;
     ob.accept();
     ob.dis();
     product::no_object();
     getch();
  }






