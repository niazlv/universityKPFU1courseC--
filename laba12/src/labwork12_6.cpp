#include <iostream>
#include <cmath>
using namespace std;

int cnk(int n, int k)
{
    if (k > n / 2)
    {
        k = n - k;
    }

    if (k == 1)
    {
        return n;
    }

    if (k == 0)
    {
        return 1;
    }

    return cnk(n - 1, k) + cnk(n - 1, k - 1);
}

int main()
{
    int n = 5;
    int k = 5;

    cout << "n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;
    cout << cnk(n, k);

    return 0;
}