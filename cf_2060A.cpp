#include <bits/stdc++.h>
using namespace std;

int fibo(int a, int b, int c, int d, int e)
{
    int count = 0;
    if (c == a + b)
        count++;
    if (d == b + c)
        count++;
    if (e == c + d)
        count++;
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, d, e;
        cin >> a >> b >> d >> e;
        int maximum = 0;
        for (int c = -100; c <= 100; c++)
        {
            int count = fibo(a, b, c, d, e);
            maximum = max(maximum, count);
        }
        cout << maximum << endl;
    }

    return 0;
}