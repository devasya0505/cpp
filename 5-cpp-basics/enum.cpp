#include <iostream>
using namespace std;

enum day
{
    mon,
    tue,
    wed,
    thurs,
    fri,
    sat,
    sun
}; //these all are constants, can not modify

int main()
{
    day d;
    d = wed;

    cout << d << endl;

    return 0;
}