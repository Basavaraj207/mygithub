#include<stdio.h>

void multimatrix(int rows, int columns, int matrix1[10][10], int matrix2[10][10], int multi[10][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            multi[i][j] = 0;
            for (int k = 0; k < columns; k++)
            {
            multi[i][j] += matrix1[i][k] * matrix2[k][j] ;
            }
        }
    }
}

void display(int rows, int columns, int matrix[10][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, columns, matrix1[10][10], matrix2[10][10], multi[10][10];

    printf("Enter the total number of rows and columns in matrix:\n");
    scanf("%d%d", &rows, &columns);

    printf("Enter the elements in the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements in the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    multimatrix(rows, columns, matrix1, matrix2, multi);

    printf("The multiplied matrix:\n");
    display(rows, columns, multi);

    return 0;
}
