#include <iostream>

double sum(double a, double b)
{
    return a + b;
}

double div(double a, double b)
{
    if (b == 0)
        throw std::range_error("?????? ?????? ?? ????");
    return (a / b);
}

double minus(double a, double b)
{
    return a - b;
}

double mult(double a, double b)
{
    return a * b;
}

int main()
{
    double a, b;
    std::cin >> a;
    std::cin >> b;
    std::cout << sum(mult(5, sum(minus(a, 2), b)), mult(1000, a));
    return 0;
}