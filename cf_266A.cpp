#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}