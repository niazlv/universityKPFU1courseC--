#include <iostream>

using namespace std;

int main()
{

    long double n = 0;
    cout << "Введите n: ";
    cin >> n;

    long double sum = 1 - pow(0.5, n);

    cout << "Сумма ряда = " << sum << endl;

    return 0;
}