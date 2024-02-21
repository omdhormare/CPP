 #include<iostream>
 using namespace std;
 
 class A
 {
 	public:
 		virtual void even_odd(int n)=0;
 		virtual void cube(int c)=0;
 };
 class B :public A
 {
 	public:
 		void even_odd(int n)
 		{
 		   if(n%2==0)
			{
				cout<<"Even No ";
			}	
			else
			cout<<"Odd No ";
		}
 };
 class C :public B
 {
 	public:
 		int d;
 		void cube(int c)
 		{
 		    d=c*c*c;
			 cout<<"\n Cube : "<<d;	
		}
 };
 int main()
 {
 	int c,n;
 	cout<<"\nEnter No For Check Even or Odd :";
 	cin>>n;
 	cout<<"\nEnter No For Check Cube :";
 	cin>>c;
 	
 	C ob;
 	ob.even_odd(n);
 	ob.cube(c);
 }
 
 
 
 
