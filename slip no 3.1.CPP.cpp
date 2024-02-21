#include<iostream>

using namespace std;

class Distance {

private:
    int meter;
    float centimeter;

public:
    void get() {
        cout << "Enter meter value: ";
        cin >> meter;
        cout << "Enter centimeter value: ";
        cin >> centimeter;
    }

    void put() {
        cout << "\t meter=" << meter;
        cout << "\t centimeter=" << centimeter;
    }

    Distance larger(Distance d1, Distance d2) 
	{
        if (d1.meter > d2.meter || (d1.meter == d2.meter && d1.centimeter > d2.centimeter))
            return d1;
        else
            return d2;
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter First distance\n";
    d1.get();

    cout << "Enter Second distance\n";
    d2.get();

    d3 = d3.larger(d1, d2);

    cout << "\nLarger Distance\n";
    d3.put();

    return 0;
}

