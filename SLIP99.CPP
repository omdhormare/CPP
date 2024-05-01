#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

class Time {
public:
    int hours, minutes, seconds;

    void acceptTime()
    {
        cout << "Enter Time HH MM SS : ";
        cin >> hours >> minutes >> seconds;
    }

    void display()
    {
        cout << setfill('0') << setw(2);
        cout << hours << ":" << minutes << ":" << seconds;
    }
};

int main() {
    Time t;
    clrscr();
    t.acceptTime();
    t.display();
    getch();
    return 0;
}
