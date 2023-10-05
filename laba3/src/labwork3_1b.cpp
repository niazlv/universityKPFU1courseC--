#include <iostream>

using namespace std;

int main()
{
    int day, month;

    cout << "Введите число месяца: ";
    cin >> day;

    cout << "Введите номер дня недели: ";
    cin >> month;

    if (month == 5 && day == 17)
    {
        cout << "В Италии это неудачный день!" << endl;
    }
    else if (month == 7 && day == 13)
    {
        cout << "В Италии это неудачный день!" << endl;
    }
    else
    {
        cout << "Это не неудачный день в Италии" << endl;
    }

    return 0;
}