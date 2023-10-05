#include <iostream>
#include <cmath>
#include "Point.hpp"
#include "Cylinder.hpp"

using namespace std;

int main()
{
    double x1, y1, x2, y2, h;

    // ввод данных
    cout << "Введите координаты X и Y центра основания: ";
    cin >> x1 >> y1;

    cout << "Введите координаты X и Y точки на окружности: ";
    cin >> x2 >> y2;

    cout << "Введите высоту цилиндра: ";
    cin >> h;

    // создание объекта
    Point center(x1, y1);
    Point circlePoint(x2, y2);
    Cylinder cyl(center, circlePoint, h);

    // вывод данных
    cyl.print();

    // проверка методов
    cout << "Площадь основания: " << cyl.getBaseArea() << endl;
    cout << "Длина окружности основания: " << cyl.getBasePerimeter() << endl;
    cout << "Объем цилиндра: " << cyl.getVolume() << endl;
    cout << "Площадь боковой поверхности: " << cyl.getLateralSurfaceArea() << endl;

    return 0;
}