#include<iostream>
using namespace std;

class student
{
	public:
		int rno;
		char sname[30];
		char sclass[40];
		void acceptS()
		{
			cout<<"\n Enter Roll No : ";
			cin>>rno;
			cout<<"\n Enter Name  : ";
			cin>>sname;
			cout<<"\n Enter Class: ";
			cin>>sclass;
		}
};
class exam
{
	public:
	float Big_data,Data_stucture,PHP,software_Engenering,digital_marketing,practical_Exam;
	void acceptM()
	{
	    cout<<"\n Enter Big data Mark :";
	    cin>>Big_data;
	    cout<<"\n Enter Data_stucture Mark :";
	    cin>>Data_stucture;
	    cout<<"\n Enter PHP Mark :";
	    cin>>PHP;
	    cout<<"\n Enter software_Engenering Mark :";
	    cin>>software_Engenering;
	    cout<<"\n Enter digital_marketing Mark :";
	    cin>>digital_marketing;
	    cout<<"\n Enter practical_Exam Mark :";
	    cin>>practical_Exam;
    }
};

class result:public student,public exam
{
	public:
		float per;
		int total;
	void calculate()
	{
		total=Big_data+Data_stucture+PHP+software_Engenering+digital_marketing+practical_Exam;
		per=total/6;
	}
	void dis()
	{
		cout<<"\n Total Mark : "<<total;
		cout<<"\n Per : "<<per;
	}
};

int main()
{
	result ob;
	ob.acceptS();
	ob.acceptM();
	ob.calculate();
	ob.dis();
}





