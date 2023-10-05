#include <iostream>

double calc(double x, double y)
{
    return (x + y) / 2;
}

double calc(double x, double y, double z)
{
    return (x + y + z) / 3;
}

double calc(double x, double y, double z, double j)
{
    return (x + y + z + j) / 4;
}

int main()
{
    double x, y, z, j;
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    std::cin >> j;
    return 0;
}