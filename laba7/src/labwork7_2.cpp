#include <iostream>

const int ROWS = 3;
const int COLS = 4;

void inputMatrix(int matrix[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void findMin(int matrix[][COLS], int &minValue, int &row, int &col)
{
    minValue = matrix[0][0];
    row = 0;
    col = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] < minValue)
            {
                minValue = matrix[i][j];
                row = i;
                col = j;
            }
        }
    }
}

void swapColumns(int matrix[][COLS], int col1, int col2)
{
    for (int i = 0; i < ROWS; i++)
    {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}

void printMatrix(int matrix[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void colSums(int matrix[][COLS], int x[])
{
    for (int j = 0; j < COLS; j++)
    {
        x[j] = 0;
        for (int i = 0; i < ROWS; i++)
        {
            if (matrix[i][j] > 0)
            {
                x[j] += matrix[i][j];
            }
        }
    }
}

void replaceRow(int matrix[][COLS], int row, int value)
{
    for (int j = 0; j < COLS; j++)
    {
        matrix[row][j] = value;
    }
}

int main()
{
    int matrix[ROWS][COLS];
    inputMatrix(matrix);

    int minValue, minRow, minCol;
    findMin(matrix, minValue, minRow, minCol);

    std::cout << "Минимум " << minValue << " в ячейке ["
              << minRow << "][" << minCol << "]" << std::endl;

    swapColumns(matrix, COLS - 1, minCol);

    std::cout << "Массив с перестановкой столбцов:" << std::endl;
    printMatrix(matrix);

    int x[COLS];
    colSums(matrix, x);

    std::cout << "Суммы столбцов: ";
    for (int i = 0; i < COLS; i++)
    {
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;

    replaceRow(matrix, 0, minValue);

    std::cout << "Массив с заменой первой строки:" << std::endl;
    printMatrix(matrix);

    return 0;
}