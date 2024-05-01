#include<iostream>
using namespace std;
inline float area(float l,float h)
{
	return(l*h); 
}
inline float peri(float l,float h)  
{
	return(2*l+2*h); 
}
int main()
{
   float l,h; 
   cout<<"\nEnter value of length(l): ";
   cin>>l;
   cout<<endl;
   cout<<"\nEnter value of height(h): ";
   cin>>h;
   cout<<"\nArea of rectangle: "<<area(l,h);cout<<endl;
   cout<<"\nPerimeter of rectangle :"<<peri(l,h);cout<<endl;
  
}
