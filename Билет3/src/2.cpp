#include <iostream>
#include <chrono>
#include <fstream>
#include <algorithm>

using namespace std;

// функция линейного поиска
bool linearSearch(vector<int> &arr, int x)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            cout << "линейный поиск: число найдено на " << i << " позиции" << endl;
            return true;
        }
    }
    return false;
}

// Функция бинарного поиска
static bool binarySearch(vector<int> &arr, int x)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            cout << "бинарный поиск: число найдено на " << mid << " позиции" << endl;
            return true;
        }
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    // выводим список файлов
    cout << "выведен список файлов. Пожайлуста выберите файл(input_{номер файла}.txt): " << endl;
    system("ls input*txt");
    cout << "Введите номер файла: ";
    int file_num;
    cin >> file_num;

    char res;
    cout << "массив отсортирован ?(y/n):";
    cin >> res;
    bool isSorted = (res == 'Y' || res == 'y');

    string fname = "input_" + to_string(file_num) + ".txt";

    ifstream fin(fname);
    if (!fin.is_open())
    {
        cout << "Ошибка открытия файла " << fname << endl;
        return 1;
    }

    int x;
    cout << "какой элемент найти: ";
    cin >> x;

    // Загрузка массива из файла
    vector<int> arr;
    cout << "загружаю данные в оперативную память, подождите немного..." << endl;
    cout.flush();
    int num;
    fin >> num;
    while (fin >> num)
    {
        arr.push_back(num);
    }
    cout << "данные были загружены в оперативную память." << endl;
    cout.flush();

    // линейный поиск
    auto start = chrono::high_resolution_clock::now();
    bool foundLinear = linearSearch(arr, x);
    auto end = chrono::high_resolution_clock::now();
    auto linear_time = chrono::duration_cast<chrono::milliseconds>(end - start);

    if (foundLinear)
    {
        cout << "Число было найдено линейным поиском за " << linear_time.count() << " ms" << endl;
    }
    else
    {
        cout << "Число не было найдено!!" << endl;
    }

    // Двоичный поиск (с сортировкой данных)
    start = chrono::high_resolution_clock::now();
    bool foundBinary;
    if (!isSorted)
    {
        cout << "сортировка массива..." << endl;
        cout.flush();
        sort(arr.begin(), arr.end());
        cout << "сортировка массива завершена." << endl;
        cout.flush();
    }

    foundBinary = binarySearch(arr, x);

    end = chrono::high_resolution_clock::now();
    auto binary_time = chrono::duration_cast<chrono::milliseconds>(end - start);

    if (foundBinary)
    {
        cout << "Число было найдено бинарным поиском за " << binary_time.count() << " ms" << endl;
    }
    else
    {
        cout << "Число не было найдено!!" << endl;
    }
    // вывод результатов
    cout << "Линейный поиск: " << linear_time.count() << " ms" << endl;
    cout << "Двоичный поиск" << (!isSorted ? " с сортировкой данных: " : ": ") << binary_time.count() << " ms" << endl;

    // Вывод результатов в файл
    ofstream fout("result.txt");
    if (fout.is_open())
    {
        fout << "Линейный поиск: " << linear_time.count() << " ms\n";
        fout << "Двоичный поиск" << (!isSorted ? " с сортировкой данных: " : ": ") << binary_time.count() << " ms\n";
        if (!foundLinear)
        {
            fout << "Линейный поиск не дал результатов и не нашел значение!\n";
        }
        if (!foundBinary)
        {
            fout << "Бинарный поиск не дал результатов и не нашел значение!\n";
        }
        fout.close();
        cout << "был создан файл result.txt и в него были сохранены последние пару строк" << endl;
    }
    else
    {
        cout << "Ошибка открытия файла!" << endl;
    }

    return 0;
}