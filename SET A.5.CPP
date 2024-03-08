/*Write a C++ program to accept two integers and an arithmetic operator(+, -, *, /) from 
user and performs the corresponding arithmetic operation and display the result. (Use 
switch statement)
*/
#include<iostream>
using namespace std;
int main()
{
	int b,c,a,ch;
	cout<<"Enter Two No : ";
	cin>>a>>b;
	do{
	cout<<"\n select Choice : ";
	cout<<"\n----------------------------------------------------------------\n";
	cout<<"\nAddition (+)";
	cout<<"\nSubstraction (-) ";
	cout<<"\nMultiplication (*) ";
	cout<<"\nDivision (/) ";
	cout<<"\n----------------------------------------------------------------\n";
	cout<<"\n \n Enter Choice : ";
    cin>>ch;
     switch(ch)
     {
     	case 1: c=a+b;
     	        break;
     	case 2: c=a-b;
     	        break;
	    case 3: c=a*b;
     	        break;
		case 4: c=a/b;
     	        break;		 			         
	 }
	 cout<<"\n \n Result : "<<c;
}while(ch<5);
}
