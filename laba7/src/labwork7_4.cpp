#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int X = 5;
    const int Y = 4;
    const int Z = 6;

    int arr[X][Y][Z];

    srand(time(0));

    // Заполнение случайными числами
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            for (int k = 0; k < Z; k++)
            {
                arr[i][j][k] = rand() % 30 + 1;
            }
        }
    }

    // Вывод массива
    cout << "Сгенерированный массив:" << endl;
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            for (int k = 0; k < Z; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Поиск одноцветной плоскости
    bool found = false;
    int color;

    for (int i = 0; i < X; i++)
    {
        bool cur_found = true;
        for (int j = 0; j < Y; j++)
        {
            for (int k = 0; k < Z; k++)
            {
                if (arr[i][j][k] != arr[i][0][0])
                {
                    cur_found = false;
                    break;
                }
            }
        }
        if (cur_found)
        {
            found = true;
            color = arr[i][0][0];
            break;
        }
    }

    if (found)
    {
        cout << "Найдена одноцветная плоскость цвета " << color << endl;
    }
    else
    {
        cout << "Одноцветных плоскостей не найдено" << endl;
    }

    return 0;
}