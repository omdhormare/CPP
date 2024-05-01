 #include<iostream.h>
 #include<conio.h>
 class student
 {
    public:
    int php,DSA,BD,SE,DM,PE;
    float total,per;
    void accept()
    {
       cout<<"\n STUDENT PERCENTAGE CALCULATE \n";
       cout<<"\n Enter PHP Mark : ";
       cin>>php;
       cout<<"\n Enter DSA Mark : ";
       cin>>DSA;
       cout<<"\n Enter Big data Mark : ";
       cin>>BD;
       cout<<"\n Enter SE Mark : ";
       cin>>SE;
       cout<<"\n Enter DM Mark : ";
       cin>>DM;
       cout<<"\n Enter PE Mark : ";
       cin>>PE;
    }
    void dis()
    {
       total=php+DSA+BD+SE+DM+PE;
       cout<<"\n Total Mark : "<<total;
       per=total/6;
       cout<<"\n \n Per :"<<per;
    }
 };

 int main()
 {
    student ob;
    clrscr();
    ob.accept();
    ob.dis();
    getch();
    return 0;
 }



