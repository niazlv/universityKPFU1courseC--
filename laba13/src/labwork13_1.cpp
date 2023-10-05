#include <iostream>
using namespace std;

int main()
{

    string n = ".";
    string s1, s2, s3, s4, s5, s6;

    cout << "Фамилия: ";
    cin >> s1;

    cout << "Имя: ";
    cin >> s2;

    cout << "Отчество: ";
    cin >> s3;

    cout << "\n";

    s4 = s1 + " " + s2 + " " + s3;
    s5 = s1[0] + n + s2[0] + n + s3[0];
    s6 = s1 + " " + s2[0] + n + s3[0];

    cout << s4 << "\n";
    cout << s5 << "\n";
    cout << s6 << "\n";
}
