#include <iostream>
using namespace std;

int main()
{
    char s[20];

    cout << "enter your name: ";
    // cin >> s; //this will only read one string
    cin.get(s, 20); // this will read whole string including spaces
    // cin.getline(s, 20);

    cout << "welcome " << "\"" << s << "\"" << endl;
    return 0;
}