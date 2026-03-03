#include <iostream>
using namespace std;

class Outer
{
    void fun()
    {
        i.display();
    }

public:
    class Inner
    {
    public:
        void display()
        {
            cout << "Display of Inner";
        }
    };
    Inner i;
};
int main()
{
    Outer::Inner i;

    return 0;
}