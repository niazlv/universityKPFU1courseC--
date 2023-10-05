#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Введите четырехзначное число: ";
    cin >> num;

    int firstDigit = num / 1000;
    int lastDigit = num % 10;

    cout << "Первая цифра: " << firstDigit << endl;
    cout << "Последняя цифра: " << lastDigit << endl;

    return 0;
}