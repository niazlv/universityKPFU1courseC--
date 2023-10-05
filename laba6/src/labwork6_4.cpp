#include <iostream>

int main()
{
    const int n = 10;
    int arr[n];

    std::cout << "Введите " << n << " элементов массива: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int w;
    std::cout << "Введите число w: ";
    std::cin >> w;

    std::cout << "Пары элементов, сумма которых равна " << w << ":" << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == w)
            {
                std::cout << arr[i] << " (индекс " << i << ") + "
                          << arr[j] << " (индекс " << j << ")" << std::endl;
            }
        }
    }

    return 0;
}