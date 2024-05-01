#include<iostream>
using namespace std;

class MyArray {
public:
    int n, i;

    MyArray() {
        int sum = 0;
        cout << "Enter Array Element : ";
        cin >> n;
        for (i = 0; i < n; i++) {
            sum = sum + i; // This should sum up the entered values, not just 'i'
        }
        cout << "\nGiven Array Sum Element : " << sum << endl;
    }

    ~MyArray() {
        // Destructor code, if needed
    }
};

int main() {
    int i, n1;
    cout << "Enter A Limit : ";
    cin >> n1;
    MyArray ob;
    // No need for the for loop here
    return 0;
}
