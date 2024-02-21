#include <iostream>
using namespace std;

class array
{
    public:
        int *a, i, n;

        void accept()
        {
            cout << "Enter Limit : ";
            cin >> n;
            a = new int[n]; // Initializing the member variable a
            cout << "Enter Number : ";
            for (i = 0; i < n; i++) // Changed the loop condition to avoid out-of-bounds access
                cin >> a[i];
            for (i = n - 1; i >= 0; i--) // Corrected the loop condition
                cout << a[i] << " ";
            cout << endl;
        }
};

int main()
{
    array ob; // Removed unnecessary parentheses
    ob.accept();
    return 0; // Added return statement
}

