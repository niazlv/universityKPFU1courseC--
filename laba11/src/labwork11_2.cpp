#include <iostream>

using namespace std;

// a) Скалярное произведение векторов
int scalarProduct(int *v1, int *v2, int size)
{
    int product = 0;
    for (int i = 0; i < size; i++)
    {
        product += v1[i] * v2[i];
    }
    return product;
}

// b) Сложение векторов
int *addVectors(int *v1, int *v2, int size)
{
    int *result = new int[size];
    for (int i = 0; i < size; i++)
    {
        result[i] = v1[i] + v2[i];
    }
    return result;
}

// c) Поиск элемента или ближайшего большего
int findClosestGreater(int *arr, int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
        if (arr[i] > x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int v1[] = {1, 2, 3};
    int v2[] = {4, 5, 6};
    int size = 3;

    cout << "Скалярное произведение: " << scalarProduct(v1, v2, size) << endl;

    int *sum = addVectors(v1, v2, size);
    cout << "Сумма векторов: ";
    for (int i = 0; i < size; i++)
    {
        cout << sum[i] << " ";
    }
    cout << endl;

    int arr[] = {3, 5, 7, 9};
    int x = 6;
    int index = findClosestGreater(arr, 4, x);
    if (index != -1)
    {
        cout << "Ближайший элемент, больший " << x << ": " << arr[index] << endl;
    }
    else
    {
        cout << "Такого элемента нет" << endl;
    }

    return 0;
}