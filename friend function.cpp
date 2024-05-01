#include<iostream>
using namespace std;

class sub; // Forward declaration of class sub

class add 
{
    int a, b;
public:
    void accept() 
	{
        cout << "Enter Two Numbers for Addition: ";
        cin >> a >> b;
    }
  
    friend void sub_display(add, sub); // Declaration of friend function
};

class sub 
{
    int a, b;
public:
    void acceptS() 
	{
        cout << "Enter Two Numbers for Subtraction: ";
        cin >> a >> b;
    }
    friend void sub_display(add, sub); // Declaration of friend function
};

// Definition of friend function
void sub_display(add obj_add, sub obj_sub) 
{
    cout << "\nNumbers from Addition: " << obj_add.a + obj_add.b;
    cout << "\nNumbers from Subtraction: " << obj_sub.a - obj_sub.b;
}

int main() 
{
    add ob;
    sub ob1;
    ob.accept();
    ob1.acceptS();
    sub_display(ob, ob1); // Calling friend function
}

