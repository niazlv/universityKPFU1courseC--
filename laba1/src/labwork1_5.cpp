#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r, L, S;
    cout << "Введите площадь S=";
    cin >> S;
    r = sqrt(S / M_PI);
    L = 2 * M_PI * r;

    cout << "Радиус r=" << r << endl;
    cout << "Длина окружности L=" << L << endl;
    return 0;
}