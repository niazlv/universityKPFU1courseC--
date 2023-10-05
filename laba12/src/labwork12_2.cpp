#include <iostream>
using namespace std;

int enterNumbers(int *arr = new int[1024], int size = 0, int mode = 0)
{
    if (mode == 0)
    {
        int input;
        cin >> input;

        if (input == 0)
        {
            return enterNumbers(arr, size - 1, 1);
        }

        arr[size] = input;
        return enterNumbers(arr, size + 1);
    }
    else
    {
        if (size >= 0)
        {
            cout << arr[size] << " ";
            return enterNumbers(arr, size - 1, 1);
        }
    }
}

int main()
{
    cout << "Введите числа, 0 завершит ввод: ";
    enterNumbers();
    return 0;
}