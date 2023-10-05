#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    int lastDigit1, lastDigit2;
    int sum;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    lastDigit1 = num1 % 10;
    lastDigit2 = num2 % 10;

    sum = lastDigit1 + lastDigit2;

    cout << "Сумма последних цифр: " << sum << endl;

    return 0;
}