#include <stdio.h>

void read(int mat[10][10], int rows, int cols);
void display(int mat[10][10], int rows, int cols);
void transposeMatrix(int mat[10][10], int rows, int cols);

int main() {
    int mat[10][10], rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    read(mat, rows, cols);

    printf("Original Matrix:\n");
    display(mat, rows, cols);

    transpose(mat, rows, cols);

    printf("Transposed Matrix:\n");
    display(mat, cols, rows);

    return 0;
}

void read(int mat[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void display(int mat[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void transpose(int mat[10][10], int rows, int cols) {
    int temp[10][10];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            temp[j][i] = mat[i][j];
        }
    }


    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            mat[i][j] = temp[i][j];
        }
    }
}
