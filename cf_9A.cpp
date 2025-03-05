#include <iostream>
using namespace std;

void math()
{
    int a, b;
    cin >> a >> b;
    int max = a > b ? a : b;
    int count = 6 - max + 1;
    if (count == 6)
    {
        cout << "1/1";
    }
    else if (count == 5)
    {
        cout << "5/6";
    }
    else if (count == 4)
    {
        cout << "2/3";
    }
    else if (count == 3)
    {
        cout << "1/2";
    }
    else if (count == 2)
    {
        cout << "1/3";
    }
    else if (count == 1)
    {
        cout << "1/6";
    }
}

int main()
{
    math();
    return 0;
}