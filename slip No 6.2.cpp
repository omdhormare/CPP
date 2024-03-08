/* Create a C++ class
class Matrix
{
int **p;
int r, Cc;
public:
//member functions
}s
Write necessary member functions to:
i. Accept Matrix elements
ii. Display Matrix elements.
ili. Calculate transpose of a Matrix.
(Use constructor and destructor)*/
#include <iostream>
using namespace std;

class Matrix
{
public:
    int i, j, a[2][2];

    Matrix()
    {
        cout << "Accept Matrix Elements: ";
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
        
    }

    void display()
    {
        cout << "Matrix Elements:" << endl;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    void transpose()
    {
        cout << "\n\n Transposed Matrix \n \n";
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                cout << a[j][i]<<" ";
            }
            cout << "\n";
        }
    }
       ~Matrix()
    {
        cout << "Memory Deleted...";
    }

};

int main()
{
    Matrix ob;
    ob.display();
    ob.transpose();
    return 0;
}

