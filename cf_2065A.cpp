#include <iostream>
using namespace std;

void solution()
{
    for (int i = 0; i < 10; i++)
    {
        string W;
        cin >> W;
        if (W.size() > 1)
        {
            cout << (W.substr(0, W.size() - 2) + 'i') << endl;
        }
        else
        {
            cout << W << endl; // Handle case where string length is less than 2
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}