#include <iostream>
using namespace std;

int main()
{
  double a1, b1, a2, b2;

  cout << "Введите стороны 1-го прямоугольника:\n";
  cout << "a1 = ";
  cin >> a1;
  cout << "b1 = ";
  cin >> b1;

  cout << "Введите стороны 2-го прямоугольника:\n";
  cout << "a2 = ";
  cin >> a2;
  cout << "b2 = ";
  cin >> b2;

  double s1 = a1 * b1;
  double s2 = a2 * b2;

  if (s1 > s2)
  {
    cout << "Максимальная площадь у 1-го, S = " << s1;
  }
  else if (s1 < s2)
  {
    cout << "Максимальная площадь у 2-го, S = " << s2;
  }
  else
  {
    cout << "Площади равны!";
  }

  return 0;
}