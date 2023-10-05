#include <iostream>
using namespace std;

int numsCount(int number, int counter = 0)
{
    if (number == 0)
    {
        return counter;
    }
    return numsCount(number / 10, counter += 1);
}

int numsSumm(int number, int summ = 0)
{
    if (number == 0)
    {
        return summ;
    }
    return numsSumm(number / 10, summ += (number % 10));
}

void binNum(int number)
{
    if (number < 0)
    {
        cout << "-";
        binNum(-number);
    }
    else if (number < 2)
    {
        cout << number;
        return;
    }
    else
    {
        binNum(number / 2);
        int result = number % 2;
        cout << result;
    }
}

int main()
{
    int input;
    cout << "введите число: ";
    cin >> input;

    cout << "a) " << numsCount(input) << "\n";
    cout << "b) " << numsSumm(input) << "\n";
    cout << "c) ";
    binNum(input);
    cout << "\n";

    return 0;
}