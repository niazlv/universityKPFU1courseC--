#ifndef __TRIANGULARPRISM_HPP__
#define __TRIANGULARPRISM_HPP__
#include "Cylinder.hpp"
class TriangularPrism : public Cylinder
{
protected:
    Point thirdPoint;

    double getTriangleArea(double a, double b, double c) const
    {
        // по формуле Герона
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

public:
    TriangularPrism(Point p1, Point p2, Point p3, double h)
        : Cylinder(p1, p2, h), thirdPoint(p3) {}

    double getBaseArea() const override
    {
        double a = center.distanceTo(circlePoint);
        double b = center.distanceTo(thirdPoint);
        double c = circlePoint.distanceTo(thirdPoint);
        return getTriangleArea(a, b, c);
    }

    double getBasePerimeter() const override
    {
        double a = center.distanceTo(circlePoint);
        double b = center.distanceTo(thirdPoint);
        double c = circlePoint.distanceTo(thirdPoint);
        return a + b + c;
    }

    // геттер и сеттер для thirdPoint
    // Геттер
    Point getThirdPoint() const
    {
        return thirdPoint;
    }

    // Сеттер
    void setThirdPoint(const Point &p)
    {
        thirdPoint = p;
    }

    // остальные методы унаследованы
};
#endif