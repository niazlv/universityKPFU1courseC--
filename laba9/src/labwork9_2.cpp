#include <iostream>
#include <cmath>

double calc(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double toFirstPoint(double x1, double y1)
{
    return sqrt(pow(x1, 2) + pow(y1, 2));
}

double toSecondPoint(double x2, double y2)
{
    return sqrt(pow(x2, 2) + pow(y2, 2));
}

double S(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2);
}

double quadrilateral(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double x4, y4;
    std::cin >> x4;
    std::cin >> y4;
    return (abs((x1 - x2) * (y1 + y2) + (x2 - x3) * (y2 + y3) + (x3 - x4) * (y3 + y4) + (x4 - x1) * (y4 + y1))) / 2;
}

int main()
{
    double x1, x2, y1, y2, x3, y3;
    int choose;
    std::cin >> choose;
    std::cin >> x1;
    std::cin >> y1;
    std::cin >> x2;
    std::cin >> y2;
    if (choose == 1)
        std::cout << calc(x1, y1, x2, y2);
    else if (choose == 2)
    {
        std::cout << toFirstPoint(x1, y1) << std::endl;
        std::cout << toSecondPoint(x2, y2);
    }
    else if (choose == 3)
    {
        std::cin >> x3;
        std::cin >> y3;
        std::cout << S(x1, y1, x2, y2, x3, y3);
    }
    else if (choose == 4)
    {
        std::cin >> x3;
        std::cin >> y3;
        std::cout << quadrilateral(x1, y1, x2, y2, x3, y3);
    }
    return 0;
}