#include<iostream.h>
#include<string.h>
//using namespace std;

class Person {
public:
    char name[30], city[30];
    long long mobile_number;
    int age;

    void accept() {
        cout << "\nEnter person Name, mobile Number, city, age: ";
        cin >> name >> mobile_number >> city >> age;
    }

    void display() {
        cout << "\nPerson Name: " << name << ", mobile Number: " << mobile_number << ", city: " << city << ", age: " << age;
    }

    void search(const char s[]) {
        if(strcmp(s, name) == 0) {
            cout << "\nMobile Number: " << mobile_number;
        }
        else {
            cout << "\nNot Found ...";
        }
    }

    void search(long long n) {
        if(mobile_number == n) {
            cout << "\nPerson Name: " << name;
        }
        else {
            cout << "\nNot Found";
        }
    }

    void search(char s[])
    {
        if(strcmp(city, s) == 0) {
            cout << "\nPerson Name: " << name;
            cout << "\nMobile Number: " << mobile_number;
            cout << "\nAge: " << age;
        }
        else {
            cout << "\nNot Found..";
        }
    }
};

int main() {
    int ch, n;
    char s[30];
    long long n1;
    Person ob[100]; // Assuming maximum 100 persons

    do {
	cout << "\n1. Accept Person Details";
	cout << "\n2. Display Person details";
	cout << "\n3. Search the mobile number of given person";
	cout << "\n4. Search the person name of given mobile number";
	cout << "\n5. Search all person details of given city.";
	cout << "\n6. Exit";
	cout << "\nEnter your choice: ";
	cin >> ch;

	switch(ch) {
	    case 1:
		cout << "\nEnter the number of persons: ";
		cin >> n;
		cout << "\nEnter person Details: ";
		for(int i = 0; i < n; i++) {
		    ob[i].accept();
		}
		break;

	    case 2:
		cout << "\nPerson Details: ";
		for(i = 0; i < n; i++) {
		    ob[i].display();
		}
		break;

	    case 3:
		cout << "\nEnter the person name to search mobile number: ";
		cin >> s;
		for(i = 0; i < n; i++) {
		    ob[i].search(s);
		}
		break;

            case 4:
                cout << "\nEnter the mobile number to search person name: ";
                cin >> n1;
		for(i = 0; i < n; i++) {
		    ob[i].search(n1);
		}
		break;

	    case 5:
		cout << "\nEnter the city to search person details: ";
		cin >> s;
		for(i = 0; i < n; i++) {
                    ob[i].search(s);
                }
                break;

            case 6:
                cout << "\nExiting...";
                break;

            default:
                cout << "\nInvalid choice!";
        }

    } while(ch != 6);

    return 0;
}

