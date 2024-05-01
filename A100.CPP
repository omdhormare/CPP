#include <iostream>
using namespace std;

class Matrix
{
public:
    int i, j, a[3][3];

    Matrix()
    {
        cout << "Accept Matrix Elements: ";
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void display()
    {
        cout << "Matrix Elements:" << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix ob;
    ob.display();
    return 0;
}
