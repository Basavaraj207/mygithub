#include<stdio.h>

void read(int a[20][20], int n);
void print(int a[20][20], int n);

void main() {
    int a[20][20], n;
    printf("Enter the n: ");
    scanf("%d", &n);
    read(a, n);
    print(a, n);
}

void read(int a[20][20], int n) {
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void print(int a[20][20], int n) {
    printf("Diagonal elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                printf("%d\t", a[i][j]);
                break;
            }
        }
        printf("\n");
    }
}
