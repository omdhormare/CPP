#include<iostream>
using namespace std;

class MyArray {
private:
    int sum;
    int n,i;
    int *a;

public:
    MyArray() 
	{
        sum = 0;
        cout << "\nEnter Limit : ";
        cin >> n;
        a = new int[n];
        cout << "\nEnter  Numbers : ";
        for(i = 0; i < n; i++) 
		{
            cin >> a[i];
            sum += a[i];
        }
        cout << "\nSum Of Array Elements : " << sum;
    }

    ~MyArray() 
	{
        delete[] a;
    }
};

int main() 
{
    MyArray ob;
    return 0;
}

