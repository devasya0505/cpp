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
};
int Test::count = 0; // global variable, but only accessible inside the class Test

int main()
{
    Test t1, t2;
    cout << t1.count << endl;
    cout << t2.count << endl;
    
    t1.count = 25;
    cout << t2.count << endl;
    cout << Test::count << endl;

    return 0;
}