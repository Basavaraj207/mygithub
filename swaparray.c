#include <stdio.h>
#include <stdlib.h>

void read(int a[], int n);
void print(int a[], int n);
void swap(int a[], int n);

int main()
{
    int a[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input");
        exit(0);
    }

    read(a, n);
    printf("Original array:\n");
    print(a, n);
    swap(a, n);
    printf("Array after swapping adjacent elements:\n");
    print(a, n);

    return 0;
}

void read(int a[], int n)
{
    int i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void swap(int a[], int n)
{
    int i, temp;
    for (i = 0; i < n - 1; i +=2)
    {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
}
