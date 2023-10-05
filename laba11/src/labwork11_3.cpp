#include <iostream>

using namespace std;

// Функция для вычисления суммы двух матриц
void addMatrices(int **matrix1, int **matrix2, int row, int col)
{
    int **result = new int *[row];
    for (int i = 0; i < row; i++)
    {
        result[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Вывод результата
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

// Функция для вычисления произведения двух матриц
void multiplyMatrices(int **matrix1, int **matrix2, int row1, int col1, int row2, int col2)
{

    // Проверка на возможность перемножения
    if (col1 != row2)
    {
        cout << "Matrices cannot be multiplied!" << endl;
        return;
    }

    int **result = new int *[row1];
    for (int i = 0; i < row1; i++)
    {
        result[i] = new int[col2];
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Вывод результата
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int row1 = 2, col1 = 3;
    // int matrix1[][3] = {{1, 2, 3}, {4, 5, 6}};

    int row2 = 3, col2 = 2;
    // int matrix2[][3] = {{7, 8, 9}, {10, 11, 12}};

    int **matrix1 = new int *[row1];
    for (int i = 0; i < row1; i++)
    {
        matrix1[i] = new int[col1];
    }

    int **matrix2 = new int *[row2];
    for (int i = 0; i < row2; i++)
    {
        matrix2[i] = new int[col2];
    }

    matrix1[0][0] = 1;
    matrix1[0][1] = 2;
    matrix1[0][2] = 3;
    matrix1[1][0] = 4;
    matrix1[1][1] = 5;
    matrix1[1][2] = 6;

    matrix2[0][0] = 7;
    matrix2[0][1] = 8;
    // matrix2[0][2] = 9;
    matrix2[1][0] = 10;
    matrix2[1][1] = 11;
    // matrix2[1][2] = 12;
    matrix2[2][0] = 11;
    matrix2[2][1] = 12;

    // Сумма матриц
    cout << "Sum of matrices:" << endl;
    addMatrices(matrix1, matrix2, row1, col1);

    // Произведение матриц
    cout << "Product of matrices:" << endl;
    multiplyMatrices(matrix1, matrix2, row1, col1, row2, col2);

    return 0;
}