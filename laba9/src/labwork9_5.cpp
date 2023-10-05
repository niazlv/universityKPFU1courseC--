#include <iostream>

int fact(int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
        res *= i;
    return res;
}

void formula(int n, int m)
{
    std::cout << double(fact(n) * fact(m)) / double(fact(n + m));
}

void likePow(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
        res *= x;
    std::cout << res;
}

int main()
{
    int choose, n, m, x;
    std::cin >> choose;
    if (choose == 1)
    {
        std::cin >> n;
        std::cout << fact(n);
    }
    if (choose == 2)
    {
        std::cin >> n;
        std::cin >> m;
        formula(n, m);
    }
    if (choose == 3)
    {
        std::cin >> x;
        std::cin >> n;
        likePow(x, n);
    }
    return 0;
}