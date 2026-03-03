#include <iostream>
using namespace std;

void fun(const int &x, int &y)
{
    cout << x << " " << y << endl;
    // x++; //not possible, coz parameter is constant
};

int main()
{
    int a = 10, b = 20;
    fun(a, b);
    cout << "main: " << a << " " << b << endl;
    return 0;
}