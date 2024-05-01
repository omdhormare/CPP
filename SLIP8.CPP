#include<iostream>
using namespace std;

class matrix {
public:
    int a[2][2], i, j;
    matrix() {
        cout << "\nAccept Matrix Element : ";
        cout << "\nEnter Matrix Element : ";
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
    }
    void dis() {
        cout << "\nDisplay Matrix Element : \n";
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
    void transponse() {
        cout << "\nCalculate Transpose Matrix : \n";
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                cout << a[j][i] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    matrix ob;
    ob.dis();
    ob.transponse();
    return 0;
}
