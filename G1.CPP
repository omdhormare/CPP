#include<conio.h>
#include<iostream.h>
class date
{
    private:
      int d,m,y;
     date(int dd,int mm,int yy)
     {
	d=dd;
	m=mm;
	y=yy;
     }
     void dis()
     {
	if(m==1)
	cout<<d<<"-Jan-"<<y;

     }
};
void main()
{
  int dd,mm,yy;
  clrscr();
  cout<<"\nEnter Date & Month & Year : ";
  cin>>dd>>mm>>yy;

  date ob;
  ob.date(dd,mm,yy)
  ob.dis();
  getch();
}