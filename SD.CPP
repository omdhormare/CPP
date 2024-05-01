#include<iostream.h>
#include<fstream.h>
#include<ctype.h>
#include<conio.h>
// Removed #include<conio.h> as it's not standard and not needed for file operations.

//using namespace std;

class myfile {
public:
    fstream f1, f2, f3;
    char ch;

    void accept() {
	f1.open("f1.txt", ios::in);
	f2.open("f2.txt", ios::in);
	f3.open("f3.txt", ios::out);
    }

    void operator+() {
	while(f1.get(ch)) {
	    f3.put(ch);
	}
	while(f2.get(ch)) {
	    f3.put(ch);
	}
	f1.close();
	f2.close();
	f3.close();
    }

    void operator!() {
	// Assuming the intention was to read from the input files again,
	// they need to be reopened in read mode and the output file in write mode.
	f1.open("f1.txt", ios::in);
	f2.open("f2.txt", ios::in);
	f3.open("f3.txt", ios::out); // Appending to the file

	while(f1.get(ch)) {
	    if(islower(ch))
		f3.put(isupper(ch));
	}

	while(f2.get(ch)) {
	    if(islower(ch))
		f3.put(isupper(ch))
		;
	}

	f1.close();
	f2.close();
	f3.close();
    }
};

int main() {
    myfile ob;
    clrscr(); //as it's specific to certain compilers/environments and not standard.
    ob.accept();
    +ob; // Concatenate contents of f1.txt and f2.txt into f3.txt.
    !ob; // This operation was intended to manipulate the case of characters, but its logic needs clarification.

    getch(); //again, it's not standard C++ and generally used in specific environments.
    return 0;
}
