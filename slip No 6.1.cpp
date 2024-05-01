#include<iostream>
using namespace std;

class Rectangle; 

class Square 
{
public:
    int a;
    void acceptS() 
	{
        cout << "\n Enter number for Square : ";
        cin >> a;
    }
    friend void compareArea(Square sq, Rectangle rec);
};

class Rectangle 
{
public:
    int l, b;
    void acceptR() 
	{
        cout << "\n Enter Length : ";
        cin >> l;
        cout << "\n Enter Breadth: ";
        cin >> b;
    }
    friend void compareArea(Square sq, Rectangle rec);
};

void compareArea(Square sq, Rectangle rec) 
{
    int area_sq = sq.a * sq.a;
    int area_rec = rec.l * rec.b;

    cout << "\n Area of Square: " << area_sq;
    cout << "\n Area of Rectangle: " << area_rec;

    if (area_sq > area_rec)
        cout << "\n Square has larger area than Rectangle.";
    else if (area_sq < area_rec)
        cout << "\n Rectangle has larger area than Square.";
    else
        cout << "\n Square and Rectangle have equal area.";
}

int main() 
{
    Square sq;
    Rectangle rec;

    sq.acceptS();
    rec.acceptR();
    compareArea(sq, rec);

}

