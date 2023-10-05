#ifndef __POINT_HPP__
#define __POINT_HPP__
#include <iostream>
class Point
{
private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0)
    {
        this->x = x;
        this->y = y;
    }

    double getX() const
    {
        return x;
    }

    double getY() const
    {
        return y;
    }

    void setX(double x)
    {
        this->x = x;
    }

    void setY(double y)
    {
        this->y = y;
    }

    void print() const
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    double distanceTo(const Point &other) const
    {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }
};
#endif