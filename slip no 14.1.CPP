/*Write a C++ program to accept radius of a Circle. Calculate and display
 diameter, circumference as well as area of a Circle. (Use Inline function)*/

 #include<conio.h>
 #include<iostream>
 using namespace std;
 inline float cal_diameter(float r)
 {
    return 2*r;
 }
 inline float circumeference(float r)
 {
    return 2*3.14*r;
 }
 inline float area(float r)
 {
    return 3.14*r*r;
 }
 int main()
 {
    float r;
    //clrscr();
    cout<<"\n Enter Radius Of circle : ";
    cin>>r;
    cout<<"Diameter : "<<cal_diameter(r)<<endl;
    cout<<"Circumefrences of : "<<circumeference(r)<<endl;
    cout<<"Area Of circle : "<<area(r)<<endl;
    //getch();
 }






