#include <iostream>
using namespace std;

void solution()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if (i % 4 == 1 && j == m - 1)
                {
                    cout << "#";
                }
                else if (i % 4 == 3 && j == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
}

int main()
{
    solution();
    return 0;
}