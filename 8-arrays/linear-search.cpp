#include <iostream>
using namespace std;

int main()
{
    int A[5], key;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i << ": ";
        cin >> A[i];
    }

    cout << "\nEnter key to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (A[i] == key)
        {
            cout << "Element found at index " << i;
            return 0;
        }
    }
    cout << "Element NOT found";

    return 0;
}