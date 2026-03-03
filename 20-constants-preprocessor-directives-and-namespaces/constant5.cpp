#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 10, y = 20;

    void display() const //constant functions can not modify the data members of the class
    {
        // x++; //cant modify only read
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d;
    d.display();

    return 0;
}