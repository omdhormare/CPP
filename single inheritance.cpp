#include<iostream>
using namespace std;

 class empaccept
{
     	public:
		 int eno,salary;
		 char ename[90];
		 void acceptE()
		{
		    cout<<"\nEnter Emp No : ";
			cin>>eno;
			cout<<"\nEnter Emp Name : ";
			cin>>ename;
			cout<<"\nEnter Emp Salary : ";
			cin>>salary;	
		}	
};
 class empdis : public empaccept
 {
 	public:
 		void dis()
 		{
 			cout<<"\nEmp No : "<<eno;
 			cout<<"\nEmp Name : "<<ename;
 			cout<<"\nEmp salary : "<<salary;
		}
 };
 int main()
 {
 	empdis A;
 	A.acceptE();
 	A.dis();
 }
 
 
 
 
 
 
 
 
