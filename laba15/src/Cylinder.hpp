#ifndef __CYLINDER_HPP__
#define __CYLINDER_HPP__
#include "Point.hpp"
class Cylinder
{
protected:
    Point center;
    Point circlePoint;
    double height;

public:
    Cylinder(Point c, Point p, double h) : center(c), circlePoint(p), height(h) {}

    // геттеры и сеттеры
    virtual Point getCenter() const
    {
        return center;
    }

    virtual void setCenter(const Point &c)
    {
        center = c;
    }

    virtual Point getCirclePoint() const
    {
        return circlePoint;
    }

    virtual void setCirclePoint(const Point &p)
    {
        circlePoint = p;
    }

    virtual double getHeight() const
    {
        return height;
    }

    virtual void setHeight(double h)
    {
        height = h;
    }

    virtual double getBaseArea() const
    {
        return M_PI * circlePoint.distanceTo(center) * circlePoint.distanceTo(center);
    }

    virtual double getBasePerimeter() const
    {
        return 2 * M_PI * circlePoint.distanceTo(center);
    }

    virtual double getVolume() const
    {
        return getBaseArea() * height;
    }

    virtual double getLateralSurfaceArea() const
    {
        return 2 * M_PI * circlePoint.distanceTo(center) * height;
    }

    // функции ввода-вывода
    virtual void print() const
    {
        std::cout << "Цилиндр:" << std::endl;
        std::cout << "Центр основания: ";
        center.print();

        std::cout << "Точка на окружности основания: ";
        circlePoint.print();

        std::cout << "Высота: " << height << std::endl;
    }
};
#endif