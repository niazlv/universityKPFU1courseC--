#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Введите число: ";
    cin >> num;

    // а) Определение знака
    if (num > 0)
    {
        cout << "Число положительное" << endl;
    }
    else if (num < 0)
    {
        cout << "Число отрицательное" << endl;
    }
    else
    {
        cout << "Это ноль" << endl;
    }

    // b) Определение четности
    if (num % 2 == 0)
    {
        cout << "Число четное" << endl;
    }
    else
    {
        cout << "Число нечетное" << endl;
    }

    return 0;
}