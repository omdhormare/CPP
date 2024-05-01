 #include<iostream.h>
 #include<conio.h>
 inline cal_dia(float r)
 {
    return 2*r;
 }
 inline cal_circumfurance(float r)
 {
   return 2*3.14*r;
 }
 inline cal_area(float r)
 {
   return 3.14*r*r;
 }
 int main()
 {
    float r;
    clrscr();
    cout<<"Enter Circle Redius : ";
    cin>>r;
    cout<<"\n Dimeter : "<<cal_dia(r);
    cout<<"\n calculate circumfurance : "<<cal_circumfurance(r);
    cout<<"\n Area : " <<cal_area(r);
    getch();
    return 0;
 }







