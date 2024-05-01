#include <iostream>
#include <fstream>
using namespace std;

class Movie {
public:
    char mname[20];
    char dname[20];
    int ryear, budget;

    // Function to accept details of a movie from user
    void accept() {
        cout << "\nEnter Movie Name: ";
        cin >> mname;
        cout << "Enter Director Name: ";
        cin >> dname;
        cout << "Enter Release Year: ";
        cin >> ryear;
        cout << "Enter Movie Budget: ";
        cin >> budget;
    }

    // Function to display movie details
    void display() {
        cout << "\nMovie Name: " << mname << endl;
        cout << "Director Name: " << dname << endl;
        cout << "Release Year: " << ryear << endl;
        cout << "Budget: " << budget << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of movies to insert: ";
    cin >> n;

    Movie movieObj;

    // Writing movie details to file
    ofstream outFile("movie.txt", ios::out | ios::app);
    if (!outFile) {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }

    cout << "\nEnter Movie Details:" << endl;
    for (int i = 0; i < n; i++) {
        movieObj.accept();
        outFile.write(reinterpret_cast<char *>(&movieObj), sizeof(movieObj));
    }
    outFile.close();
    cout << "\nFile successfully inserted data in Movie.txt." << endl;

    // Displaying movie details from file
    ifstream inFile("movie.txt", ios::in);
    if (!inFile) {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }

    cout << "\nMovie details from file:" << endl;
    while (inFile.read(reinterpret_cast<char *>(&movieObj), sizeof(movieObj))) {
        movieObj.display();
    }
    inFile.close();

    // Counting the number of objects stored in a file
    ifstream countFile("movie.txt", ios::in);
    if (!countFile) {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }

    int count = 0;
    while (countFile.read(reinterpret_cast<char *>(&movieObj), sizeof(movieObj))) {
        count++;
    }
    countFile.close();
    cout << "\nNumber of objects stored in the file: " << count << endl;

    return 0;
}

