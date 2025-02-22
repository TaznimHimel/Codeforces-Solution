#include <iostream>
using namespace std;

void wrong_subtraction(int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
    }
    cout << n << endl;
}
int main()
{
    int n, k;
    cin >> n >> k;
    wrong_subtraction(n, k);
    return 0;
}