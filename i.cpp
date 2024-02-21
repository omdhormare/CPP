#include<iostream>
using namespace std;
class point {
private:
int x ;
int y ;
public :
Point (int i, int j); // constructor
};
point : : point (int i = 0; int j = 0)
 {
x = i;
y = j;
cout << "constructor called" ;
}
int main ()
{
point + 1, * t2;
return 0;
}
//compile time error :
//error consctor always declare PUBLIC Section :
//and not object call pass actual parameter:
//and compiler confuse point+1
