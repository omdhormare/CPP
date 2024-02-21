/* Create a C++ class Cuboid with data members length, breadth, and height. Write necessary member
functions for the following:
i. void setvalues(float,float,float) to set values of data members.
ii. void getvalues( ) to display values of data members.
iii. float volume( ) to calculate and return the volume of cuboid.
iv. float surface_area( ) to calculate and return the surface area of cuboid.
(Use Inline function)*/
#include<iostream>
using namespace std;
 
class Cuboid
{
    float length, breadth, height;
public:
    void setvalues(float l, float b, float h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    void getvalues()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Height: " << height << endl;
    }
    inline float volume()
    {
        return length * breadth * height;
    }
    inline float surface_area()
    {
        return 2 * (length * breadth + breadth * height + height * length);
    }
};

int main()
{
    Cuboid ob;
    float l, b, h;
    cout << "Enter length, breadth, and height: ";
    cin >> l >> b >> h;
    ob.setvalues(l, b, h);
    cout << "\nValues of Cuboid:" << endl;
    ob.getvalues();
    cout << "Volume of Cuboid: " << ob.volume() << endl;
    cout << "Surface Area of Cuboid: " << ob.surface_area() << endl;
    return 0;
}

