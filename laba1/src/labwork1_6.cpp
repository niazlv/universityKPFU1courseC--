#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r, h, V, S;

    cout << "Введите радиус основания цилиндра: ";
    cin >> r;

    cout << "Введите высоту цилиндра: ";
    cin >> h;

    V = M_PI * r * r * h;
    S = 2 * M_PI * r * (r + h);

    cout << "Объем цилиндра: " << V << endl;
    cout << "Площадь поверхности цилиндра: " << S << endl;

    return 0;
}