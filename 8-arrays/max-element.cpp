#include <iostream>
using namespace std;

int main()
{
    int A[5] = {5, 23, 7, 234, 9}, max = A[0];

    for (auto x : A)
    {
        if (x > max)
        {
            max = x;
        }
    }

    cout << "Max: " << max;

    return 0;
}