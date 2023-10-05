#include <iostream>
#include <string>

using namespace std;

int main()
{

    const int DAYS = 7;

    string weekdays[] = {"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"};

    // Ввод количества замеров по дням
    int *measurements_per_day = new int[DAYS];
    for (int i = 0; i < DAYS; i++)
    {
        cout << "Введите количество замеров для " << weekdays[i] << ": ";
        cin >> measurements_per_day[i];
    }

    // Создание двумерного массива для температур
    int total_measurements = 0;
    for (int i = 0; i < DAYS; i++)
    {
        total_measurements += measurements_per_day[i];
    }

    double **temperatures = new double *[DAYS];
    for (int i = 0; i < DAYS; i++)
    {
        temperatures[i] = new double[measurements_per_day[i]];
    }

    // Ввод температур
    for (int i = 0; i < DAYS; i++)
    {
        cout << endl
             << weekdays[i] << ":" << endl;
        for (int j = 0; j < measurements_per_day[i]; j++)
        {
            cout << "Замер " << j + 1 << ": ";
            cin >> temperatures[i][j];
        }
    }

    // Вычисления

    // a) Минимальная температура в первый день
    double min_temp_day1 = temperatures[0][0];
    for (int i = 1; i < measurements_per_day[0]; i++)
    {
        if (temperatures[0][i] < min_temp_day1)
        {
            min_temp_day1 = temperatures[0][i];
        }
    }
    cout << "Минимальная температура в первый день: " << min_temp_day1 << endl;

    // b) Количество отрицательных температур в выходные
    int negative_weekend = 0;
    for (int i = DAYS - 2; i < DAYS; i++)
    {
        for (int j = 0; j < measurements_per_day[i]; j++)
        {
            if (temperatures[i][j] < 0)
            {
                negative_weekend++;
            }
        }
    }
    cout << "Количество отрицательных температур в выходные: " << negative_weekend << endl;

    // c) Максимальная температура за неделю
    double max_temp = temperatures[0][0];
    int max_day = 0;
    for (int i = 0; i < DAYS; i++)
    {
        for (int j = 0; j < measurements_per_day[i]; j++)
        {
            if (temperatures[i][j] > max_temp)
            {
                max_temp = temperatures[i][j];
                max_day = i;
            }
        }
    }
    cout << "Максимальная температура: " << max_temp << endl;
    cout << "День: " << max_day + 1 << endl;

    // d) Средняя температура по первым замерам
    double avg_first = 0;
    for (int i = 0; i < DAYS; i++)
    {
        avg_first += temperatures[i][0];
    }
    avg_first /= DAYS;

    cout << "Средняя температура по первым замерам: " << avg_first << endl;

    // Освобождение памяти
    delete[] measurements_per_day;
    for (int i = 0; i < DAYS; i++)
    {
        delete[] temperatures[i];
    }
    delete[] temperatures;

    return 0;
}