#include <iostream>

int main()
{
    const int n = 8;
    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    std::cout << "Массив из " << n << " чисел Фибоначчи: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << fib[i] << " ";
    }

    return 0;
}