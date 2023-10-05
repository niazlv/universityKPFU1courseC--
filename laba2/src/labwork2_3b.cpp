#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "Введите x: ";
    cin >> x;

    double f;

    if (x <= -2)
    {
        f = 0;
    }
    else if (x <= 0)
    {
        f = x * x + 4 * x + 5;
    }
    else
    {
        if (x * x + 4 * x - 5 == 0)
        {
            cout << "Ошибка: деление на ноль" << endl;
            return 1;
        }
        f = 1 / (x * x + 4 * x - 5);
    }

    if (isnan(f))
    {
        cout << "Ошибка: получено не число" << endl;
    }
    else
    {
        cout << "f(x) = " << f << endl;
    }

    return 0;
}