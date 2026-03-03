#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count;

    Test()
    {
        a = 10;
        count++;
    }

    static int getCount()
    {
        // a++; //static function can only acces static variable
        return count;
    }
};
int Test::count = 0; // global variable, but only accessible inside the class Test

int main()
{
    Test t1, t2;
    cout << Test::getCount() << endl;
    cout << t1.getCount() << endl;

    return 0;
}