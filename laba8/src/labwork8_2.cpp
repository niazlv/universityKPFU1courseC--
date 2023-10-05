#include <iostream>

using namespace std;

int main()
{

    double *a = new double(5.0); // сторона a
    double *b = new double(3.0); // сторона b

    // Вычисляем периметр
    double *perimeter = new double(2 * (*a + *b));

    // Вычисляем площадь
    double *area = new double(*a * *b);

    // Вывод результата
    cout << "Периметр прямоугольника: " << *perimeter << endl;
    cout << "Площадь прямоугольника: " << *area << endl;

    // Освобождаем память
    delete a;
    delete b;
    delete perimeter;
    delete area;

    return 0;
}