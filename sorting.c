#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void displayArray(int arr[], int n) {
    printf("Sorted Array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int series[] = {27, 66, 37, 91, 37,89};
    int n = sizeof(series) / sizeof(series[0]);

    printf("Original Series: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", series[i]);
    }
    printf("\n");

    // Sort the series
    bubbleSort(series, n);

    // Display the sorted series
    displayArray(series, n);

    return 0;
}
