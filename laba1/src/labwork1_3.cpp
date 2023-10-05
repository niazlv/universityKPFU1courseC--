#include <iostream>
using namespace std;

int main()
{
    double tC, tF, tK;

    cout << "Введите температуру в градусах Цельсия: ";
    cin >> tC;

    tF = 9.0 / 5.0 * tC + 32;
    tK = tC + 273.15;

    cout << tC << " градусов Цельсия = " << tF << " градусов Фаренгейта" << endl;
    cout << tC << " градусов Цельсия = " << tK << " градусов Кельвина" << endl;

    return 0;
}