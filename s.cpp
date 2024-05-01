#include<iostream>
using namespace std;
class sales
{
char sname[20],pname[20];
int squantity,target;
float commission;
public:
void get()
{
cout<<"Enter salesman name:\t";
cin>>sname;
cout<<"\nEnter product name:\t";
cin>>pname;
cout<<"\nEnter sales quantity:\t";
cin>>squantity;
cout<<"\nEnter target:\t";
cin>>target;
}

void put()
{
cout<<"\nSalesman name:\t"<<sname;
cout<<"\nProduct name:\t"<<pname;
cout<<"\nSales quantity:\t"<<squantity;
cout<<"\nTarget:\t"<<target;
commission=0;
if(squantity>target)
{
commission=commission+((squantity-target)*0.25)+(target*0.10);
}
else if(target=squantity)
{
commission=commission+(target*0.10);
}
else
{
commission=0;
}
cout<<"\nCommission:\t"<<commission;
}

};
int main()
{
sales sman[10];
int i,n;
 cout<<"\n Enter how many Salesman : ";
 cin>>n;
for(i=0;i<n;i++)
{
sman[i].get();
}
for(i=0;i<n;i++)
{
    sman[i].put();
}

}
