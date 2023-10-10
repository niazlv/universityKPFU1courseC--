#include <iostream>
#include <string>

using namespace std;

class Phone
{
public:
    string number;
    string model;
    int weight;

    Phone(string num, string mod, int w)
    {
        number = num;
        model = mod;
        weight = w;
    }

    Phone(string num, string mod)
    {
        Phone(num, mod, 0);
    }

    Phone()
    {
        Phone("", "", 0);
    }

    void receiveCall(string name)
    {
        cout << "Звонит " << name << endl;
    }

    string getNumber()
    {
        return number;
    }

    void receiveCall(string name, string num)
    {
        cout << "Звонит " << name << " с номера " << num << endl;
    }

    void sendMessage(int count, ...)
    {
        va_list args;
        va_start(args, count);

        for (int i = 0; i < count; i++)
        {
            string *num = va_arg(args, string *);
            cout << "Отправляем сообщение на номер: " << *num << endl;
        }

        va_end(args);
    }
};

int main()
{
    Phone phones[3];

    for (int i = 0; i < 3; i++)
    {
        string number, model;
        int weight;

        cout << "Введите номер телефона: ";
        cin >> number;

        cout << "Введите модель телефона: ";
        cin >> model;

        cout << "Введите вес телефона: ";
        cin >> weight;

        phones[i] = Phone(number, model, weight);

        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Телефон No" << i + 1 << ":" << endl;
        cout << "Номер: " << phones[i].getNumber() << endl;
        cout << "Модель: " << phones[i].model << endl;
        cout << "Вес: " << phones[i].weight << endl;
        cout << endl;
    }

    string name, num;
    cout << "Введите имя звонящего: ";
    cin >> name;
    phones[0].receiveCall(name);

    cout << "Введите имя и номер звонящего: ";
    cin >> name >> num;
    phones[1].receiveCall(name, num);

    string num1 = "+79991112233";
    string num2 = "+78882224455";
    phones[2].sendMessage(2, &num1, &num2);

    return 0;
}