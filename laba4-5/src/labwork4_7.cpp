#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cout << "Введите число вершин: ";
    cin >> n;

    double x[n], y[n];

    cout << "Введите координаты вершин:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "x" << i + 1 << ": ";
        cin >> x[i];
        cout << "y" << i + 1 << ": ";
        cin >> y[i];
    }

    double perimeter = 0;

    for (int i = 0; i < n - 1; i++)
    {
        perimeter += sqrt(pow(x[i + 1] - x[i], 2) + pow(y[i + 1] - y[i], 2));
    }

    perimeter += sqrt(pow(x[0] - x[n - 1], 2) + pow(y[0] - y[n - 1], 2));

    cout << "Периметр " << n << "-угольника: " << perimeter << endl;

    return 0;
}