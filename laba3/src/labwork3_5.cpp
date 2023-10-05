#include <iostream>

using namespace std;

int main()
{

    // а) Согласование слова "гриб"
    int mushrooms;
    cout << "Сколько грибов собрал Джонни? ";
    cin >> mushrooms;

    string ending;
    if (mushrooms % 10 == 1 && mushrooms % 100 != 11)
    {
        ending = "";
    }
    else if (mushrooms % 10 >= 2 && mushrooms % 10 <= 4 &&
             (mushrooms % 100 < 10 || mushrooms % 100 >= 20))
    {
        ending = "а";
    }
    else
    {
        ending = "ов";
    }

    cout << "Джонни собрал " << mushrooms << " гриб" << ending << endl;

    // б) Согласование слова "год"
    int birthDay, birthMonth, birthYear;
    int todayDay, todayMonth, todayYear;

    cout << "Введите дату рождения (дд мм гггг): ";
    cin >> birthDay >> birthMonth >> birthYear;

    cout << "Введите сегодняшнюю дату (дд мм гггг): ";
    cin >> todayDay >> todayMonth >> todayYear;

    int age = todayYear - birthYear;
    if (todayMonth < birthMonth ||
        (todayMonth == birthMonth && todayDay < birthDay))
    {
        age--;
    }

    string ageEnding;
    if (age % 10 == 1 && age % 100 != 11)
    {
        ageEnding = "год";
    }
    else if (age % 10 >= 2 && age % 10 <= 4 &&
             (age % 100 < 10 || age % 100 >= 20))
    {
        ageEnding = "года";
    }
    else
    {
        ageEnding = "лет";
    }

    cout << "Вам " << age << " " << ageEnding << endl;

    return 0;
}