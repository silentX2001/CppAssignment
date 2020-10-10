#include <iostream>
using namespace std;

int tes;

int& test();

int main()
{
    test() = 5;

    cout << tes;

    return 0;
}

int& test()
{
    return tes;
}
