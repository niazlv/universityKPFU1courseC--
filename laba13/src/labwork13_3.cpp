#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void a1(char s[], int a)
{
    for (int i = 0; i < a; i++)
    {
        if (s[i] == 'm' and s[i + 1] == 'i' and s[i + 2] == 'n')
        {
            s[i] = 'M';
            s[i + 1] = 'A';
            s[i + 2] = 'X';
        }
    }
    cout << "Новая строка: " << s << "\n";
}

string b(char s[], int a)
{
    for (int i = 0; i < a; i++)
    {
        if (s[i + 5] == ' ' and (s[i] != ' ' and s[i + 1] != ' ' and s[i + 2] != ' ' and s[i + 3] != ' ' and s[i + 4] != ' '))
        {
            s[i] = 'k';
            s[i + 1] = 'u';
            s[i + 2] = '-';
            s[i + 3] = 'k';
            s[i + 4] = 'u';
        }
    }
    return s;
}

string c(char s[], int a)
{
    string s1;
    for (int i = 0; i < a; i++)
    {
        s1 = s1 + s[i];
        if (s[i] == 'k' and s[i + 1] == 'u' and s[i + 2] == 'k' and s[i + 3] == 'u')
        {
            s1 = s1 + 'k' + 'u' + '-' + 'k' + 'a' + '-' + 'r' + 'e' + '-' + 'k' + 'u';
        }
        else
        {
            s1 = s[a / 2] + (('k' + 'u' + '-' + 'k' + 'u') * 3) + s[a / 2];
        }
    }
    return s1;
}

string d(char s[], int a)
{
    for (int i = 0; i < a; i++)
    {
        if (s[i] == 'k' and s[i + 1] == 'u' and s[i + 2] == '-' and s[i + 3] == 'k' and s[i + 4] == 'u')
        {
            s[i] = ' ';
            s[i + 1] = ' ';
            s[i + 2] = ' ';
            s[i + 3] = ' ';
            s[i + 4] = ' ';
        }
    }
    return s;
}

void e(char s[], char s1[], int a)
{
    for (int i = 0; i < a; i++)
    {
        if (s[i] == 'k' and s[i + 1] == 'u' and s[i + 2] == '-' and s[i + 3] == 'k' and s[i + 4] == 'u')
        {
            cout << strncpy(s1, s, i + 4);
        }
    }
}

void f(char s[], int a, int k)
{
    for (int i = 0; i < a; i++)
    {
        if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
        {
            k++;
        }
    }
    cout << k;
}

void g(char s[], int a, int k1, int k2)
{
    for (int i = 0; i < a; i++)
    {
        if (s[i] == '(')
        {
            k1++;
        }
        else if (s[i] == ')')
        {
            k2++;
        }
    }
    if (k1 == k2)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

void h(char s[], int a)
{
    int i = 0;
    string result = "";

    for (int i = 0; i < a; i++)
    {
        if (s[i] == '(')
        {
            int j = 0;
            while (s[j] != ')')
            {
                i++;
                j++;
            }
        }

        result += s[i];
    }

    cout << result;
}

int main()
{
    char s[] = "iesyrgbirminousrhminmin";
    cout << "a) Исходная строка: " << s << "\n";
    int a = strlen(s);
    a1(s, a);

    char s1[] = "mina maxmi ax minmx ";
    a = strlen(s1);
    cout << "b) Исходная строка: " << s1 << endl;
    cout << "Новая строка: ";
    cout << b(s1, a) << endl;

    char s2[] = "kula hjk fghhjkk";
    a = strlen(s2);
    cout << "c) Исходная строка: " << s2 << endl;
    cout << "Новая строка: ";
    cout << c(s2, a) << endl;

    char s3[] = "mina ku-ku ax minmx ";
    a = strlen(s3);
    cout << "d) Исходная строка: " << s3 << endl;
    cout << "Новая строка: ";
    cout << d(s3, a) << endl;

    char s4[] = "mina ku-ku ax minmx ";
    char s11[] = "                  ";
    a = strlen(s4);
    cout << "e) Исходная строка: " << s4 << endl;
    cout << "Новая строка: ";
    e(s4, s11, a);

    int k = 0;
    char s5[] = "mina ku-ku ax minmx ";
    a = strlen(s5);
    cout << "\nf) Исходная строка: " << s5 << endl;
    cout << "Результат: ";
    f(s5, a, k);

    int k1 = 0;
    int k2 = 0;
    char s6[] = "((a+b)+hh)";
    a = strlen(s6);
    cout << "\ng) Выражение: " << s6 << endl
         << "Ответ: ";
    g(s6, a, k1, k2);

    char s7[] = "l+(a+b)+hh";
    a = strlen(s7);
    cout << "\nh) Выражение: " << s7 << endl
         << "Ответ: ";
    h(s7, a);
    cout << "\n";
    return 0;
}
