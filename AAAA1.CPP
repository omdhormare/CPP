#include <iostream>
#include <iomanip>
#include <conio.h> // For getch() function
using namespace std;

int main() {
    int hh, mm, ss;

    cout << "Enter HH : ";
    cin >> hh;
    while (hh < 0 || hh > 23) {
        cout << "Invalid input! Enter HH (0-23) : ";
        cin >> hh;
    }

    cout << "\nEnter MM : ";
    cin >> mm;
    while (mm < 0 || mm > 59) {
        cout << "Invalid input! Enter MM (0-59) : ";
        cin >> mm;
    }

    cout << "\nEnter SS : ";
    cin >> ss;
    while (ss < 0 || ss > 59) {
        cout << "Invalid input! Enter SS (0-59) : ";
        cin >> ss;
    }

    // Correct usage of setw and setfill
    cout << setw(2) << setfill('0') << hh << ":"
         << setw(2) << setfill('0') << mm << ":"
         << setw(2) << setfill('0') << ss;

    getch(); // Wait for a key press before exiting
    return 0;
}
