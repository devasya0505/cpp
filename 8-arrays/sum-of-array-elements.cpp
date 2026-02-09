#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5}, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = A[i] + sum;
    }

    cout << "Sum: " << sum;

    return 0;
}