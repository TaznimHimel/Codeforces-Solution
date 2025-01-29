#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> v;
    stringstream ss(s);
    string token;
    while (getline(ss, token, '+'))
    {
        v.push_back(stoi(token));
    }
    sort(v.begin(), v.end());
    string sorted_str;
    for (int i = 0; i < v.size(); i++)
    {
        sorted_str += to_string(v[i]);
        if (i != v.size() - 1)
        {
            sorted_str += "+";
        }
    }
    cout << sorted_str << endl;
}

int main()
{
    solve();
    return 0;
}