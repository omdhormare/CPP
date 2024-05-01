#include<conio.h>
#include<iostream.h>
#include<string.h>
class inv
{
  public:
    int price,qut;
    char mc[10],color[20],model[10];
    void accept()
    {
      cout<<"\nEnter Model Name: ";
      cin>>model;
      cout<<"Enter mobile Price : ";
      cin>>price;
      cout<<"Enter Mobile Color : ";
      cin>>color;
      cout<<"Enter Mobile Quantity : ";
      cin>>qut;
    }
    void dis()
    {
      cout<<"\nModel Name : "<<model;
      cout<<"\nMobile Price : "<<price;
      cout<<"\nMobile color : "<<color;
    }
    void sale()
    {
       char sale[100];
      cout<<"\nEnter Sale Mobile Model Name: ";
      cin>>sale;
      if(strcmp(sale,model)==0)
    {
      int t=qut=qut-sale;
      cout<<"\nSale Of Mobile Model : "<<t;
    }
};
 void main()
 {
    int i,n;
    clrscr();
    inv ob[100];
    clrscr();
    cout<<"\nEnter Limit : ";
    cin>>n;
    for(i=0;i<n;i++)
    ob[i].accept();
    for(i=0;i<n;i++)
    ob[i].dis();
    for(i=0;i<n;i++)
    ob[i].sale();
    getch();
 }



