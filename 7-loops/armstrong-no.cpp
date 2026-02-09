#include <iostream>
using namespace std;

int main()
{
    int n, r, m, sum = 0;

    cout << "Enter N: ";
    cin >> n;
    m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }

    if (m == sum)
    {
        cout << m << " is an armstrong number";
    }
    else
    {
        cout << m << " is not an armstrong number";
    }

    return 0;
}