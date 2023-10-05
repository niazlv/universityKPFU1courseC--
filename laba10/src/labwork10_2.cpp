#include <iostream>
#include <cmath>

void upperThanZero(double D, double b, double a)
{
    std::cout << (-b - sqrt(D)) / (2 * a) << std::endl;
    std::cout << (-b + sqrt(D)) / (2 * a);
}

void equalZero(double D, double b, double a)
{
    std::cout << -b / (2 * a);
}

void lowerThanZero()
{
    std::cout << "no roots";
}

int main()
{
    double a, b, c, D;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    D = b * b - 4 * a * c;
    if (D > 0)
        upperThanZero(D, b, a);
    else if (D == 0)
        equalZero(D, b, a);
    else
        lowerThanZero();
    return 0;
}