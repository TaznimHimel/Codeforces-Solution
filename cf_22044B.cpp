#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        string a, b = ""; // Input string and resulting string
        cin >> a;

        // Iterate from right to left of string a
        for (int i = a.length() - 1; i >= 0; i--)
        {
            if (a[i] == 'p')
                b += 'q';
            else if (a[i] == 'q')
                b += 'p';
            else if (a[i] == 'w')
                b += 'w';
        }

        // Output the result
        cout << b << endl;
    }

    return 0;
}
