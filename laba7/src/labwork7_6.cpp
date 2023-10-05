#include <iostream>

using namespace std;

int main()
{
    int M = 4;
    int N = 5;
    int K = 3;

    int matrix[M][N];

    // Инициализация матрицы
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrix[i][j] = i * N + j + 1;
        }
    }

    int sum = 0;
    int product = 1;

    for (int i = 0; i < M; i++)
    {
        sum += matrix[i][K];
        product *= matrix[i][K];
    }

    cout << "Сумма элементов столбца " << K << ": " << sum << endl;
    cout << "Произведение элементов столбца " << K << ": " << product << endl;

    return 0;
}