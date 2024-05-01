#include <iostream>
using namespace std;

class Account {
    int Acc_number;
    string Acc_type;
    float Balance;

public:
    void acceptDetails() {
        cout << "Enter Account Number: ";
        cin >> Acc_number;
        cout << "Enter Account Type: ";
        cin >> Acc_type;
        cout << "Enter Balance: ";
        cin >> Balance;
    }

    void displayDetails() {
        cout << "Account Number: " << Acc_number << endl;
        cout << "Account Type: " << Acc_type << endl;
        cout << "Balance: " << Balance << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of accounts: ";
    cin >> n;

    // Dynamically allocate an array of Account objects
    Account *accounts = new Account[n];

    // Accept details for each account
    for (int i = 0; i < n; ++i) 
	{
        cout << "Enter details for account " << i + 1 << ":" << endl;
        accounts[i].acceptDetails();
    }


    cout << "\nDetails of all accounts:" << endl;
    for (int i = 0; i < n; ++i) 
	{
        cout << "\nAccount " << i + 1 << ":" << endl;
        accounts[i].displayDetails();
    }

}
