#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// User-defined manipulator
ostream& salaryFormat(ostream& os) {
    os << setfill('*') << setw(7) << right;
    return os;
}

class Employee {
private:
    int empId;
    string empName;
    string companyName;
    float salary;

public:
    // Constructor to initialize data members
    Employee() : empId(0), salary(0.0) {}

    // Function to accept employee data
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();  // Ignore newline after integer input
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Company Name: ";
        getline(cin, companyName);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display employee data
    void display() {
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Salary: " << salaryFormat << salary << endl;
    }
};

int main() {
    Employee emp;

    cout << "Enter employee details:\n";
    emp.accept();

    cout << "\nDisplaying Employee Details:\n";
    emp.display();

    return 0;
}

