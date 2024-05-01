#include<iostream>
#include<conio.h>

using namespace std;

class vector
{
public:
    int *a, *b, n, n1;
    vector(int a1, int b1)
    {
        n = a1;
        n1 = b1;
        a = new int[n];
        b = new int[n1];
    }
    vector(const vector &aa)
    {
        n = aa.n;
        n1 = aa.n1;
        a = new int[n];
        b = new int[n1];
        for (int i = 0; i < n; i++)
            a[i] = aa.a[i];
        for (int i = 0; i < n1; i++)
            b[i] = aa.b[i];
    }
    void accept()
    {
        cout << "Enter 1 Vector Limit : ";
        cin >> n;
        a = new int[n];
        cout << "\nEnter 1 Vector Number : ";
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << "Enter 2 Vector Limit : ";
        cin >> n1;
        b = new int[n1];
        cout << "\nEnter 2 Vector Number : ";
        for (int i = 0; i < n1; i++)
            cin >> b[i];
    }
    void dis()
    {
        cout << "\nDisplay 1 Vector Number : ";
        cout << "(";
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
            if (i != n - 1)
                cout << ",";
        }
        cout << ")";

        cout << "\nDisplay 2 Vector Number : ";
        cout << "(";
        for (int i = 0; i < n1; i++)
        {
            cout << b[i];
            if (i != n1 - 1)
                cout << ",";
        }
        cout << ")";
    }
    void union1()
    {
        cout << "\nUnion of Vector Numbers: ";
        for (int i = 0; i < n; i++)
        {
            int found = 0;
            for (int j = 0; j < n1; j++)
            {
                if (a[i] == b[j])
                {
                    found = 1;
                    break;
                }
            }
            if (!found)
                cout << a[i] << " ";
        }

        for (int i = 0; i < n1; i++)
        {
            int found = 0;
            for (int j = 0; j < n; j++)
            {
                if (b[i] == a[j])
                {
                    found = 1;
                    break;
                }
            }
            if (!found)
                cout << b[i] << " ";
        }
    }
};

int main()
{
    int a, a1;
    
    cout << "Enter sizes of vectors: ";
    cin >> a >> a1;
    vector ob(a, a1);
    vector ob1(ob);
   
    ob.accept();
    ob.dis();
    ob.union1();
   
    return 0;
}

