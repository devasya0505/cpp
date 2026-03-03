#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    const int *ptr = &x; // pointer of type integer constant
    // int const *ptr = &x; // pointer to a constant integer

    // ++*ptr; //not possible

    int y = 20;
    ptr = &y; //yes, you can point it to other member, but you cant modify it

    cout << *ptr << " " << x << endl;
    return 0;
}