#include<iostream>
#include<iomanip>

using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    void acceptTime() {
        cout << "Enter Time (HH MM SS): ";
        cin >> hours >> minutes >> seconds;
    }

    void display() {
        cout << setfill('0');
        cout << setw(2) << hours << " : " << setw(2) << minutes << " : " << setw(2) << seconds;
    }
};

int main() {
    Time t;
    t.acceptTime();
    t.display();
    return 0;
}
