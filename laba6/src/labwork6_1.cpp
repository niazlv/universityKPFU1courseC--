#include <iostream>

void printSecondAndPreLast(int arr[], int size)
{
    std::cout << arr[1] << std::endl;
    std::cout << arr[size - 2] << std::endl;
}

void printOddIndices(int arr[], int size)
{
    for (int i = 1; i < size; i += 2)
    {
        std::cout << arr[i] << std::endl;
    }
}

double getAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)sum / size;
}

void printArraySums(int arr1[], int arr2[], int size)
{

    // проходим по элементам массивов
    for (int i = 0; i < size; i++)
    {

        // выводим элемент из первого массива
        std::cout << arr1[i];

        // выводим элемент из второго массива
        std::cout << " + " << arr2[i];

        // вычисляем и выводим сумму элементов
        int sum = arr1[i] + arr2[i];
        std::cout << " = " << sum << std::endl;
    }
}

int main()
{
    int choose = 0;
    const int size = 10;
    int arr[size];

    for (int i = 0; i < 10; i++)
        std::cin >> arr[i];

    std::cout << "введите какое задание(1-4)";
    std::cin >> choose;
    if (choose == 1)
        printSecondAndPreLast(arr, size);
    if (choose == 2)
        printOddIndices(arr, size);
    if (choose == 3)
    {
        double avg = getAverage(arr, size);
        std::cout << "Среднее арифметическое: " << avg << std::endl;
    }
    if (choose == 4)
    {
        int arr2[size] = {-2, 4, 3, -7, 0, 12, 9, -2, 4, 2};
        printArraySums(arr, arr2, 10);
    }
    return 0;
}