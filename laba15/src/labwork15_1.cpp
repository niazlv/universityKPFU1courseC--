#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace std;

void testPoint()
{
    Point p1(1, 2);
    Point p2(3, 4);

    p1.print();
    p2.print();

    cout << "Distance: " << p1.distanceTo(p2) << endl;
}

int main()
{
    testPoint();
    return 0;
}