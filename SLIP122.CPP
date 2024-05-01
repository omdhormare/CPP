 #include<conio.h>
 #include<iostream.h>
 class weight
 {
    public:
     int gram,kilogram;
     void accept()
     {
       cout<<"Enter Gram : ";
       cin>>gram;
       cout<<"\nEnter Kilogram : ";
       cin>>kilogram;
     }
     void dis()
     {
       //cout<<"\n Display In Weight Kilogram AND Gram Format \n";
       cout<<"\nWeight In Gram : "<<gram<<"gram";
       cout<<"\nWeight In kilogram : "<<kilogram<<"kilogram";
     }
      void operator +=(weight &a)
     {
	 gram+=a.gram;
	 kilogram+=a.kilogram;
     }
       int operator== (weight ob1)
     {
	  return(gram==ob1.gram) && (kilogram==ob1.kilogram);
     }
 };
 void main()
 {
   weight ob,ob1;
   clrscr();
   ob.accept();
   ob1.accept();
   ob.dis();
   ob+=ob1;
   cout<<"\n After Addtion : ";
   ob.dis();
   if(ob==ob1)
   cout<<"\n Equal ";
   else
   cout<<"\n Not Equal ";
  // ob.dis();
   getch();
 }

