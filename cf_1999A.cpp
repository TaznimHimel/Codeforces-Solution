#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int sum = (n[0] - '0') + (n[1] - '0');
        cout << sum << endl;
    }
    return 0;
}