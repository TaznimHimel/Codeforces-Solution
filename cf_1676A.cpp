#include <iostream>
using namespace std;

void solve()
{
    string s[6];
    cin >> s[0] >> s[1] >> s[2] >> s[3] >> s[4] >> s[5];
    if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}