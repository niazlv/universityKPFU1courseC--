#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Введите размер матрицы: ";
    cin >> n;

    // 1. Создание динамической матрицы
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }

    // 2. Ввод элементов матрицы
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // 3. Подсчет нулей в столбцах
    int *zero_count = new int[n];
    for (int j = 0; j < n; j++)
    {
        zero_count[j] = 0;
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] == 0)
            {
                zero_count[j]++;
            }
        }
    }

    // 4. Вывод количества нулей в столбцах
    cout << "Количество нулей в столбцах:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << zero_count[i] << " ";
    }
    cout << endl;

    // 5. Произведение диагональных элементов
    int diagonal_product = 1;
    for (int i = 0; i < n; i++)
    {
        diagonal_product *= matrix[i][i];
    }
    cout << "Произведение диагональных элементов: " << diagonal_product << endl;

    // 6. Подсчет положительных элементов над диагональю
    int positive_count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] > 0)
            {
                positive_count++;
            }
        }
    }
    cout << "Положительных элементов над диагональю: " << positive_count << endl;

    // 7. Освобождение памяти
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] zero_count;

    return 0;
}