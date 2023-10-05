#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // a) Цикл while
    int tC = 0;
    while (tC <= 100)
    {
        double tF = tC * 1.8 + 32;
        cout << tC << " C = " << tF << " F" << endl;
        tC += 10;
    }

    // b) Цикл do-while
    double x = 0;
    do
    {
        double y = log(x + 1) * sin(x);
        cout << "x = " << x << ", y = " << y << endl;
        x += 0.5;
    } while (x <= 5);

    // c) Цикл for
    double pi = 3.14159;
    for (double a = 0; a <= 2 * pi; a += pi / 6)
    {
        double y = sin(a) / cos(a);
        cout << "a = " << a << ", y = " << y << endl;
    }

    return 0;
}