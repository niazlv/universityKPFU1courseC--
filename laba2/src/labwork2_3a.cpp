#include <iostream>

using namespace std;

int main()
{
    double x;

    cout << "Введите x: ";
    cin >> x;

    double f = x <= -2 ? 0 : x <= 10              ? x * x + 4 * x + 5
                         : x * x + 4 * x - 5 == 0 ? 0
                                                  : 1 / (x * x + 4 * x - 5);

    if (f == 0)
    {
        cout << "Деление на ноль!";
    }
    else
    {
        cout << "f(x) = " << f << endl;
    }

    return 0;
}