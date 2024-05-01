#include<iostream>
using namespace std;

class customer {
public:
    int cno, salary;
    char name[20];
    
    void accept() {
        cout << "Enter cno, salary, name: ";
        cin >> cno >> salary >> name;
    }
    
    void dis() {
        cout << "\ncno, salary, name: " << cno << " " << salary << " " << name;
    }
};

int main() {
    int i, n, sal = 0;
    customer ob[100];
    
    cout << "Enter Limit: ";
    cin >> n;
    
    for (i = 0; i < n; i++)
        ob[i].accept();
    
    for (i = 0; i < n; i++)
        ob[i].dis();

    // Finding the maximum salary
    for (i = 0; i < n; i++) 
	{
        if (ob[i].salary > sal) 
		{
            sal = ob[i].salary;
        }
    }

    // Displaying customers with maximum salary
    for (i = 0; i < n; i++) 
	{
        if (ob[i].salary == sal) 
		{
            ob[i].dis();
        }
    }

    return 0;
}

