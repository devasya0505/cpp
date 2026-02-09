#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << "enter n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            cout << i << " ";
        }
    }

    cout << "\nsum of all factors is: " << sum;

    if (2 * n == sum)
    {
        cout << "\nperfect number";
    }
    else
    {
        cout << "\nnot a perfect number";
    }

    return 0;
}