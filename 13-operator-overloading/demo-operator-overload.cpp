#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex x)
    {
        Complex temp;

        temp.real = real + x.real;
        temp.img = img + x.img;

        return temp;
    }

    void display()
    {
        cout << real << " + " << img << "i";
    }
};

int main()
{
    Complex c1(3, 5);
    Complex c2(5, 4);
    Complex c3;

    c3 = c1 + c2;

    cout << "Sum of complex numbers = ";
    c3.display();
    cout << endl;

    return 0;
}