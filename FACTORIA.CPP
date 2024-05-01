 #include<iostream>
using namespace std;
 int main()
 {
   int f=1,n;
   cout<<"\n Enter The Number : " ;
   cin>>n;
   while(n>0)
   {
      f=f*n;
      n--;
   }
   cout<<"\n The Factorial : "<< "\n"<<f;
 }
