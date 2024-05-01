#include<conio.h>
#include<iostream.h>
class weight
{
   public:
     int k,g;
     void accept()
     {
       cout<<"Enter Kilogram : ";
       cin>>k;
	cout<<"Enter Gram : ";
       cin>>g;
     }
     void dis()
     {
       cout<<"\n Display Kilogram And Gram format :";
       cout<<"\nKilogram : "<<k<<"Km";
       cout<<"\nGram : "<<g<<"Gm";
     }
     void operator +=(weight &ob1)
     {
	   int a=k+g+ob1.k+ob1.g;
	  cout<<"\n Add Two Weights : "<<a;
     }
     int operator==(weight &ob1)
     {
	return  k+g+ob1.k+ob1.g ;
     }
};
 void main()
 {
    clrscr();
    weight ob,ob1;
    ob.accept();
    ob1.accept();
    ob.dis();
    ob1.dis();
    ob+=ob1;
    if(ob==ob1)
    cout<<"\nEqual ..";
    else if(ob1==ob)
     cout<<"\nNot Equal";
    getch();
 }