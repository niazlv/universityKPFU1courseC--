#include <iostream>

using namespace std;

int main()
{
    int num;
    int count = 0;
    int evenCount = 0;

    cout << "Введите целое число (0 для выхода): ";
    cin >> num;

    while (num != 0)
    {
        count++;
        if ((num & 1) == 0)
        {
            evenCount++;
        }

        cout << "Введите следующее целое число (0 для выхода): ";
        cin >> num;
    }

    cout << "Количество введенных чисел: " << count << endl;
    cout << "Количество четных чисел: " << evenCount << endl;

    return 0;
}