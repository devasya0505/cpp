#include <iostream>
using namespace std;

int main()
{
    // int *p = new int[5];
    // p[0] = 12;
    // p[1] = 13;

    // cout << p[1] << endl;

    // delete[] p;
    // p = nullptr;

    int size;
    cout << "Enter Number of Elements: ";
    cin >> size;
    // int A[size];
    int *A = new int[size];

    cout << size * sizeof(int) << endl;

    delete[] A;
    return 0;
}