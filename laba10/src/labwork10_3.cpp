#include <iostream>

bool f(int x)
{
    double y;
    bool res = false;
    if (x <= 2)
    {
        y = ((2 * x) + (1 / (1 - x))) / (3 * x);
        res = true;
    }
    else if (x <= 5 && x > 2)
    {
        y = (72.0 / 7.0);
        res = true;
    }
    return res;
}

int main()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;
    int res = f(2) - f(0) * f(a);
    std::cout << res;
    return 0;
}
