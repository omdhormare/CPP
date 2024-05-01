#include<iostream>
#include<string.h>
using namespace std;

class mystring {
    char *pointer;
public:
    mystring() {
        pointer = new char[100];
    }

    void accept() {
        cout << "\nEnter String : ";
        cin >> pointer;
    }

    void operator!() {
        char *temp = new char[strlen(pointer) + 1];
        strcpy(temp, pointer);
        cout << "\nString Reverse : ";
        for (int i = strlen(temp) - 1; i >= 0; i--) {
            cout << temp[i];
        }
        delete[] temp;
    }

    void operator>() {
        char str[100];
        cout << "\nEnter 2nd string : ";
        cin >> str;
        if (strcmp(pointer, str) < 0)
            cout << "1st string is Less ";
        else
            cout << "2nd string is Less ";
    }

    void operator+() {
        char s[20];
        cout << "\nEnter Alphabet To add In string : ";
        cin >> s;
        strcat(pointer, s);
        cout << "After : " << pointer;
    }
};

int main() {
    mystring ob;
    ob.accept();
    ob > ();
    !ob;
    +ob;
    return 0;
}

