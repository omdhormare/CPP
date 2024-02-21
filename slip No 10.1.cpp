/*) Write a C++ program to create a class Account with data members Acc_number, Acc _type and Balance.
Write member functions to accept and display ‘n’ account details. (Use dynamic memory allocation)*/
 #include<iostream>
 using namespace std;
 class account
 {
 	public :
 	  int acc_number;
 	  char acc_type[30];
 	  float balance;
 	  void accept()
 	  {
 	    cout<<"Enter Account Number : ";
	     cin>>acc_number;
		cout<<"Enter Account Type : ";
		cin>>acc_type;
		cout<<"Enter Balance : ";
		cin>>balance;	
	  }
	  void dis()
	  {
	  	cout<<"\nAccount Number : "<<acc_number;
	  	cout<<"\nAccount Type : "<<acc_type;
	  	cout<<"\nAccount Balance : "<<balance;
	  }
 };
 
 int main()
 {
 	int n,i;
 	cout<<"Enter Limit : ";
 	cin>>n;
 	
 	account *a=new account[n];
 	for(i=0;i<n;i++)
 	{
 	  a[i].accept();
    }
    	cout<<"\n Display N Account Ditails : ";
 	for(i=0;i<n;i++)
 	{
 	  a[i].dis();
    }
 }
 
 
 
 
 
