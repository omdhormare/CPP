#include<conio.h>
#include<iostream.h>
#include<iomanip.h>

int main() {
    int hh, mm, ss;
    clrscr();
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
    
    getch();
    return 0;
}
