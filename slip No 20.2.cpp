#include<iostream>
using namespace std;
class inventory
{
   int mno,price,stock; //mno=mobile no , price= mobile price , stock=stock of mobile
   char com[10]; //com= company name
   public:
   void check();
   void accept();
   void dis();
   void sale(int);
   void pur();
   void menu();
};
void inventory::check()
{
	cout<<"\navalilability of "<<com<<" mobile phones: "<<stock<<endl;
}
void inventory::accept()
{
   stock=0;
   cout<<"\nEnter mobile no: ";
   cin>>mno;
   cout<<"\nEnter mobile price: ";
   cin>>price;
   cout<<"\nEnter company name: ";
   cin>>com;
   cout<<"\nEnter stock:" ;
   cin>>stock;
}
void inventory::dis()
{
      cout<<"\nmobile details:"<<endl;
      cout<<"\nmobile no: "<<mno;
      cout<<"\nmobile price: "<<price;
      cout<<"\nmobile company name: "<<com;
      cout<<"\nno of stock: "<<stock;
}
void inventory::sale(int p)
{
   int q;
   if(p==mno)
   {
       if(stock>=0)
       {
   		cout<<"\nno stock available"<<endl;
                pur();
  	}
         else
   	{
               cout<<"Enter quantity:";
               cin>>q;
               cout<<"\nThanks for purchasing";
               stock=stock-q;
 	}
   }
  else
              cout<<"\nMobile not available"<<endl;
}
void inventory::pur()
{
   cout<<"\nEnter mobile no: ";
   cin>>mno;
   cout<<"\nEnter mobile price: ";
   cin>>price;
   cout<<"\nEnter company name: ";
   cin>>com;
   cout<<"\nEnter stock:" ;
   cin>>stock;
}
int main()
{
   inventory in[2]; // object created
   int ch;
   int i,p;
   do
   {
	cout<<"\n1.accept \n2. display\n3.sale\n4.purchase\nenter a choice: ";
       cin>>ch;
       switch(ch)
       {
   	case 1:   for(i=0;i<2;i++)
   		     {
            	            in[i].accept();
                     }
                     break;
      case 2:    for(i=0;i<2;i++)
   		     {
            	            in[i].dis();
                     };break;
      case 3:    cout<<"Which mobile no would you like to purchase: ";
   		     cin>>p;
      		     for(i=0;i<2;i++)
   		     {
            	            in[i].check();
                      }
                       for(i=0;i<2;i++)
   		      {
            	            in[i].sale(p);
                      }break;
      case 4:
                       for(i=0;i<2;i++)
   		      {
            	            in[i].pur();
                      }
                       break;
          }
   }while(ch!=5);
   return(0);
}
