#include <iostream>
using namespace std;

int summ(int num1, int num2, int result = 0)
{
    if (result == num1 + num2)
    {
        return result;
    }
    return summ(num1, num2, result += 1);
}

int mult(int num1, int num2, int result = 0)
{
    if (result == num1 * num2)
    {
        return result;
    }
    return mult(num1, num2, result += num1);
}

int main()
{
    int n1;
    int n2;
    cout << "введите два числа: ";
    cin >> n1;
    cin >> n2;

    cout << "a) " << summ(n1, n2) << "\n";
    cout << "b) " << mult(n1, n2) << "\n";

    return 0;
}