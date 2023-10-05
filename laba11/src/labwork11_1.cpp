#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// a) Функция для вывода матрицы
void printMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// b) Функция для ввода матрицы с клавиатуры
void inputMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// c) Функция для заполнения матрицы случайными числами
void fillRandom(int **matrix, int rows, int cols)
{
    srand(time(NULL));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 100;
        }
    }
}

// d) Функция для создания матрицы и заполнения случайными числами
int **createRandomMatrix(int rows, int cols)
{
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    fillRandom(matrix, rows, cols);
    return matrix;
}

// e) Функция для получения среднего арифметического элементов матрицы
double getAverage(int **matrix, int rows, int cols)
{
    double sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum / (rows * cols);
}

// f) Функция для получения массива минимальных элементов столбцов
int *getMinColumnElements(int **matrix, int rows, int cols)
{
    int *min = (int *)malloc(cols * sizeof(int));
    for (int j = 0; j < cols; j++)
    {
        min[j] = matrix[0][j];
        for (int i = 1; i < rows; i++)
        {
            if (matrix[i][j] < min[j])
            {
                min[j] = matrix[i][j];
            }
        }
    }
    return min;
}

// g) Сортировка первого столбца методом вставок
void insertSortColumn(int **matrix, int rows, int cols)
{
    for (int i = 1; i < rows; i++)
    {
        int temp = matrix[i][0];
        int j = i - 1;
        while (j >= 0 && matrix[j][0] > temp)
        {
            matrix[j + 1][0] = matrix[j][0];
            j--;
        }
        matrix[j + 1][0] = temp;
    }
}

// h) Сортировка последней строки методом выбора по убыванию
void selectSortRow(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < cols; j++)
        {
            if (matrix[rows - 1][j] > matrix[rows - 1][maxIndex])
            {
                maxIndex = j;
            }
        }
        int temp = matrix[rows - 1][i];
        matrix[rows - 1][i] = matrix[rows - 1][maxIndex];
        matrix[rows - 1][maxIndex] = temp;
    }
}

// i) Сортировка главной диагонали пузырьком по убыванию
void bubbleSortDiagonal(int **matrix, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (matrix[j][j] < matrix[j + 1][j + 1])
            {
                int temp = matrix[j][j];
                matrix[j][j] = matrix[j + 1][j + 1];
                matrix[j + 1][j + 1] = temp;
            }
        }
    }
}

// j) Бинарный поиск элемента на главной диагонали
int binarySearchDiagonal(int **matrix, int size, int x)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (matrix[mid][mid] == x)
        {
            return mid;
        }
        if (matrix[mid][mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{

    // Тестирование функций

    int rows = 3, cols = 4;

    // Создание и вывод матрицы
    int **matrix = createRandomMatrix(rows, cols);
    printMatrix(matrix, rows, cols);

    // Ввод матрицы
    int **matrix2 = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        matrix2[i] = (int *)malloc(cols * sizeof(int));
    }
    inputMatrix(matrix2, rows, cols);

    // Получение среднего арифметического
    printf("Среднее арифметическое: %.2f\n", getAverage(matrix2, rows, cols));

    // Получение минимальных элементов столбцов
    int *minCols = getMinColumnElements(matrix2, rows, cols);
    for (int i = 0; i < cols; i++)
    {
        printf("%d ", minCols[i]);
    }
    printf("\n");

    // Сортировка первого столбца
    insertSortColumn(matrix2, rows, cols);
    printMatrix(matrix2, rows, cols);

    // Сортировка последней строки
    selectSortRow(matrix2, rows, cols);
    printMatrix(matrix2, rows, cols);

    // Сортировка главной диагонали
    int size = 3;
    int **matrix3 = createRandomMatrix(size, size);
    printMatrix(matrix3, size, size);
    bubbleSortDiagonal(matrix3, size);
    printMatrix(matrix3, size, size);

    // Бинарный поиск на диагонали
    int x = matrix3[1][1];
    int index = binarySearchDiagonal(matrix3, size, x);
    if (index != -1)
    {
        printf("Элемент %d найден по индексу %d\n", x, index);
    }
    else
    {
        printf("Элемент не найден\n");
    }

    return 0;
}