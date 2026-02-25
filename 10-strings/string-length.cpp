#include <iostream>
using namespace std;

int main()
{
    string s1 = "hello world";
    int count = 0;

    // for (auto str : s1)
    // {
    //     count++;
    // }

    for (int i = 0; s1[i] != '\0'; i++)
    {
        count++;
    }

    cout << count;
    return 0;
}