#include<iostream>
using namespace std;

class student 
{
public:
    int rno;
    char sname[20];

    void accept()
    {
        cout << "\n Enter Student Roll No : ";
        cin >> rno;
        cout << "\n Enter Student Name : ";
        cin >> sname;
    }
};

class theory
{
public:
    int M1, M2, M3, M4;

    void acceptT()
    {
        cout << "\n Enter M1 Mark : ";
        cin >> M1;
        cout << "\n Enter M2 Mark : ";
        cin >> M2;
        cout << "\n Enter M3 Mark : ";
        cin >> M3;
        cout << "\n Enter M4 Mark : ";
        cin >> M4;
    }
};

class practical
{
public:
    int p1, p2;

    void acceptP()
    {
        cout << "\n Enter P1 Mark : ";
        cin >> p1;
        cout << "\n Enter P2 Mark : ";
        cin >> p2;
    }
};

class result : public student, public theory, public practical
{
public:
    int total;
    float per;
    char grade;

    void cal()
    {
        total = M1 + M2 + M3 + M4 + p1 + p2;
        per = float(total) / 6;
    }

    void cal_grade()
	{
		if(per>=90)
		{
			cout<<"\n Grade : O";
		}
		else if(per>=85)
		{
			cout<<"\n Grade : A+";
		}
		else if(per>=70)
		{
			cout<<"\n Grade : A";
		}
		else if(per>=50)
		{
			cout<<"\n Grade : B+";
		}
		else if(per>=40)
		{
			cout<<"\n Grade : PASS";
		}
		else 
		{
			cout<<"\n Grade : Fail";
		}
	}


    void dis()
    {
        cout << "\n Roll No : " << rno;
        cout << "\n Student Name :" << sname;
        cout << "\n Total Mark : " << total;
        cout << "\n Percentage : " << per;
    }
    void disS()
    {
    	 cout << "\n Roll No : " << rno;
        cout << "\n Student Name :" << sname;
	}
};

int main()
{
    int ch;
    result ob;

    do
    {
        cout << "\n .....MENU.....\n ";
        cout << "\n 1. Accept Student Information..";
        cout << "\n 2. Calculate Total _ marks, Percentage and Grade....";
        cout << "\n 3. Display Student Information...";
        cout << "\n\n ...............................................................................\n\n";
        cout << "\n Enter The Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            ob.accept();
            ob.acceptT();
            ob.acceptP();
            break;
        case 2:
            ob.cal();
            ob.cal_grade();
            ob.dis();
            break;
        case 3:
            ob.disS();
            break;
        }
    } while (ch < 4);

}

