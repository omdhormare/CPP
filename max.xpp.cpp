#include<iostream>
using namespace std;
class customer
{
	public:
		int cno,salary;
		char name[20];
		void accept()
		{
			cout<<"Enter cno,salary,name : ";
			cin>>cno>>salary>>name;
		}
		void dis()
		{
			cout<<"cno,salary,name : " cno<<salary<<name;
		}
		void max_sal(customer ob[],int i)
		{
			for(int i=0;i<n;i++)
			if(ob[i].salary>salary)
		}
};
int main()
{
	int i,n;
	customer ob[100];
	cout<<"entre Limit : "
	cin>>n;
	for(i=0;i<n;i++)
	ob.accept();
	for(i=0;i<n;i++)
	ob.dis();
	for(i=0;i<n;i++)
	ob.max_sal();
}



