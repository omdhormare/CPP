#include<conio.h>
#include<iostream.h>
class string
{
  public:
    int i;
    char s1[100],s2,s3;
    void accept(int cnt=0)
    {
      cout<<"\nEnter String : ";
      cin>>s1;
      cout<<"\nEnter Character To Change : ";
      cin>>s2;
      cout<<"\nEnter Charater To Replcement : ";
      cin>>s3;

      for(i=0;s1[i]!='0';i++)
      {
	if(s1[i]==s2)
	{
	    s1[i]=s3;
	    cnt++;
	}
      }
      cout<<"\n Update string : "<<s1;
      cout<<"\nNumber Of Replcement : "<<cnt;
    }
};
void main()
{
  string ob;
  clrscr();
  ob.accept();
  getch();
}





