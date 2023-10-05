// #include <iostream>
// #include <string>
// using namespace std;

// const double PI = 3.1415;

// class PentagonalPrism
// {
// private:
//     double edge;
//     double height;
//     string label;

// public:
//     PentagonalPrism(double edge, double height, string label)
//     {
//         this->edge = edge;
//         this->height = height;
//         this->label = label;
//     }

//     PentagonalPrism(double edge, double height)
//     {
//         this->edge = edge;
//         this->height = height;
//         this->label = "Pentagonal prism";
//     }
//     double getEdge() const
//     {
//         return edge;
//     }

//     void setEdge(double edge)
//     {
//         this->edge = edge;
//     }

//     double getLabel() const
//     {
//         return label;
//     }

//     void setHeight(double height)
//     {
//         this->height = height;
//     }

//     // аналогично для height и label

//     void input()
//     {
//         cout << "Enter edge: ";
//         cin >> edge;
//         cout << "Enter height: ";
//         cin >> height;
//         cout << "Enter label: ";
//         cin >> label;
//     }

//     void print() const
//     {
//         cout << "Pentagonal prism: " << endl;
//         cout << "Edge: " << edge << endl;
//         cout << "Height: " << height << endl;
//         cout << "Label: " << label << endl;
//     }

//     double surfaceArea() const
//     {
//         double basePerimeter = 5 * edge;
//         double baseArea = (5 * edge * edge) / (4 * tan(PI / 5));
//         double lateralArea = basePerimeter * height;
//         return 2 * baseArea + lateralArea;
//     }

//     double volume() const
//     {
//         double baseArea = (5 * edge * edge) / (4 * tan(PI / 5));
//         return baseArea * height;
//     }
// };

// int main()
// {
//     PentagonalPrism prism1(2, 5, "First");
//     PentagonalPrism prism2;

//     prism2.input();

//     double s1 = prism1.surfaceArea();
//     double s2 = prism2.surfaceArea();

//     double v1 = prism1.volume();
//     double v2 = prism2.volume();

//     if (v1 > v2)
//     {
//         prism1.print();
//     }
//     else
//     {
//         prism2.print();
//     }

//     if (abs(s1 - 100) < abs(s2 - 100))
//     {
//         cout << "prism1 surface closer to 100" << endl;
//     }
//     else
//     {
//         cout << "prism2 surface closer to 100" << endl;
//     }

//     int n;
//     cout << "Enter number of prisms: ";
//     cin >> n;

//     PentagonalPrism *prisms = new PentagonalPrism[n];

//     for (int i = 0; i < n; i++)
//     {
//         prisms[i].input();
//     }

//     // Находим фигуру с самой длинной надписью
//     int maxLen = 0;
//     PentagonalPrism maxPrism;
//     for (int i = 0; i < n; i++)
//     {
//         if (prisms[i].label.length() > maxLen)
//         {
//             maxLen = prisms[i].label.length();
//             maxPrism = prisms[i];
//         }
//     }
//     maxPrism.print();

//     // Создаем новую фигуру, увеличив последнюю в 2 раза
//     PentagonalPrism newPrism = prisms[n - 1];
//     newPrism.edge *= 2;
//     newPrism.height *= 2;
//     newPrism.print();
//     cout << "Surface area: " << newPrism.surfaceArea() << endl;
//     cout << "Volume: " << newPrism.volume() << endl;

//     // Выводим площади поверхности всех фигур
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Surface area: " << prisms[i].surfaceArea() << endl;
//     }

//     // Находим фигуру с наименьшей площадью
//     double minArea = prisms[0].surfaceArea();
//     int minIndex = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (prisms[i].surfaceArea() < minArea)
//         {
//             minArea = prisms[i].surfaceArea();
//             minIndex = i;
//         }
//     }
//     prisms[minIndex].label = "MIN_" + prisms[minIndex].label;
//     prisms[minIndex].print();

//     // Подсчитываем количество фигур с площадью > 15
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (prisms[i].surfaceArea() > 15)
//         {
//             count++;
//         }
//     }
//     cout << count << " prisms have surface area > 15" << endl;

//     // Выводим объемы всех фигур
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Volume: " << prisms[i].volume() << endl;
//     }

//     // Сумма всех объемов
//     double totalVolume = 0;
//     for (int i = 0; i < n; i++)
//     {
//         totalVolume += prisms[i].volume();
//     }
//     cout << "Total volume: " << totalVolume << endl;

//     delete[] prisms;

//     return 0;
// }

int main()
{
    // TODO: remake this
    return 0;
}