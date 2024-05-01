#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std;
class myfile
{
    public:
        fstream f1,f2,f3;
        char ch;
         void accept()
         {
           f1.open("C:\\TurboC++\\Disk\\TurboC3\\Bin\\f1.txt", ios::in);
           f1.open("C:\\TurboC++\\Disk\\TurboC3\\Bin\\f2.txt", ios::in);
           f1.open("C:\\TurboC++\\Disk\\TurboC3\\Bin\\f3.txt", ios::out);

         }
         void operator+()
         {
            while(f1.get(ch))
            {
             f3.put(ch);
            }
             while(f2.get(ch))
            { 
             f3.put(ch);
            }
            f1.close();
            f2.close();
            f3.close();
         }
};
int main()
{
    myfile ob;
    ob.accept();
    +ob;
}

