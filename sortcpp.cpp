#include<iostream>
using namespace std;

int main() 
{
    int n, pass, i, temp, a[100];
    cout << "Enter Limit: ";
    cin >> n;
    cout << "\nEnter Numbers: ";
    for (i = 0; i < n; i++)
    cin >> a[i];

    for (pass = 0; pass < n - 1; pass++) 
	{ 
        for (i = 0; i < n - pass - 1; i++) 
		{ 
            if (a[i + 1] < a[i]) 
			{ 
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
    }

    cout << "\nAscending Order: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}

