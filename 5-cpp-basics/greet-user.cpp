#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "May i know your name: ";
    getline(cin, name); // cin >> name;

    cout << "Welcome " << name;

    return 0;
}
