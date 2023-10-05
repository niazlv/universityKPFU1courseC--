#include <iostream>
#include <cstdlib>
#include <climits>

const int N = 19;

void fillArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 111;
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

void printOddElements(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        std::cout << arr[i] << std::endl;
    }
}

int countGreaterThan90(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 90)
        {
            count++;
        }
    }
    return count;
}

int sumOfMultiplesOf5(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

void minOddElement(int arr[], int n, int &value, int &index)
{
    value = INT_MAX;
    index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] < value)
        {
            value = arr[i];
            index = i;
        }
    }
}

void tripleElements(int arr[], int n, int result[])
{
    for (int i = 0, j = 0; i < n; i++)
    {
        result[j] = arr[i];
        j++;
        result[j] = arr[i];
        j++;
        result[j] = arr[i];
        j++;
    }
}

int main()
{
    int arr[N];

    fillArray(arr, N);

    std::cout << "a) ";
    printArray(arr, N);

    std::cout << "b) ";
    printOddElements(arr, N);

    int count = countGreaterThan90(arr, N);
    std::cout << "c) " << count << std::endl;

    int sum = sumOfMultiplesOf5(arr, N);
    std::cout << "d) " << sum << std::endl;

    int minValue, minIndex;
    minOddElement(arr, N, minValue, minIndex);
    std::cout << "e) " << minValue << ", индекс " << minIndex << std::endl;

    int triple[3 * N];
    tripleElements(arr, N, triple);
    std::cout << "f) ";
    printArray(triple, 3 * N);

    return 0;
}