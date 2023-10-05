#include <iostream>

using namespace std;

int main()
{
    double x, y, z;

    cout << "Введите стороны треугольника: ";
    cin >> x >> y >> z;

    // Проверка существования треугольника
    if (x + y <= z || x + z <= y || y + z <= x)
    {
        cout << "Треугольник не существует" << endl;
    }
    else
    {
        cout << "Треугольник существует" << endl;

        // Определение типа треугольника
        if (x == y && y == z)
        {
            cout << "Треугольник равносторонний" << endl;
        }
        else if (x == y || x == z || y == z)
        {
            cout << "Треугольник равнобедренный" << endl;
        }
        else
        {
            cout << "Треугольник разносторонний" << endl;
        }
    }

    return 0;
}