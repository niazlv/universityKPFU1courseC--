#include <iostream>

using namespace std;

int main()
{
    double x, y;

    cout << "Введите координаты x и y: ";
    cin >> x >> y;

    if (x >= -2 && x <= 2 && y >= 0 && y <= 4)
    {
        cout << "Точка принадлежит заштрихованной области" << endl;
    }
    else
    {
        cout << "Точка не принадлежит заштрихованной области" << endl;
    }

    return 0;
}