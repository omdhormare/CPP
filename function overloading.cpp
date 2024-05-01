//function overloading in C++
#include<iostream>
using namespace std;
 void add(int a,int b)
 {
 	cout<<"\n Addition : "<<a+b;
 }
 void add(int a,int b)
 {
 	cout<<"\n Addition : "<<a+b;
 }

int main()
{
	add(10,20);
	add(30,40);
}
/* C++ program to find Volume using Function Overloading  */    

    #include<iostream>
    using namespace std;
    float vol(int,int);
    float vol(float);
    int vol(int);
     
    int main()
    {
        int r,h,a;
        float r1;
        cout<<"Enter radius and height of a cylinder:";
        cin>>r>>h;
        cout<<"Enter side of cube:";
        cin>>a;
        cout<<"Enter radius of sphere: ";
        cin>>r1;
        cout<<"Volume of cylinder is "<<vol(r,h);
        cout<<"\nVolume of cube is "<<vol(a);
        cout<<"\nVolume of sphere is "<<vol(r1);
        return 0;
    }
    float vol(int r,int h)
    {
        return(3.14*r*r*h);
    }
    float vol(float r1)
    {
        return((4*3.14*r1*r1*r1)/3);
    }
    int vol(int a)
    {
        return(a*a*a);
    }
