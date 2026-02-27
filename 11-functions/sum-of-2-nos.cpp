#include <iostream>
using namespace std;

int sumOfTwo(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int a = 10, b = 20, c;

    c = sumOfTwo(a, b);

    cout << c << endl;

    return 0;
}