#include <iostream>

using namespace std;

int main()
{
    double r, a, b, z, c;

    // Данные для торта
    cout << "Введите радиус торта: ";
    cin >> r;
    cout << "Введите стороны коробки: ";
    cin >> a >> b;
    cout << "Введите высоту торта: ";
    cin >> z;
    cout << "Введите высоту коробки: ";
    cin >> c;

    // Проверка для торта
    if (r <= a / 2 && r <= b / 2 && z <= c)
    {
        cout << "Торт уместится в коробке" << endl;
    }
    else
    {
        cout << "Торт не уместится в коробке" << endl;
    }

    double x, y, z2, a2, b2;

    // Данные для кирпича
    cout << "Введите ребра кирпича: ";
    cin >> x >> y >> z2;
    cout << "Введите стороны отверстия: ";
    cin >> a2 >> b2;

    // Проверка для кирпича
    if (x <= a2 && y <= b2 && z2 <= b2)
    {
        cout << "Кирпич пройдет в отверстии" << endl;
    }
    else
    {
        cout << "Кирпич не пройдет в отверстии" << endl;
    }

    return 0;
}