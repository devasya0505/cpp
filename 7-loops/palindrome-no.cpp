#include <iostream>
using namespace std;

int main()
{
    int n, r, rev = 0, m;

    cout << "Enter N: ";
    cin >> n;
    m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    if (rev == m)
    {
        cout << "palindrome number";
    }
    else
    {
        cout << "not a palindrome number";
    }
    return 0;
}