#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 0, z;

    try
    {
        if (y == 0)
        {
            throw 1;
        }
        else
        {
            z = x / y;
            cout << z;
        }
    }
    catch (int e)
    {
        cout << "division by zero " << e << endl;
    }

    cout << "Bye" << endl; // this will always execute, whether there is exception or not

    return 0;
}