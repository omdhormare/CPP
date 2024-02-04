 /*Create a C++ class Student with data members Roll no, SName, Class, Percentage. Accept two
students information and display information of student having maximum percentage. (Use this
pointer*/
#include<iostream>
using namespace std;
class student 
{
	public:
		int rno;
		char sname[20];
		char sclass[30];
		float per;
	void accept_data()
	{
	   cout<<"\n Enter Roll No : ";
	   cin>>rno;	
	   cout<<" Enter Name : ";
	   cin>>sname;
	   cout<<"Enter class : ";
	   cin>>sclass;
	   cout<<"Enter percentage : ";
	   cin>>per;
	}	
	void dis()
	{
		cout<<"\n Roll No : "<<this->rno;
		cout<<"\n Name : "<<this->sname;
		cout<<"\n Class : "<<this->sclass;
		cout<<"\n per : "<<this->per;
	}
};
int main()
{
	student student1,student2;
	cout<<"\n Enter Student 1 Information : ";
	student1.accept_data();
	cout<<"\n Enter Student 2 Information : ";
	student2.accept_data();
	if(student1.per > student2.per)
	{
		cout<<"\n \n Maximum Student Per :\n ";
		student1.dis();
    }
	else
		student2.dis();
}
