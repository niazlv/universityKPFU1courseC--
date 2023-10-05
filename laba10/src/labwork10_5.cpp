#include <iostream>

void changeValue(double *x, double *y)
{
    double temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    double x, y;
    std::cin >> x;
    std::cin >> y;
    changeValue(&x, &y);
    std::cout << x << std::endl;
    std::cout << y;
    return 0;
}