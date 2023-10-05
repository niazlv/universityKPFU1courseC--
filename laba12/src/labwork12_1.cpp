#include <iostream>
using namespace std;

int a(int n, int max = -1)
{
    if (max == -1)
    {
        return a(1, n + 1);
    }

    if (n == max)
    {
        return 1;
    }

    cout << n << " (" << n * n << ") ";
    return a(n + 1, max);
}

int main()
{

    a(10);

    return 0;
}