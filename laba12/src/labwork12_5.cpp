#include <iostream>
#include <cmath>
using namespace std;

float ax(int n)
{
    if (n == 1)
    {
        return sqrt(2);
    }
    return sqrt(2 + ax(n - 1));
}

float bx(int n, int cnt = 2)
{
    if (n == 1)
    {
        return n * sqrt(1);
    }

    return sqrt(1 + (cnt - 1) * bx(n - 1, cnt += 1));
}

int main()
{
    int n = 5;
    cout << "Введите число: ";
    cin >> n;
    printf("a) %0.10f\n", ax(n));
    printf("b) %0.10f\n", bx(n));

    return 0;
}