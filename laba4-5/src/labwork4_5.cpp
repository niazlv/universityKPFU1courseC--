#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double eps = 0.001;
    double sum = 0;
    int sign = 1;
    int denominator = 1;

    while (true)
    {
        double next_term = 1.0 / denominator;
        if (abs(next_term) < eps)
        {
            break;
        }

        sum += sign * next_term;
        sign *= -1;
        denominator += 2;
    }

    cout << "Сумма: " << sum << endl;

    return 0;
}