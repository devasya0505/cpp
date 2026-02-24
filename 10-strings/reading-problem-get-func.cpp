#include <iostream>
using namespace std;

int main()
{
    char s[20];

    cout << "enter your name: ";
    cin.get(s, 20); // this will read string
    cin.getline(s, 20);

    cout << "welcome " << "\"" << s << "\"" << endl;

    cin.ignore(); // this will solve the problem, coz it will read the fresh string, it will ignore characters after reading the first string

    cout << "enter your name again: ";
    cin.get(s, 20); // this will read "enter"

    cout << "welcome " << "\"" << s << "\"" << endl;
    return 0;
}