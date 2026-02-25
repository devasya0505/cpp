#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char s[50] = "hello world";
    char s[20];

    cout << "enter a string: ";
    cin.getline(s, 20);

    cout << strlen(s) << endl;
    return 0;
}