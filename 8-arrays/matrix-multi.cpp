#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10], r1, r2, c1, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Cant be Multiplied";
        return 0;
    }

    cout << endl
         << "Enter elements of matrix 1:" << endl;
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i << j << " : ";
            cin >> a[i][j];
        }
    }

    cout << endl
         << "Enter elements of matrix 2:" << endl;
    for (i = 0; i < r2; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i << j << " : ";
            cin >> b[i][j];
        }
    }

    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            c[i][j] = 0;
            for (k = 0; k < c1; ++k)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    cout << endl
         << "Output Matrix: " << endl;
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            cout << " " << c[i][j];
            if (j == c2 - 1)
                cout << endl;
        }
    }
    return 0;
}