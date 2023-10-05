#include <iostream>

double F(double t)
{
    return 9.0 / 5.0 * t + 32;
}

double K(double t)
{
    return t + 273;
}

double KF(double t)
{
    F(t);
    return K(t);
}

int main()
{
    double t1, t2;
    std::cin >> t1;
    std::cin >> t2;
    std::cout << F(t1) << std::endl
              << K(t2);
    return 0;
}