#include <iostream>
#include <cstdlib>
#include <ctime>

const int ROWS = 2;
const int COLS = 3;

void fillArray(int arr[ROWS][COLS])
{

    srand(time(nullptr)); // инициализация генератора

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 31;
        }
    }
}

void printArray(int arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool isEvenSum(int arr[ROWS][COLS])
{
    int sum = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum % 2 == 0;
}

void sumAndProduct(int arr[ROWS][COLS], int &sum, int &product)
{
    sum = 0;
    product = 1;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] >= 2 && arr[i][j] <= 9)
            {
                sum += arr[i][j];
                product *= arr[i][j];
            }
        }
    }
}

int main()
{
    int arr[ROWS][COLS];
    fillArray(arr);

    std::cout << "a)\n";
    printArray(arr);

    if (isEvenSum(arr))
    {
        std::cout << "b) Сумма элементов четная\n";
    }
    else
    {
        std::cout << "b) Сумма элементов нечетная\n";
    }

    int sum, product;
    sumAndProduct(arr, sum, product);
    std::cout << "в) Сумма: " << sum << " Произведение: " << product << std::endl;

    return 0;
}