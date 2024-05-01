#include <iostream>
using namespace std;

class Demo {
public:
    int replace(char s1[], char x, char y) 
	{
        int cnt = 0, i;
        for (i = 0; s1[i] != '\0'; i++) 
		{
            if (s1[i] == x) 
			{
                s1[i] = y; 
                cnt++;
            }
        }
        cout << "\nReplaced string = " << s1 << endl; 
        return cnt;
    }
};

int main() 
{
    Demo ob;
    char str[100];
    char x, y;
    cout<<"Enter String : ";
    cin>>str;
    cout<<"Replace : ";
    cin>>x;
     cout<<"Replacement : ";
    cin>>y;
    int count = ob.replace(str, x, y);
    cout << "Number of replacements = " << count << endl;
    return 0;
}

