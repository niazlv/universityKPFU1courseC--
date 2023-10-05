// c)
#include <iostream>
using namespace std;

int main()
{

    double a1, b1, a2, b2, a3, b3;

    cout << "Введите стороны прямоугольников:\n";

    cout << "Прямоугольник 1:\n";
    cout << "a1 = ";
    cin >> a1;
    cout << "b1 = ";
    cin >> b1;

    cout << "Прямоугольник 2:\n";
    cout << "a2 = ";
    cin >> a2;
    cout << "b2 = ";
    cin >> b2;

    cout << "Прямоугольник 3:\n";
    cout << "a3 = ";
    cin >> a3;
    cout << "b3 = ";
    cin >> b3;

    double s1 = a1 * b1;
    double s2 = a2 * b2;
    double s3 = a3 * b3;

    // Через if-else
    if (s1 > s2 && s1 > s3)
    {
        cout << "Максимальная площадь у 1-го: " << s1 << endl;
    }
    else if (s2 > s1 && s2 > s3)
    {
        cout << "Максимальная площадь у 2-го: " << s2 << endl;
    }
    else
    {
        cout << "Максимальная площадь у 3-го: " << s3 << endl;
    }

    // Через тернарный оператор
    cout << "Максимальная площадь: "
         << (s1 > s2 ? (s1 > s3 ? s1 : s3) : (s2 > s3 ? s2 : s3)) << endl;

    // Через функцию max
    cout << "Максимальная площадь: " << max(max(s1, s2), s3) << endl;

    return 0;
}