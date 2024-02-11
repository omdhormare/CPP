/* Write a C++ program to create a class Date with data members day, month, and year. Use default and
parameterized constructor to initialize date and display date in dd-Mon-yyyy format. (Example: Input:
04-01-2021 Output: 04-Jan-2021)
*/
#include<iostream>
using namespace std;

class date
{
	public:
		int day,month,year;
	date(int d,int m,int y)
	{
		day=d;
		month=m;
		year=y;
	}
	void dis()
	{
		  if(month==1)
		cout<<day<<"-jan-"<<year;
	     	else if(month==2)
		cout<<day<<"-Feb-"<<year;
			else if(month==3)
		cout<<day<<"-March-"<<year;
			else if(month==4)
		cout<<day<<"-April-"<<year;
			else if(month==5)
		cout<<day<<"-May-"<<year;
			else if(month==6)
		cout<<day<<"-June-"<<year;
			else if(month==7)
		cout<<day<<"-July-"<<year;
			else if(month==8)
		cout<<day<<"-Aug-"<<year;
			else if(month==9)
		cout<<day<<"-Sept-"<<year;
			else if(month==10)
		cout<<day<<"-Oct-"<<year;
			else if(month==11)
		cout<<day<<"-Nov-"<<year;
			else if(month==12)
		cout<<day<<"-Dec-"<<year;
		else
		    cout<<"Invalid .....";
	}
};
int main()
{
	int day,month,year;
	cout<<"Enter Day : ";
	cin>>day;
	
	cout<<"Enter Month : ";
	cin>>month;
	
	cout<<"Enter Year: ";
	cin>>year;
	
	date ob(day,month,year);
	ob.dis();
}

