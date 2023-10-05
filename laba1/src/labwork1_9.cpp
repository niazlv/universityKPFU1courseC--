#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Введите количество секунд, прошедших с начала суток: ";
    cin >> n;

    int hours = n / 3600;
    n = n % 3600;

    int minutes = n / 60;
    int seconds = n % 60;

    cout << "Полных часов прошло: " << hours << endl;
    cout << "Полных минут прошло: " << minutes << endl;
    cout << "Остаток секунд: " << seconds << endl;

    return 0;
}