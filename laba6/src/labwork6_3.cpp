#include <iostream>
#include <cstdlib>
#include <ctime>

void generateArrays(int x[], int y[], int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % 21;
        y[i] = rand() % 21;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void getArray1(int x[], int y[], int c[], int n)
{
    for (int i = 0; i < n; i++)
    {
        c[3 * i] = x[i];
        c[3 * i + 1] = y[i];
        c[3 * i + 2] = y[i] + x[i];
    }
}

void getArray2(int x[], int y[], int c[], int n)
{
    for (int i = 0; i < n; i++)
    {
        c[2 * i] = x[n - 1 - i];
        c[2 * i + 1] = y[i] + x[i];
    }
}

int main()
{
    const int n = 7;
    int x[n], y[n];
    int c1[3 * n], c2[2 * n];

    generateArrays(x, y, n);

    std::cout << "Массив x: ";
    printArray(x, n);

    std::cout << "Массив y: ";
    printArray(y, n);

    getArray1(x, y, c1, n);

    std::cout << "Первый результат: ";
    printArray(c1, 3 * n);

    getArray2(x, y, c2, n);

    std::cout << "Второй результат: ";
    printArray(c2, 2 * n);

    return 0;
}