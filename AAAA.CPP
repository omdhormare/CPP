#include <iostream>
#include <iomanip>
#include <conio.h> // For getch() function
using namespace std;

int main() {
    int hh, mm, ss;

    cout << "Enter HH : ";
    cin >> hh;
    cout << "\nEnter MM : ";
    cin >> mm;
    cout << "\nEnter SS : ";
    cin >> ss;

    // Correct usage of setw and setfill
    cout << setw(2) << setfill('0') << hh << ":"
         << setw(2) << setfill('0') << mm << ":"
         << setw(2) << setfill('0') << ss;

    getch(); // Wait for a key press before exiting
    return 0;
}
