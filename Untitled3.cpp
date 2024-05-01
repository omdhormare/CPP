#include<iostream>
#include<string> // For string operations if needed

using namespace std;

class student {
protected:
    int rno;
    char name[20];
public:
    void accept() {
        cout << "\nEnter Roll No: ";
        cin >> rno;
        cout << "Enter Student Name: ";
        cin >> name;
    }
    void dis() {
        cout << "\nRoll No: " << rno;
        cout << "\nName: " << name;
    }
};

class theory : virtual public student { // Note virtual inheritance
protected:
    int m1, m2, m3, m4;
public:
    void acceptt() {
        cout << "\nEnter M1 Mark: ";
        cin >> m1;
        cout << "Enter M2 Mark: ";
        cin >> m2;
        cout << "Enter M3 Mark: ";
        cin >> m3;
        cout << "Enter M4 Mark: ";
        cin >> m4;
    }
    void dist() {
        cout << "\nM1 Mark: " << m1;
        cout << "\nM2 Mark: " << m2;
        cout << "\nM3 Mark: " << m3;
        cout << "\nM4 Mark: " << m4;
    }
};

class practical : virtual public student { // Note virtual inheritance
protected:
    int p1, p2;
public:
    void acceptp() {
        cout << "\nEnter P1 Mark: ";
        cin >> p1;
        cout << "Enter P2 Mark: ";
        cin >> p2;
    }
    void disp() {
        cout << "\nP1 Mark: " << p1;
        cout << "\nP2 Mark: " << p2;
    }
};

class result : public theory, public practical {
public:
    void res() {
        int total_mark = m1 + m2 + m3 + m4 + p1 + p2;
        cout << "\nTotal Mark: " << total_mark;
        float per = total_mark / 100.0; // Correct calculation by using 100.0 for floating point division
        cout << "\nPercentage: " << per << "%";
        if(per > 90)
            cout << "\nGrade: O";
        else if(per > 80)
            cout << "\nGrade: A+";
        else if(per > 60)
            cout << "\nGrade: A";
        else if(per > 50)
            cout << "\nGrade: B";
        else if(per > 40)
            cout << "\nGrade: PASS";
        else
            cout << "\nGrade: FAIL"; // Corrected the logical issue here
    }
};

int main() {
    result ob;
    ob.accept();
    ob.dis();
    ob.acceptt();
    ob.dist();
    ob.acceptp();
    ob.disp();
    ob.res();
    return 0;
}

