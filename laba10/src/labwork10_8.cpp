#include <iostream>

void isLucky(int a, int b, int c, int d, int e, int f)
{
    if (a + b + c == d + e + f)
        std::cout << "lucky";
    else
        std::cout << "unlucky";
}

void isLucky(int number)
{
    int a, b, c, d, e, f;
    a = number % 10;
    b = number / 10 % 10;
    c = number / 100 % 10;
    d = number / 1000 % 10;
    e = number / 10000 % 10;
    f = number / 100000;
    isLucky(a, b, c, d, e, f);
}

void isLucky(int firstHalf, int secondHalf)
{
    int a, b, c, d, e, f;
    a = secondHalf % 10;
    b = secondHalf / 10 % 10;
    c = secondHalf / 100;
    d = firstHalf % 10;
    e = firstHalf / 10 % 10;
    f = firstHalf / 100;
    isLucky(a, b, c, d, e, f);
}

int main()
{
    int number;
    std::cin >> number;
    isLucky(number);
    return 0;
}