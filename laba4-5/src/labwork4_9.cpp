#include <iostream>

using namespace std;

int main()
{
    int num;
    int maxNum = 0;
    int countMax = 0;

    cout << "Введите последовательность целых чисел (0 для остановки): ";
    cin >> num;

    while (num != 0)
    {
        if (num > maxNum)
        {
            maxNum = num;
            countMax = 1;
        }
        else if (num == maxNum)
        {
            countMax++;
        }

        cin >> num;
    }

    cout << "Количество элементов, равных максимуму: " << countMax << endl;

    return 0;
}