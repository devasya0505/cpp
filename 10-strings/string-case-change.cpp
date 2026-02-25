#include <iostream>
using namespace std;

int main()
{
    string s1 = "hello world";

    for (int i = 0; s1[i] != '\0'; i++)
    {
        s1[i] = s1[i] - 32;
    }

    cout << s1 << endl;
    return 0;
}