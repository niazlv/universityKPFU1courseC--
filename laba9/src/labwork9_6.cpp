#include <iostream>
#include <string>
#include <cmath>

char minusOrPlus(int n)
{
    if (n >= 0)
        return '+';
    return '-';
}

std::string digitToString(int n)
{
    n = abs(n);
    std::string digits[11] = {"????", "????", "???", "???", "??????", "????",
                              "?????", "????", "??????", "??????", "??????"};
    return digits[n];
}

void signWithDigit(int n)
{
    std::cout << minusOrPlus(n);
    std::cout << digitToString(n);
}

int main()
{
    int choose, n;
    std::cin >> choose;
    if (choose == 1)
    {
        std::cin >> n;
        std::cout << minusOrPlus(n);
    }
    if (choose == 2)
    {
        std::cin >> n;
        std::cout << digitToString(n);
    }
    if (choose == 3)
    {
        std::cin >> n;
        signWithDigit(n);
    }
    return 0;
}