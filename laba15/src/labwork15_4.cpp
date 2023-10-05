#include <iostream>
#include <cmath>
#include "TriangularPrism.hpp"
#include "Point.hpp"

using namespace std;

const double EPS = 1e-6;

class QuadrilateralPrism : public TriangularPrism
{
private:
    Point fourthPoint;

public:
    QuadrilateralPrism(Point p1, Point p2, Point p3, Point p4, double h)
        : TriangularPrism(p1, p2, p3, h), fourthPoint(p4) {}

    Point getFourthPoint() const
    {
        return fourthPoint;
    }

    void setFourthPoint(const Point &p)
    {
        fourthPoint = p;
    }

    bool isParallelepiped() const
    {
        double a = center.distanceTo(circlePoint);
        double b = center.distanceTo(thirdPoint);
        double c = circlePoint.distanceTo(thirdPoint);
        double d = center.distanceTo(fourthPoint);

        return abs(a - b) < EPS && abs(b - c) < EPS && abs(c - d) < EPS;
    }

    bool isRectangular() const
    {
        double ab = center.distanceTo(circlePoint);
        double bc = circlePoint.distanceTo(thirdPoint);
        double cd = thirdPoint.distanceTo(fourthPoint);
        double ad = center.distanceTo(fourthPoint);

        return abs(ab - cd) < EPS && abs(bc - ad) < EPS;
    }

    bool isCube() const
    {
        double a = center.distanceTo(circlePoint);
        double b = center.distanceTo(thirdPoint);
        double c = circlePoint.distanceTo(thirdPoint);
        double d = center.distanceTo(fourthPoint);

        return abs(a - b) < EPS && abs(b - c) < EPS && abs(c - d) < EPS;
    }

    double getBaseArea() const override
    {
        double ab = center.distanceTo(circlePoint);
        double bc = circlePoint.distanceTo(thirdPoint);
        double cd = thirdPoint.distanceTo(fourthPoint);
        double ad = center.distanceTo(fourthPoint);

        double p = (ab + bc + cd + ad) / 2.0;
        return sqrt((p - ab) * (p - bc) * (p - cd) * (p - ad));
    }

    double getBasePerimeter() const override
    {
        double ab = center.distanceTo(circlePoint);
        double bc = circlePoint.distanceTo(thirdPoint);
        double cd = thirdPoint.distanceTo(fourthPoint);
        double ad = center.distanceTo(fourthPoint);

        return ab + bc + cd + ad;
    }
};

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4, h;

    // Ввод координат 4 точек и высоты
    cout << "Введите координаты 4 точек в формате X Y: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    cout << "Введите высоту: ";
    cin >> h;

    // Создание объекта
    Point p1(x1, y1);
    Point p2(x2, y2);
    Point p3(x3, y3);
    Point p4(x4, y4);

    QuadrilateralPrism quad(p1, p2, p3, p4, h);

    // Проверка свойств
    if (quad.isParallelepiped())
    {
        cout << "Это параллелепипед" << endl;
    }
    if (quad.isRectangular())
    {
        cout << "Это прямоугольный параллелепипед" << endl;
    }
    if (quad.isCube())
    {
        cout << "Это куб" << endl;
    }

    // Вывод параметров
    cout << "Площадь основания: " << quad.getBaseArea() << endl;
    cout << "Периметр основания: " << quad.getBasePerimeter() << endl;

    return 0;
}