#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "YES" || s == "yes" || s == "Yes" || s == "yEs" || s == "yeS" || s == "YEs" || s == "YeS" || s == "yES" || s == "YeS" || s == "yES" || s == "YEs" || s == "YES")
        {
            cout << "YES" << endl;
        }
        else if (s == "NO")
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}