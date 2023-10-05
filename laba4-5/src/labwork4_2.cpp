#include <iostream>
#include <climits>

using namespace std;

int main()
{
    double numbers[7];

    // Ввод чисел
    cout << "Введите 7 чисел: ";
    for (int i = 0; i < 7; i++)
    {
        cin >> numbers[i];
    }

    // а) Количество отрицательных
    int negCount = 0;
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] < 0)
            negCount++;
    }

    // б) Сумма двузначных
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] >= 10 && numbers[i] < 100)
        {
            sum += numbers[i];
        }
    }

    // в) Наименьшее число
    double minNum = INT_MAX;
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] < minNum)
        {
            minNum = numbers[i];
        }
    }

    // Вывод результатов
    cout << "Количество отрицательных: " << negCount << endl;
    cout << "Сумма двузначных: " << sum << endl;
    cout << "Наименьшее число: " << minNum << endl;

    return 0;
}