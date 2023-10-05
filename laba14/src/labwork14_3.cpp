#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>

using namespace std;

bool cheated_marks = false;

struct student
{
    string fullname;
    string group;
    int marks[4];

    int get_avg_mark()
    {
        return (marks[0] + marks[1] + marks[2] + marks[3]) / 4;
    }

    int get_best_mark()
    {
        return max(max(max(marks[3], marks[2]), marks[1]), marks[0]);
    }

    void collect_data(bool random = false)
    {
        if (!random)
        {
            cout << "Фамилия И.О: ";
            getline(cin, fullname);

            cout << "Группа: ";
            getline(cin, group);

            cout << "Оценки (4 оценки, через пробел): ";
            string temp_marks;
            getline(cin, temp_marks);

            marks[0] = temp_marks[0] - '0';
            marks[1] = temp_marks[2] - '0';
            marks[2] = temp_marks[4] - '0';
            marks[3] = temp_marks[6] - '0';
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
                "А",
                "Б",
                "В",
                "Г",
                "Д",
                "Е",
                "Р",
                "Т",
                "Л",
                "М"};

            fullname = surnames[rand() % 10] + " " + names[rand() % 10] + ". " + names[rand() % 10] + ".";
            group = "0" + to_string(rand() % 9 + 1) + "-" + to_string(rand() % 50 + 200);

            string temp_marks;

            if (!cheated_marks)
            {
                temp_marks = to_string(rand() % 4 + 2) + " " + to_string(rand() % 4 + 2) + " " + to_string(rand() % 4 + 2) + " " + to_string(rand() % 4 + 2);
            }
            else
            {
                temp_marks = to_string(rand() % 2 + 4) + " " + to_string(rand() % 1 + 5) + " " + to_string(rand() % 1 + 5) + " " + to_string(rand() % 1 + 5);
            }

            marks[0] = temp_marks[0] - '0';
            marks[1] = temp_marks[2] - '0';
            marks[2] = temp_marks[4] - '0';
            marks[3] = temp_marks[6] - '0';

            cout << "Фамилия И.О: " << fullname << "\n";
            cout << "Группа: " << group << "\n";
            cout << "Оценки (4 оценки, через пробел): " << temp_marks << "\n";
        }
    }
};

int main()
{
    srand(time(nullptr));

    student students[3];

    for (int i = 0; i < 3; i++)
    {
        student s;
        s.collect_data(true);
        students[i] = s;
        cout << "\n";
    }

    cout << "a) \n";

    for (int i = 0; i < 3; i++)
    {
        cout << "Лучшая оценка у " << students[i].fullname << " = " << students[i].get_best_mark() << "\n";
    }

    cout << "\n";

    cout << "b) \nМассив размера = ";
    int k = 0;
    cin >> k;

    cout << "Подменить оценки? (1, 0): ";
    cin >> cheated_marks;

    student *arr = new student[k];

    for (int i = 0; i < k; i++)
    {
        student s;
        s.collect_data(true);
        arr[i] = s;
        cout << "\n";
    }

    student *good_boys = new student[k];
    int j = 0;
    for (int i = 0; i < k; i++)
    {
        cout << "Средняя оценка у " << arr[i].fullname << " = " << arr[i].get_avg_mark() << "\n";
        if (arr[i].get_avg_mark() == 5)
        {
            good_boys[j] = arr[i];
            j++;
        }
    }

    cout << "Отличники: \n";
    for (int i = 0; i < j; i++)
    {
        cout << good_boys[i].fullname << "\n";
    }

    return 0;
}
