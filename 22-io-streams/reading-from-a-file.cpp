#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ifstream ifs("My.txt");
    ifstream ifs;
    ifs.open("My.txt");

    if(ifs) cout << "file is opened" << endl;
    string name;
    int roll;
    string branch;
    ifs >> name >> roll >> branch;
    ifs.close();

    cout << "name: " << name << endl;
    cout << "roll: " << roll << endl;
    cout << "branch: " << branch << endl;
}