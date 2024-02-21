#include<iostream>
using namespace std;

class Employee {
public:
    int emp_code;
    string name;
    int salary;

    void accept() 
	{
        cout << "\n \nEnter employee code and name: ";
        cin >> emp_code >> name;
    }
};

class Fulltime : public Employee 
{
public:
    int daily_wages;
    int num_of_days;

    void accept_fulltime()
	 {
        cout << "\n Enter daily wages and number of days: ";
        cin >> daily_wages >> num_of_days;
    }

    void calculate_salary()
	 {
        salary = daily_wages * num_of_days;
    }

    void display_fulltime() {
        cout << "\nEmployee code: " << emp_code;
        cout << "\nEmployee name: " << name;
        cout << "\nDaily wages: " << daily_wages;
        cout << "\nNumber of days: " << num_of_days;
        cout << "\nSalary: " << salary;
    }
};

class Parttime : public Employee {
public:
    int num_of_hours;
    int hourly_wages;

    void accept_parttime() 
	{
        cout << "\n Enter number of hours and hourly wages: ";
        cin >> num_of_hours >> hourly_wages;
    }

    void calculate_salary() 
	{
        salary = num_of_hours * hourly_wages;
    }

    void display_parttime() 
	{
        cout << "\nEmployee code: " << emp_code;
        cout << "\nEmployee name: " << name;
        cout << "\nNumber of hours: " << num_of_hours;
        cout << "\nHourly wages: " << hourly_wages;
        cout << "\nSalary:\n \n  " << salary;
    }
};

int main() 
{
    Fulltime fulltimeEmployees[5];
    Parttime parttimeEmployees[5];
    int n, choice, max_salary, max_salary_index;

    cout << "\nEnter the number of employees: ";
    cin >> n;

    do {
        cout << "\nEnter choice:\n1 Fulltime\n2 Parttime\n3 Display fulltime employee with maximum salary\n4 Display parttime employee with maximum salary\n\n";
        cin >> choice;

        switch(choice) 
		{
            case 1:
                for(int i = 0; i < n; i++) 
				{
                    fulltimeEmployees[i].accept();
                    fulltimeEmployees[i].accept_fulltime();
                    fulltimeEmployees[i].calculate_salary();
                    fulltimeEmployees[i].display_fulltime();
                }
                break;

            case 2:
                for(int i = 0; i < n; i++) 
				{
                    parttimeEmployees[i].accept();
                    parttimeEmployees[i].accept_parttime();
                    parttimeEmployees[i].calculate_salary();
                    parttimeEmployees[i].display_parttime();
                }
                break;

            case 3:
                max_salary = fulltimeEmployees[0].salary;
                max_salary_index = 0;
                for(int i = 1; i < n; i++) 
				{
                    if(fulltimeEmployees[i].salary > max_salary) 
					{
                        max_salary = fulltimeEmployees[i].salary;
                        max_salary_index = i;
                    }
                }
                fulltimeEmployees[max_salary_index].display_fulltime();
                break;

            case 4:
                max_salary = parttimeEmployees[0].salary;
                max_salary_index = 0;
                for(int i = 1; i < n; i++) 
				{
                    if(parttimeEmployees[i].salary > max_salary) 
					{
                        max_salary = parttimeEmployees[i].salary;
                        max_salary_index = i;
                    }
                }
                parttimeEmployees[max_salary_index].display_parttime();
                break;

        }
    } while(choice != 5);

}

