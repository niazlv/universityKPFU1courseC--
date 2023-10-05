#include <iostream>
#include <string>
using namespace std;

int main()
{
    const char a = 40;
    char s1[a] = "123abc - S - s - ++ + SSSaaaAAAssss5678";
    int k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0;

    for (int i = 0; i < a; i++)
    {
        if (s1[i] == 's')
        {
            k1 += 1;
        }
        if (s1[i] == 'S')
        {
            k2 += 1;
        }
        if (s1[i] == 'A')
        {
            k3 += 1;
        }
        if (s1[i] == '1' or s1[i] == '2' or s1[i] == '3' or s1[i] == '5' or s1[i] == '6' or s1[i] == '7' or s1[i] == '8')
        {
            k5 += 1;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (s1[i] == '1')
        {
            s1[i] = '5';
        }
        if (islower(s1[i]))
        {
            s1[i] = toupper(s1[i]);
        }
    }

    printf("a) Количество символов: %d\nКоличество символов s: %d\nколичество s и S: %d\n\nb) количество цифр: %d\n\nc) количество заглавных букв: %d\n\nd) новая строка: %s\n", k1, k2, k1 + k2, k5, k2 + k3, s1);
}
