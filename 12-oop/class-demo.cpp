#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, bredth;

    int area()
    {
        return length * bredth;
    }

    int perimeter()
    {
        return 2 * (length * bredth);
    }
};

int main()
{
    Rectangle r1;
    r1.length = 10;
    r1.bredth = 5;
    cout << "Area of r1 is: " << r1.area() << endl;
    cout << "Perimeter of r1 is: " << r1.perimeter();

    return 0;
}