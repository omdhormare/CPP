#include<iostream>
#include<string.h>
using namespace std;

class Travels {
public:
    int tno;
    char cname[30];
    void accept() {
        cout << "\nEnter T_No : ";
        cin >> tno;
        cout << "Enter Company Name : ";
        cin >> cname;
    }
};

class Route : public Travels {
public:
    int rid;
    char source[30];
    char destination[20];
    void acceptR() {
        cout << "\nEnter Route Id : ";
        cin >> rid;
        cout << "Enter Source : ";
        cin >> source;
        cout << "Enter Destination : ";
        cin >> destination;
    }
};

class Reservation : public Route {
public:
    int no_of_seat;
    int dd, mm, yyyy;
    void acceptRE() {
        cout << "\nEnter No Of Seat : ";
        cin >> no_of_seat;
        cout << "Enter Travel date(dd-mm-yyyy) : ";
        cin >> dd >> mm >> yyyy;
    }
    void dis() {
        cout << "\nTravels No: " << tno;
        cout << "\nCompany Name: " << cname;
        cout << "\nRoute Id: " << rid;
        cout << "\nDestination: " << destination;
        cout << "\nNo Of Seats: " << no_of_seat;
        cout << "\nTravel Date: " << dd << "-" << mm << "-" << yyyy;
    }
    void date(int d, int m, int y) {
        if (dd == d && mm == m && yyyy == y) {
            cout << "\nTravels No: " << tno;
            cout << "\nCompany Name: " << cname;
            cout << "\nRoute Id: " << rid;
            cout << "\nDestination: " << destination;
            cout << "\nNo Of Seats: " << no_of_seat;
            cout << "\nTravel Date: " << dd << "-" << mm << "-" << yyyy;
        } else {
            cout << "\nNo reservations found for specified date.";
        }
    }
};

int main() {
    int i, n, ch, d, m, y;
    Reservation ob[100];
    do {
        cout << "\n\n1. Accept Details of N Reservations";
        cout << "\n2. Display All Reservations";
        cout << "\n3. Display Reservation Details Of Specific Date";
        cout << "\n4. Exit";
        cout << "\n--------------------------------------------";
        cout << "\nEnter Choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "\nEnter Limit: ";
                cin >> n;
                for (i = 0; i < n; i++) {
                    cout << "\nEnter Details for Reservation " << i + 1 << ":";
                    ob[i].accept();
                    ob[i].acceptR();
                    ob[i].acceptRE();
                }
                break;
            case 2:
                for (i = 0; i < n; i++)
                    ob[i].dis();
                break;
            case 3:
                cout << "\nEnter Date (dd mm yyyy): ";
                cin >> d >> m >> y;
                for (i = 0; i < n; i++)
                    ob[i].date(d, m, y);
                break;
            case 4:
                cout << "\nExiting...";
                break;
            default:
                cout << "\nInvalid choice! Please enter a valid option.";
        }
    } while (ch != 4);

    return 0;
}


