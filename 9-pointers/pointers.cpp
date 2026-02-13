#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    int *p;
    p = &x;

    cout << "value of x: " << x << endl;
    cout << "address of x: " << int(&x) << endl;
    cout << "value of p: " << int(p) << endl;
    cout << "address of p: " << int(&p) << endl;
    cout << "derefrencing of *p: " << *p << endl;

    return 0;
}