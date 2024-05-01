#include<iostream.h>
#include<conio.h>

class reverse
{
    int n; // Move 'n' to the class scope so that it can be used in both methods

public:
    void accept()
    {
        cout << "\n Enter The Number : ";
        cin >> n;
        cout << "\n Reverse Number : ";
    }

    void dis()
    {
        int d;
        while (n > 0)
        {
            d = n % 10;
            cout << d; // Output the digit instead of reading it from the user
            n = n / 10;
        }
    }
};

int main()
{
    reverse ob;
    clrscr();
    ob.accept();
    ob.dis();
    getch();
    return 0;
}
