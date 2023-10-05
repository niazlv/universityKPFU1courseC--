#include <iostream>
#include <cmath>

// #define M_PI 3.14159265358979323846

double f(double x)
{
    if (x < 0)
        return (7.0 / 3.0);
    if (x >= 0 && x < 2 * M_PI)
        return pow(x, 2) - 3;
    return 0;
}

void countNegativeDigits()
{
    double *a = new double[7];
    double max = -999999;
    int counter = 0;
    for (int i = 0; i < 7; i++)
    {
        std::cin >> a[i];
        a[i] = f(a[i]);
        if (a[i] < 0)
            counter++;
        if (a[i] > max)
            max = a[i];
    }
    std::cout << counter << std::endl
              << max;
}

int main()
{
    int choose;
    double a, b;
    std::cin >> choose;
    if (choose == 1)
    {
        std::cin >> a;
        std::cin >> b;
        std::cout << 12.5 + f(2) - f(4) * f(10) + f(a) - f(b) + f(a * b);
    }
    else if (choose == 2)
        countNegativeDigits();
    return 0;
}