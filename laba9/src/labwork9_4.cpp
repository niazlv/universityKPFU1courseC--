#include <iostream>

void matrix4x4()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            std::cout << '*';
        std::cout << std::endl;
    }
}

void matrixNxN()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << '*';
        std::cout << std::endl;
    }
}

void matrixNxN_adv()
{
    int n, m;
    std::cin >> n;
    std::cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << '*';
            for (int z = 0; z < m; z++)
                std::cout << ' ';
        }
        std::cout << std::endl;
    }
}

void matrixNxN_chess()
{
    int n, m;
    std::cin >> n;
    std::cin >> m;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << '*';
            for (int z = 0; z < m; z++)
                std::cout << ' ';
        }
        for (int x = 0; x <= m; x++)
            std::cout << std::endl;
    }
}

int main()
{
    int choose;
    std::cin >> choose;
    if (choose == 1)
        matrix4x4();
    if (choose == 2)
        matrixNxN();
    if (choose == 3)
        matrixNxN_adv();
    if (choose == 4)
        matrixNxN_chess();
    return 0;
}