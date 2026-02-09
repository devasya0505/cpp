#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};

    for (auto x : A)
    {
        cout << ++x << " ";
    }

    cout << "\nOriginal Array:(down)\n";

    for (auto x : A)
    {
        cout << x << " ";
    }

    return 0;
}