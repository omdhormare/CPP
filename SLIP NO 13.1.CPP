/*a) Write a C++ program to create a class Product with data members
Product_id, Product Name, Qty,Price. Write member functions to accept and
display Product information also display number of objectscreated for Product
 class.(Use Static data member and Static member function)*/
 #include<iostream.h>
 #include<conio.h>
 class product
 {
    public:
    int  product_id,qty,price;
    static int cnt;
    char p_name[30];

    void accept()
    {
       cout<<"\n Enter product Id : ";
       cin>>product_id;
       cout<<"\n Enter product Name : ";
       cin>>p_name;
       cout<<"\n Enter product QTY : ";
       cin>>qty;
       cout<<"\n Enter product price : ";
       cin>>price;
    }
    void dis()
    {
       cout<<"\n Enter product Id : "<<product_id;
       cout<<"\n Enter product Name : "<<p_name;
       cout<<"\n Enter product QTY : "<<qty;
       cout<<"\n Enter product price : "<<price;
    }
   static void pcout()
   {
      cnt++;
      cout<<"\n Number Of Time function call : "<<cnt;
   }
 };
 int product ::cnt;
 int main()
 {
   int n,cnt;
   clrscr();
   cout<<"\n Enter The Limit : ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
   product ob;
   ob.accept();
   ob.dis();
   product ::pcout();
   }
   getch();
   return 0;
 }





