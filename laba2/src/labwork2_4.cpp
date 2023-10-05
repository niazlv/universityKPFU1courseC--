#include <iostream>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Введите 3 числа: ";
    cin >> a >> b >> c;

    // a) Сумма чисел больше 10
    double sum = 0;
    if (a > 10)
        sum += a;
    if (b > 10)
        sum += b;
    if (c > 10)
        sum += c;

    cout << "Сумма чисел больше 10: " << sum << endl;

    // b) Количество четных чисел
    int count = 0;
    if ((int)a % 2 == 0)
        count++;
    if ((int)b % 2 == 0)
        count++;
    if ((int)c % 2 == 0)
        count++;

    cout << "Четных чисел: " << count << endl;

    // c) Среднее число
    double mid;
    if (a > b)
    {
        if (b > c)
            mid = b;
        else if (a > c)
            mid = c;
        else
            mid = a;
    }
    else
    {
        if (a > c)
            mid = a;
        else if (b > c)
            mid = c;
        else
            mid = b;
    }

    cout << "Среднее число: " << mid << endl;

    // d) Номер наименьшего
    int minNum = 1;
    if (b < a && b < c)
        minNum = 2;
    if (c < a && c < b)
        minNum = 3;

    cout << "Наименьшее число имеет номер " << minNum << endl;

    return 0;
}