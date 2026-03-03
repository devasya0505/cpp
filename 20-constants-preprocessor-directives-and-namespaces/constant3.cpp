#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *const ptr = &x;

    ++ *ptr; //yes, you can change the value of x
    int y = 20;
    // ptr = &y; // not possible, because now pointer is also constant

    cout << *ptr << " " << x << endl;
    return 0;
}