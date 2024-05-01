/*Write a C++ program to find volume of cylinder, cone and sphere.
(Use function overloading) */
#include<conio.h>
#include<iostream.h>
class find
{
  public:
   int volume(float r,float h)
   {
       return 3.14*r*r*h;
   }
   int volume(float r,int h)
   {
      return (1.0/3.0)*3.14*r*r*h;
   }
   int volume(float r)
   {
      return (4.0/3.0)*3.14*r*r;
   }
};
int main()
{
  float r,h;
  find ob;
  clrscr();
  cout<<"\n Enter Radius Of Cylinder : ";
  cin>>r;
  cout<<"\n Enter Height Of Cylinder : ";
  cin>>h;
  cout<<"\n Enter Radius Of Cone : ";
  cin>>r;
  cout<<"\n Enter Radius Of cone : ";
  cin>>h;
  cout<<"\n Enter Radius Of Sphere : ";
  cin>>r;
  cout<<"\n\n Volume Of Cylinder : "<<ob.volume(r,h);
  cout<<"\n\n Volume Of Cone : "<<ob.volume(r,h);
  cout<<"\n\n Volume Of Sphere : "<<ob.volume(r);
  getch();
}




