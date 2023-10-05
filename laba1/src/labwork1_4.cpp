#include <iostream>

using namespace std;

const double PI = 3.14159;
int main()
{
    double r, V;

    cout << "Введите радиус шара: ";
    cin >> r;

    V = (4.0 / 3.0) * PI * r * r * r;

    cout << "Объем шара с радиусом " << r << " равен " << V << endl;

    return 0;
}