#include <iostream>
using namespace std;

class find 
{
public:
    float volume(float r, float h) 
	{
        return 3.14 * r * r * h;
    }
    float volume(float r, int h)
	 {
        return (1.0 / 3.0) * 3.14 * r * r * h;
    }
    float volume(float r) 
	{
        return (4.0 / 3.0) * 3.14 * r * r * r;
    }
}ob;

int main() 
{
	
    float r, h;
    cout << "\nEnter Radius Of Cylinder: ";
    cin >> r;
    cout << "\nEnter Height Of Cylinder: ";
    cin >> h;
    cout << "\nVolume Of Cylinder: " << ob.volume(r, h);

    cout << "\n\nEnter Radius Of Cone: ";
    cin >> r;
    cout << "\nEnter Height Of Cone: ";
    cin >> h;
    cout << "\nVolume Of Cone: " << ob.volume(r, h);

    cout << "\n\nEnter Radius Of Sphere: ";
    cin >> r;
    cout << "\nVolume Of Sphere: " << ob.volume(r) << endl;

}

