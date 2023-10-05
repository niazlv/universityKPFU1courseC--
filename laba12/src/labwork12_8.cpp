#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int *create_arr(int *arr, int size, int number = rand() % 15 + 1 - rand() % 7)
{
    arr[size] = number;
    if (size == 0)
    {
        cout << arr[size] << "\n";
        return arr;
    }
    else
    {
        cout << arr[size] << " ";
        return create_arr(arr, size - 1, rand() % 15 + 1 - rand() % 7);
    }
}

bool a(int *arr, int size)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[size] > 0)
    {
        return true;
    }
    a(arr, size - 1);
}

bool b(int *arr, int size)
{
    if (size == 0)
    {
        return true;
    }
    if (arr[size] < 0)
    {
        return false;
    }
    b(arr, size - 1);
}

bool c(int *arr, int size, int num)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[size] == num)
    {
        return true;
    }
    return c(arr, size - 1, num);
}

int d(int *arr, int size, int max = INT_MIN)
{
    if (size == 0)
    {
        return max;
    }
    if (arr[size] > max)
    {
        max = arr[size];
    }
    return d(arr, size - 1, max);
}

int e(int *arr, int size)
{
    if (arr[size] >= 0)
    {
        if (size != 0)
        {
            return 1 + e(arr, size - 1);
        }
        else
        {
            return 0;
        }
        return 1;
    }
    else
    {
        if (size == 0)
        {
            if (arr[size] >= 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        return e(arr, size - 1);
    }
}

int g(int *arr, int size, int max = INT_MIN)
{
    if (size == 0)
    {
        return max;
    }
    if (arr[size] > max)
    {
        max = arr[size];
    }
    return g(arr, size - 1, max);
}

int h(int *arr, int size)
{
    if (arr[size] <= 0)
    {
        if (size != 0)
        {
            return arr[size] + h(arr, size - 1);
        }
        else
        {
            return arr[size];
        }
        return arr[size];
    }
    else
    {
        if (size == 0)
        {
            if (arr[size] <= 0)
            {
                return arr[size];
            }
            else
            {
                return 0;
            }
        }
        return h(arr, size - 1);
    }
}

int i(int *arr, int size, int W)
{
    if (size == 0)
    {
        return arr[size];
    }
    if (arr[size] * arr[size] < W && arr[size] != 0)
    {
        return arr[size] * i(arr, size - 1, W);
    }
    i(arr, size - 1, W);
}

int main()
{
    srand(time(nullptr));
    setlocale(0, "");

    int n = 5;
    cout << "Размер массива = ";
    cin >> n;

    int *arr = new int[n];
    n = n - 1;
    arr = create_arr(arr, n);

    cout << "a) " << (a(arr, n) == 1 ? "true" : "false") << "\n";
    cout << "b) " << (b(arr, n) == 1 ? "true" : "false") << "\n";

    cout << "Заданное значение k = ";
    int k;
    cin >> k;

    cout << "c) " << (c(arr, n, k) == 1 ? "true" : "false") << "\n";
    cout << "d) " << d(arr, n) << "\n";
    cout << "e) " << e(arr, n) << "\n";
    cout << "g) " << g(arr, n) << "\n";
    cout << "h) " << h(arr, n) << "\n";

    cout << "Заданное число W = ";
    int W;
    cin >> W;

    cout << "i) " << i(arr, n, W) << "\n";

    return 0;
}