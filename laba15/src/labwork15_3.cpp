#include <iostream>
#include <cmath>
#include "TriangularPrism.hpp"

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, h;

    // Ввод координат 3 точек и высоты
    cout << "Введите координаты первой точки X и Y: ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки X и Y: ";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей точки X и Y: ";
    cin >> x3 >> y3;
    cout << "Введите высоту: ";
    cin >> h;

    // Создание объекта
    Point p1(x1, y1);
    Point p2(x2, y2);
    Point p3(x3, y3);
    TriangularPrism prism(p1, p2, p3, h);

    // Проверка методов
    cout << "Площадь основания: " << prism.getBaseArea() << endl;
    cout << "Периметр основания: " << prism.getBasePerimeter() << endl;
    cout << "Объем: " << prism.getVolume() << endl;
    cout << "Пл. боковой поверхности: " << prism.getLateralSurfaceArea() << endl;

    return 0;
}