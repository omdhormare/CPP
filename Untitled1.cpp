 #include<iostream>
 using namespace std;
 void stat()
 {
    int m=0;
    static int n=0;
    m++;
    n++;
    cout<<m<<" "<<n<<"\n";
 }
 int main()
 {
    stat();
    stat();
 }
