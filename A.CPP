#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num, int denom) {
        numerator = num;
        denominator = denom;
    }

    // Function to add two fractions
    Fraction add(const Fraction& other) const {
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // Function to display the fraction
    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    // Create two fractions
    Fraction fraction1(2, 2);
    Fraction fraction2(3, 3);

    // Calculate the sum
    Fraction sum = fraction1.add(fraction2);

    // Display the sum
    cout << "Sum of fractions: ";
    sum.display();

    return 0;
}

