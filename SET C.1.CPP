#include<iostream>
using namespace std;

 int main()
 {
 	int i,k,j;
 	for(i=1;i<=5;i++)
 	{
 	   for(j=5;j>=i;j--)
		{
			cout<<" ";
		}	
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
 }
