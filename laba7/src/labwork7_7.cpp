#include <iostream>

using namespace std;

int main()
{
    int M = 5;

    int A[M][M];

    // Инициализация матрицы
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j] = i * M + j + 1;
        }
    }

    for (int i = 0; i < M; i++)
    {
        int sum = 0;
        for (int j = i; j < M; j++)
        {
            sum += A[j][M - i - 1];
        }
        cout << "Сумма диагонали A" << i << "," << M - i - 1 << ": " << sum << endl;
    }

    return 0;
}