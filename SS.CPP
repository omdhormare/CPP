 
 #include<iostream>
 #include<fstream>
 using namespace std;
 class AA
 {
    public:
      int ryear,budget;
      char mname[20];
      char dname[20];
   void accept()
   {
     cout<<"Enter Movie Name : ";
     cin>>mname;
       cout<<"Enter Movie director Name : ";
     cin>>dname;
       cout<<"Enter Release year : ";
     cin>>ryear;
       cout<<"Enter Movie Buget : ";
     cin>>budget;
  }
 };
int main()
 {
 	int i,n;
 	AA ob[100];
 	cout<<"\nEnter Limit : ";
 	cin>>n;
 	for(i=0;i<n;i++)
 
   ob[i].accept();
   fstream s1;
   s1.open("AA.txt" ,ios::out);
   
   for(i=0;i<n;i++)
{
   
   s1<<"\n movie Name : "<<ob[i].mname;
   s1<<"\n Movie Director Name : "<<ob[i].dname;
   s1<<"\n Movie Release Year : "<<ob[i].ryear;
   s1<<"\n Movie movie budget : "<<ob[i].budget;
}
 }
 
 
