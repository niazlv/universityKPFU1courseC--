#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

struct address
{
    string street;
    string house;
    int room;

    void collect_data(bool random = false)
    {
        if (!random)
        {
            cout << "Улица: ";
            getline(cin, street);

            cout << "Дом: ";
            getline(cin, house);

            cout << "Квартира: ";
            cin >> room;
        }
        else
        {
            string streets[] = {
                "Кремлевская",
                "Азинская",
                "Бугульминская",
                "Тракторная",
                "Заречная",
                "Ново-Осиновская",
                "Школьная",
                "Новосельская",
                "Давликеевская",
                "Абжалилова"};

            street = streets[rand() % 10];
            house = to_string(rand() % 180 + 1);
            room = rand() % 60 + 1;

            cout << "Улица: " << street << "\n";
            cout << "Дом: " << house << "\n";
            cout << "Квартира: " << room << "\n";
        }
    }
};

struct date
{
    int day;
    int month;
    int year;

    void collect_data(bool random = false)
    {
        if (!random)
        {
            cout << "День: ";
            cin >> day;

            cout << "Месяц: ";
            cin >> month;

            cout << "Год: ";
            cin >> year;
        }
        else
        {
            day = rand() % 30 + 1;
            month = rand() % 12 + 1;
            year = rand() % 32 + 1990;

            cout << "День: " << day << "\n";
            cout << "Месяц: " << month << "\n";
            cout << "Год: " << year << "\n";
        }
    }
};

struct character
{
    string surname;
    string name;
    address c_address;
    date bdate;

    string get_data()
    {
        return surname + " " + name + " | Улица " + c_address.street + ", дом " + c_address.house + ", квартира " + to_string(c_address.room);
    }

    void collect_data(bool random = false)
    {
        if (!random)
        {
            cout << "Фамилия: ";
            getline(cin, surname);

            cout << "Имя: ";
            getline(cin, name);

            cout << "Адрес: ";
            c_address.collect_data();

            cout << "День рождения: ";
            bdate.collect_data();
        }
        else
        {
            string surnames[] = {
                "Смирнов",
                "Иванов",
                "Кузнецов",
                "Соколов",
                "Попов",
                "Лебедев",
                "Новиков",
                "Морозов",
                "Петров",
                "Волков"};

            string names[] = {
                "Александр",
                "Алексей",
                "Антон",
                "Аркадий",
                "Артур",
                "Вячеслав",
                "Глеб",
                "Даниил",
                "Леонид",
                "Михаил"};

            surname = surnames[rand() % 10];
            name = names[rand() % 10];

            cout << "Фамилия: " << surname << "\n";
            cout << "Имя: " << name << "\n";

            cout << "Адрес: \n";
            c_address.collect_data(true);

            cout << "День рождения: \n";
            bdate.collect_data(true);
        }
    }
};

int total(date today, date bday)
{
    int total_lived = today.year - bday.year;
    if (today.day - bday.day < 0 || today.month - bday.month < 0)
    {
        total_lived -= 1;
    }
    return total_lived;
}

int main()
{
    srand(time(nullptr));

    date today;
    cout << "Текущая дата:\n";
    today.collect_data(true);
    cout << "\n";

    character characters[5];
    character characters_to_print[5];
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        character new_char;

        new_char.collect_data(true);
        characters[i] = new_char;

        // today.collect_data();
        // cout << "\n";

        if (new_char.bdate.day == today.day && new_char.bdate.month == today.month)
        {
            characters_to_print[j] = new_char;
            j++;
        }

        cout << "\n";
    }

    cout << "a) \n";

    for (int i = 0; i < j; i++)
    {
        cout << characters_to_print[i].get_data() << "\n";
    }

    cout << "\nb) \n";
    for (int i = 0; i < 5; i++)
    {
        cout << characters[i].get_data() << " | Прожил полных лет: " << (total(today, characters[i].bdate) < 0 ? "(Ещё не родился)" : to_string(total(today, characters[i].bdate))) << "\n";
    }

    return 0;
}
