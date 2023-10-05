#include <iostream>
#include <cmath>

const int N = 10;

void inputArray(double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "x" << i << " = ";
        std::cin >> arr[i];
    }
}

void calculateF(double x, double &y)
{
    if (x < -4)
    {
        y = ((x * x - 1 / x) / (3 * x)) * ((x + 3) / (1 + x));
    }
    else if (x >= -4 && x < 6 * M_PI)
    {
        y = ((x - 5) * (x - 5)) * pow(sin(2 * x), 2);
    }
}

void printPairs(double x[], double y[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "x" << i << " = " << x[i] << " y" << i << " = " << y[i] << std::endl;
    }
}

int countQuadrant1(double x[], double y[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] > 0 && y[i] > 0)
        {
            count++;
        }
    }
    return count;
}

void findMaxY(double x[], double y[], int n, double &maxY, double &maxX)
{
    maxY = y[0];
    maxX = x[0];
    for (int i = 1; i < n; i++)
    {
        if (y[i] > maxY)
        {
            maxY = y[i];
            maxX = x[i];
        }
    }
}

int main()
{
    double x[N], y[N];

    inputArray(x, N);

    for (int i = 0; i < N; i++)
    {
        calculateF(x[i], y[i]);
    }

    printPairs(x, y, N);

    int count = countQuadrant1(x, y, N);
    std::cout << "В 1-й четверти " << count << " точек" << std::endl;

    double maxY, maxX;
    findMaxY(x, y, N, maxY, maxX);
    std::cout << "Максимум y = " << maxY << " при x = " << maxX << std::endl;

    return 0;
}