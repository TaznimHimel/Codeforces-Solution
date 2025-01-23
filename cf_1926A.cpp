#include <iostream>
using namespace std;

// Function to solve the problem
void solve()
{
    string s;
    cin >> s;
    int count1 = 0;
    int count2 = 0;  // Count the number of A's and B's in the string
    for (char c : s) // Iterate through the string by converting it to a character array and iterating through it using a range-based for loop in C++
    {
        if (c == 'A') // If the character is A, increment count1
        {
            count1++;
        }
        else if (c == 'B') // If the character is B, increment count2
        {
            count2++;
        }
    }
    if (count1 > count2) // If count1 is greater than count2, print A
    {
        cout << "A\n";
    }
    else if (count2 > count1) // If count2 is greater than count1, print B
    {
        cout << "B\n";
    }
    // else
    // {
    //     cout << "Equal\n"; //If count1 and count2 are equal, print Equal
    // }
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