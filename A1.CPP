 #include<iostream.h>
 #include<conio.h>
 class mul
 {
   public:
    int i,n;
    void getdata()
    {
	cout<<"\n Enter The Number : " ;
	cin>>n;

       for(i=1;i<=10;i++)
	{
	   cout<<i*n;
	}
       }
 };
 int main()
 {
    mul ob;
    ob.getdata();
//    ob.dis();
    getch();
    return 0;
 }