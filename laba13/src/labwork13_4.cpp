#include <iostream>
#include <string>
#include <map>

using namespace std;

int f(const string &s)
{
    map<char, int> rim;
    rim['M'] = 1000;
    rim['D'] = 500;
    rim['C'] = 100;
    rim['L'] = 50;
    rim['X'] = 10;
    rim['V'] = 5;
    rim['I'] = 1;
    int res = 0;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (rim[s[i]] < rim[s[i + 1]])
            res -= rim[s[i]];
        else
            res += rim[s[i]];
    }
    res += rim[s[s.size() - 1]];
    return res;
}

int main()
{
    setlocale(0, "");
    string s;
    cout << "римская цифра: ";
    cin >> s;
    cout << "перевод:\n"
         << f(s) << "\n";
    return 0;
}
