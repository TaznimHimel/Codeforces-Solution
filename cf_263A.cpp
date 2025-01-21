#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        cin >> i;
        for (j = i; j < 5; j++)
        {
            cin >> j;
            cout << i << " " << j << endl;
        }
    }
    return 0;
}