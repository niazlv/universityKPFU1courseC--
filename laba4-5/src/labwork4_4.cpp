#include <iostream>
#include <cmath>

using namespace std;

double calculate(double x, int n)
{
    if (n == 1)
    {
        return cos(x);
    }
    else
    {
        return cos(x + calculate(x, n - 1));
    }
}

int main()
{
    int n;
    double x;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите n: ";
    cin >> n;

    double result = calculate(x, n);

    cout << "Результат: " << result << endl;

    return 0;
}