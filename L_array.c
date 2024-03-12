#include<stdio.h>

int largestnum(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in the array\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = largestnum(arr, n);
    printf("Largest number in the array is: %d\n", largest);

    return 0;
}
