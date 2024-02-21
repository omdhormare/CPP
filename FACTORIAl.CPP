#include<iostream>
using namespace std;
 int main()
 {
   long f=1,n,i;
   cout<<"\n Enter The Number : " ;
   cin>>n;
   for(i=1;i<=n;i++)
   {
      f=f*i;
   }
   cout<<"\n The Factorial : "<<f;
 }
