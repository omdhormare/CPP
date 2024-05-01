#include<conio.h>
#include<iostream.h>
#include<string.h>
class string
{
  public:
    char s1[100];
    void accept()
    {
      cout<<"Enter String : ";
      cin>>s1;
    }
    void dis()
    {
      cout<<"\n 1 String : "<<s1;
      cout<<"\n2 String : "<<s1;
    }
    void operator+(string s)
    {
      cout<<"Concat : "<<strcat(s1,s1);
    }
};
void main()
{
  string ob,ob1,ob2;
  clrscr();
  ob.accept();
  ob1.accept();
  ob.dis();
  ob2=ob+ob1;
  getch();
}



