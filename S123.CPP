#include <iostream>
#include <string>
#include <cctype> // For islower and isupper functions

using namespace std;

int main() {
    char  s[100];
    cout << "Enter a string: ";
    cin >> s; // Read a word (if you want to read a line use getline(cin, s);)

    for (int i = 0; i < s.length(); i++) 
	{
        if (islower(s[i])) 
		{
            s[i] = toupper(s[i]); // Convert to uppercase if it's lowercase
        } 
		else if (isupper(s[i])) 
		{
            s[i] = tolower(s[i]); 
        }
    }

    cout << s << endl; // Print the modified string

    return 0;
}

