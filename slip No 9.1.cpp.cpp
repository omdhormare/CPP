#include<iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Member function to accept a time
    void acceptTime() {
        std::cout << "Enter hours: ";
        std::cin >> hours;
        std::cout << "Enter minutes: ";
        std::cin >> minutes;
        std::cout << "Enter seconds: ";
        std::cin >> seconds;
    }

    // Member function to display a time in format hh:mm:ss
    void displayTime() {
        std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    // Member function to find the difference between two times
    void difference(const Time& t1, const Time& t2) {
        hours = t1.hours - t2.hours;
        minutes = t1.minutes - t2.minutes;
        seconds = t1.seconds - t2.seconds;
    }
};

int main() {
    Time time1, time2, timeDiff;

    // Accepting two times
    std::cout << "Enter the first time:\n";
    time1.acceptTime();

    std::cout << "\nEnter the second time:\n";
    time2.acceptTime();

    // Finding the difference between two times
    timeDiff.difference(time1, time2);

    // Displaying the entered times and the difference
    std::cout << "\nFirst time: ";
    time1.displayTime();

    std::cout << "Second time: ";
    time2.displayTime();

    std::cout << "Time difference: ";
    timeDiff.displayTime();

    return 0;
}

