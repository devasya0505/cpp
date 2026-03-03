#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    const int *const ptr = &x; //pointer constant to integer constant

    // ++ *ptr; //no, you can NOT change the value of x
    
    int y = 20;
    // ptr = &y; // not possible, because now pointer is also constant

    cout << *ptr << " " << x << endl;
    return 0;
}