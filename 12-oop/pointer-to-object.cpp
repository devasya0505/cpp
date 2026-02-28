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
    // Rectangle r1;
    // Rectangle *ptr = new Rectangle(); //brackets are optional
    Rectangle *ptr = new Rectangle;

    // ptr = &r1;

    ptr->length = 10;
    ptr->bredth = 15;
    cout << "Area is: " << ptr->area() << endl;
    cout << "Perimeter is: " << ptr->perimeter();

    return 0;
}