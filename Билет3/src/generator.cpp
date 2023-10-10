#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    const int n = 100000000;
    const bool isSort = true;
    cout << "count of numbers on array: " << n << endl;
    cout << (isSort ? "array is sorted" : "array is not sorted") << endl;

    int file_num = 1;
    std::string fname = "";
    while (true)
    {
        fname = "input_" + std::to_string(file_num) + ".txt";

        // Проверка на существование файла
        std::ifstream fin(fname);
        if (fin)
        {
            std::cout << fname << " already exists, trying next file..." << std::endl;
            file_num++;
            continue;
        }
        else
        {
            break;
        }
    }
    // Файл не существует, можно открыть для записи
    std::ofstream fout(fname);
    cout << "generating " << fname << " file";
    cout.flush();

    // запись размера в начало
    fout << n << "\n";

    // элемент для поиска в диапазоне
    int ix = rand() % n;
    int x = 1000;
    // генерация отсортированных данных
    srand(time(nullptr));
    int prev = 0;
    int delay = n / 10;
    if (isSort)
    {
        for (int i = 0; i < n; i++)
        {
            std::uint64_t next = prev + rand() % 100;
            fout << next << "\n";
            if (i % delay == 0)
            {
                cout << ".";
                cout.flush();
            }
            if (i == ix)
            {
                x = next;
            }
            prev = next;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            std::uint64_t next = rand() % 1000000;
            fout << next << "\n";
            if (i % delay == 0)
            {
                cout << ".";
                cout.flush();
            }
            if (i == ix)
            {
                x = next;
            }
        }
    }
    cout << endl;

    // fout << x << "\n";
    cout << "try find this number: " << x << endl;

    fout.close();

    return 0;
}