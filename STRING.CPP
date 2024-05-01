  #include<iostream.h>
  #include<conio.h>
  #include<string.h>
  int main()
  {
    char s1[20],s[20],sum[20];
    int d,n;
    cout<<"\n Enter The String : " ;
    cin>>s1;
    while(s1>0)
    {
       d=n%10;
       sum=d+(sum*10);
       n=n/10;
    }
    if(sum==s1)
    cout<<"String Palindrom : "<<sum;
    else
    cout<<"NOT palindrom : "<<sum;
    getch();
    return 0;
  }