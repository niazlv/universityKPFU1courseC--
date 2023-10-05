#include <iostream>

using namespace std;

int main()
{
    double x, y;

    cout << "Введите координаты x и y: ";
    cin >> x >> y;

    int points;

    if (x * x + y * y <= 4)
    {
        points = 10;
    }
    else if (x * x + y * y <= 16)
    {
        points = 5;
    }
    else if (x * x + y * y <= 36)
    {
        points = 2;
    }
    else
    {
        points = 0;
    }

    cout << "Выбито очков: " << points << endl;

    return 0;
}