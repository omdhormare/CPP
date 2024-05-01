#include<iostream>
using namespace std;

int main()
{
    int i, n;
    long long a = 0, b = 1, c;

    cout << "\nEnter The Number : ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for(i = 1; i <= n; i++)
    {
        cout << a << "\t";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

