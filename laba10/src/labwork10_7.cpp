#include <iostream>
#include <cmath>

void S(int a, int h)
{
    std::cout << (0.5 * a * h);
}

void S(int a, int b, double radian)
{
    std::cout << (0.5 * a * b * sin(radian));
}

void S(double a, double b, double c)
{
    double p = (a + b + c) / 2.0;
    std::cout << (sqrt(p * (p - a) * (p - b) * (p - c)));
}

int main()
{
    int a, h;
    std::cin >> a;
    std::cin >> h;
    S(a, h);
    return 0;
}
