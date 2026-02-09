#include <iostream>
using namespace std;

int main()
{
    // int A[5]; //this will print garbage value, coz not initialized
    int A[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}