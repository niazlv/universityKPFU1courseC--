#include <iostream>

void calc(double x, double y)
{
    std::cout << x + y << std::endl;
    std::cout << x - y << std::endl;
    std::cout << x * y << std::endl;
    if (y == 0)
    {
        std::cout << "Can't divide to zero";
        return;
    }
    std::cout << x / y;
}

int main()
{
    double x, y;
    std::cin >> x;
    std::cin >> y;
    calc(x, y);
    return 0;
}