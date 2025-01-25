#include <iostream>
using namespace std;
void solve()
{
    int n, m, a, b, count = 0;
    cin >> n >> m;
    for (a = 0; a <= 1000; a++)
    {
        for (b = 0; b <= 1000; b++)
        {
            if (a * a + b == n && a + b * b == m)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}

int main()
{
    solve();
    return 0;
}