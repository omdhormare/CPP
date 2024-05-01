#include<conio.h>
#include<iostream.h>

class matrix
{
public:
    int a[2][2], b[2][2];
    int i, j;

    matrix()
    {
        cout << "Enter 1st Matrix Elements: \n";
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }

        cout << "\nEnter 2nd Matrix Elements: \n";
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                cin >> b[i][j];
            }
        }
    }

    void dis()
    {
        cout << "\nDisplay 1st Matrix Elements: \n";
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        
        cout << "\nDisplay 2nd Matrix Elements: \n";
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << "\n";
        }
    }

    void transpose()
    {
        cout << "\nCalculate and Display Transpose Matrix Elements: \n";
        cout << "\n1st Matrix Transpose: \n";
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                cout << a[j][i] << " ";
            }
            cout << "\n";
        }
        
        cout << "\n2nd Matrix Transpose: \n";
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                cout << b[j][i] << " ";
            }
            cout << "\n";
        }
    }

    ~matrix()
    {
        cout << "\nMemory free...\n";
    }
};

int main()
{
    clrscr();
    matrix ob;
    ob.dis();
    ob.transpose();
    getch();
    return 0;
}
