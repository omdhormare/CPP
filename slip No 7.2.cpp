#include <iostream>
using namespace std;

class Vector 
{
public:
    int *a, *b; 
    int s, s2; 

  
    Vector(int n, int n1) 
	{
        s= n;
        s2= n1;
        a = new int[s]; 
        b = new int[s2];
    }


    void accept() 
	{
        cout << "Enter elements for Vector 1: ";
        for (int i = 0; i < s; i++) 
		{
            cin >> a[i];
        }
        cout << "Enter elements for Vector 2: ";
        for (int i = 0; i <s2; i++) 
		{
            cin >> b[i];
        }
    }
    void find()
    {
    	int j;
    	for()
	}
};

int main() 
{
    int n, n1;
    cout << "Enter Vector 1 size: ";
    cin >> n;
    cout << "Enter Vector 2 size: ";
    cin >> n1;

    Vector ob(n, n1); // Create a Vector object with sizes n and n1
    ob.accept();

    return 0;
}

