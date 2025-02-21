#include <iostream>
using namespace std;

void lucky_number()
{
    string s;
    cin >> s;
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
        lucky_number();
    }
    return 0;
}