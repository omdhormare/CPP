 #include<conio.h>
 #include<iostream.h>
 class MyArray
 {
    public:
     int *a,n;
     MyArray();
    ~MyArray();
 };
 MyArray::MyArray()
 {
    int sum=0,i;
    a=new int[n];
    cout<<"\nEnter Array Limit : ";
    cin>>n;
    cout<<"\nEnter Array Element : ";
    for(i=0;i<n;i++)
  {
    cin>>a[i];
    sum=sum+a[i];
  }
  cout<<"\nSum Of Array Element : "<<sum;
 }
   MyArray::~MyArray()
   {
     delete[] a;
   }
 void main()
 {
   clrscr();
   MyArray ob;
    getch();
 }
