#include <iostream>
using namespace std;

int main()
{
    int a[10] = {23, 33, 35, 56, 67, 68, 70, 75, 80, 85}, l = 0, h = 9, key, mid;

    cout << "Enter Key: ";
    cin >> key;

    while (l <= h)
    {
        mid = ((l + h) / 2);

        if (key == a[mid])
        {
            cout << "found at " << mid;
            return 0;
        }
        else if (key > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    cout << "not found";

    return 0;
}