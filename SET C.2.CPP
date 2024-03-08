#include <iostream>
using namespace std;

double calc_sum(int n) 
{
   int i;
   double sum = 0, fact=1;
   for (i = 1; i <= n; i++)
   fact = fact * i;
   sum += i/fact;
   return sum;
}
int main() 
{
   int n ;
   double res;
   cout<<"\n Enter Series : ";
   cin>>n;
   calc_sum(n);
   cout << res << endl;
   return 0;
}
