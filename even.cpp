#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char *argv[]) {
    ofstream f1, f2;
    int n;
    
    f1.open("even.txt", ios::out);
    f2.open("odd.txt", ios::out);
    
    if (!f1 || !f2) {
        cerr << "Error opening file" << endl;
        return 1;
    }
    
    for(int i = 1; i < argc; i++) {
        n = atoi(argv[i]);
        if(n % 2 == 0)
            f1 << n << " ";
        else
            f2 << n << " ";
    }
    
    f1.close();
    f2.close();
    
    return 0;
}

