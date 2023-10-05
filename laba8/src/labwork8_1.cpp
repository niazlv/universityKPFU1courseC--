#include <iostream>

using namespace std;

int main()
{
    // п.1
    double x = 1.5;
    double y = 3.14159265358979323846;

    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "y = " << y << endl;
    cout << "&y = " << &y << endl;

    cout << "&y - &x = " << &y - &x << endl;
    cout << "sizeof(x) = " << sizeof(x) << endl;
    cout << "sizeof(y) = " << sizeof(y) << endl;

    // п.2
    double arr[5] = {1.5, 3.14159265358979323846, -1.5, 3.0, -2.3};

    cout << "arr[0] = " << arr[0] << endl;
    cout << "&arr[0] = " << &arr[0] << endl;

    cout << "arr[1] = " << arr[1] << endl;
    cout << "&arr[1] = " << &arr[1] << endl;

    cout << "arr[4] = " << arr[4] << endl;
    cout << "&arr[4] = " << &arr[4] << endl;

    cout << "&arr[1] - &arr[0] = " << &arr[1] - &arr[0] << endl;

    // п.3
    double *p1 = new double(x + y);
    double *p2 = new double(x - y);

    cout << "*p1 = " << *p1 << endl;
    cout << "p1 = " << p1 << endl;

    cout << "*p2 = " << *p2 << endl;
    cout << "p2 = " << p2 << endl;

    cout << "p2 - p1 = " << p2 - p1 << endl;

    delete p1;
    delete p2;

    return 0;
}