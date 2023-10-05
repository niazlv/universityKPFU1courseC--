#include <iostream>

using namespace std;

void printArray(int arr[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void diagonalArray(int arr[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
}

void decreasingArray(int arr[][10], int n)
{
    int val = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = val;
            val--;
        }
        val = n - i;
    }
}

void increasingArray(int arr[][10], int n)
{
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = val;
            val++;
        }
    }
}

void chessArray(int arr[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
}

void ringArray(int arr[][10], int n)
{
    int val = 0;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i; j < n - i; j++)
        {
            arr[i][j] = val;
            arr[j][n - i - 1] = val;
            arr[n - i - 1][n - j - 1] = val;
            arr[n - j - 1][i] = val;
        }
        val++;
    }
}

int main()
{

    int n = 5;
    int a1[10][10];
    diagonalArray(a1, n);
    cout << "Diagonal array:" << endl;
    printArray(a1, n);

    int a2[10][10];
    decreasingArray(a2, 6);
    cout << "Decreasing array:" << endl;
    printArray(a2, 6);

    int a3[10][10];
    increasingArray(a3, 5);
    cout << "Increasing array:" << endl;
    printArray(a3, 5);

    int a4[10][10];
    chessArray(a4, 8);
    cout << "Chess array:" << endl;
    printArray(a4, 8);

    int a5[10][10];
    ringArray(a5, 10);
    cout << "Ring array:" << endl;
    printArray(a5, 10);

    return 0;
}