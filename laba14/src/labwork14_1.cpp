#include <iostream>
#include <string>
using namespace std;

struct info
{
    string street;
    string house;
    int area;
    int cost_per_meter;

    int total_cost()
    {
        return area * cost_per_meter;
    }

    string print_full()
    {
        return street + ", " + house + ", " + to_string(area) + " м2, " + to_string(cost_per_meter) + "руб./м2";
    }
};

int main()
{
    info from_user;
    info pre_made;
    int total_cost_user, total_cost_pre_made;

    cout << "Введите улицу: ";
    getline(cin, from_user.street);

    cout << "Введите дом: ";
    getline(cin, from_user.house);

    cout << "Введите площадь помещения: ";
    cin >> from_user.area;

    cout << "Введите стоимость аренды за 1м2: ";
    cin >> from_user.cost_per_meter;

    pre_made.street = "Чишмеле";
    pre_made.house = "12";
    pre_made.area = 200;
    pre_made.cost_per_meter = 10000;

    total_cost_user = from_user.total_cost();
    total_cost_pre_made = pre_made.total_cost();

    cout << (total_cost_user > total_cost_pre_made ? from_user.print_full() : pre_made.print_full()) << " дороже";

    return 0;
}
