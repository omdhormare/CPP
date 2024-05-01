#include<iostream.h>
#include<conio.h>

class number
{
private:
    static int cnt; // Move cnt to private section

public:
    static void dis()
    {
        cnt++;
        cout << "\n" << cnt;
    }
};

int number::cnt = 0; // Define cnt outside the class

int main()
{
    number ob, ob1;
    clrscr();
    ob.dis();
    ob1.dis();
    getch();
    return 0;
}
