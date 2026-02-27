#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c){
    if (a>b && a>c){
        cout<<a<<" is max";
    }
    else if (b>c)
    {
        cout<<b<<" is max";
    }
    else{
        cout<<c<<" is max";
    }
}
int main()
{
    maxOfThree(10, 200, 30);
    return 0;
}