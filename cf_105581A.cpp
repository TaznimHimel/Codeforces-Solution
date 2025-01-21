#include <iostream>
using namespace std;

int main()
{
    int t, k, T;
    cin >> t >> k >> T;
    int scanned = 0;
    if (T % k == 0)
    {
        scanned = T / k;
    }
    else
    {
        scanned = T / k + 1;
    }
    cout << scanned << endl;
    return 0;
}