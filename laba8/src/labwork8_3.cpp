#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    // 1. Создаем динамический массив
    double *arr = new double[n];

    // 2. Вводим элементы массива
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 3. Вычисляем сумму положительных элементов
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    cout << "Сумма положительных элементов: " << sum << endl;

    // 4. Находим индекс максимального элемента
    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[max_index])
        {
            max_index = i;
        }
    }
    cout << "Индекс максимального элемента: " << max_index << endl;

    // 5. Создаем новый массив
    double *new_arr = new double[n];

    // 6. Заполняем новый массив
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            new_arr[i] = arr[i] * 10;
        }
        else
        {
            new_arr[i] = arr[i] - 100;
        }
    }

    // 7. Вычисляем скалярное произведение
    double scalar_product = 0;
    for (int i = 0; i < n; i++)
    {
        scalar_product += arr[i] * new_arr[i];
    }
    cout << "Скалярное произведение: " << scalar_product << endl;

    // 8. Освобождаем память
    delete[] arr;
    delete[] new_arr;

    return 0;
}