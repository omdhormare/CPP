#include<conio.h>
#include<iostream.h>
class vector
{
   public:
    int i,n,*a,*b,n1;
    vector(int a,int b)
    {
	n=a;
	n1=b;
    }
    vector(vector &a)
    {
      a.a=new int[n];
      a.b=new int[n1];
    }
    void accept()
    {
       cout<<"\nEnter 1 Vector No : ";
       for(i=0;i<n;i++)
       cin>>a[i];
       cout<<"Enter 2 Vector No : ";
       for(i=0;i<n1;i++)
       cin>>b[i];
    }
    void dis()
    {
       cout<<"\n Display 1 Vector No :";
       cout<<"(";
       for(i=0;i<n;i++)
       {
	 cout<<a[i]<<",";
       }
       cout<<")";
       cout<<"\nDisplay 2 Vector No : ";
       cout<<"(";
       for(i=0;i<n1;i++)
       {
	  cout<<b[i]<<",";
       }
       cout<<")";
    }
    void union1()
    {
       int j,f=0;
       cout<<"\nUnion Of Number Two Vector: "<<"\n";
       for(i=0;i<n;i++)
       {
	 cout<<a[i]<<" ";
       }
       for(j=0;j<n1;j++)
       {
	 for(i=0;i<n;i++)
	 {
	   if(b[j]==a[i])
	   {
	     f=1;
	     break;
	   }
	 }
	 if(!f)
	 {
	  cout<<b[j]<<" ";
	 }
       }
    }
};

void main()
{
  int a,b;
  clrscr();
  cout<<"Enter 1 Vector Limit : ";
  cin>>a;
  cout<<"Enter 2 Vector Limit : ";
  cin>>b;
  vector ob(a,b);
  vector ob1(ob);
  ob.accept();
  ob.dis();
  ob.union1();
  getch();
}






