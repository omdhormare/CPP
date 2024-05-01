#include <iostream>
using namespace std;

class Weight {
private:
    int kilogram;
    int gram;

public:
    // Constructor
    Weight(int kg = 0, int g = 0) : kilogram(kg), gram(g) {}

    // Function to accept weight
    void acceptWeight() {
        cout << "Enter weight in kilograms: ";
        cin >> kilogram;
        cout << "Enter weight in grams: ";
        cin >> gram;
    }

    // Function to display weight
    void displayWeight() {
        cout << "Weight: " << kilogram << " kilograms and " << gram << " grams" << endl;
    }

    // Overload += operator to add two weights
    Weight& operator+=(const Weight& w) {
        kilogram += w.kilogram;
        gram += w.gram;
        // Normalize the weight (1 kilogram = 1000 grams)
        if (gram >= 1000) {
            kilogram += gram / 1000;
            gram %= 1000;
        }
        return *this;
    }

    // Overload == operator to check equality of two weights
    bool operator==(const Weight& w) const {
        return (kilogram == w.kilogram && gram == w.gram);
    }
};

int main() {
    Weight w1, w2, sum;
    
    cout << "Enter details for first weight:" << endl;
    w1.acceptWeight();

    cout << "\nEnter details for second weight:" << endl;
    w2.acceptWeight();

    // Display weights
    cout << "\nDetails of first weight:" << endl;
    w1.displayWeight();

    cout << "\nDetails of second weight:" << endl;
    w2.displayWeight();

    // Add two weights
    sum = w1;
    sum += w2;
    cout << "\nSum of the two weights:" << endl;
    sum.displayWeight();

    // Check equality of weights
    if (w1 == w2)
        cout << "\nThe two weights are equal." << endl;
    else
        cout << "\nThe two weights are not equal." << endl;

    return 0;
}

