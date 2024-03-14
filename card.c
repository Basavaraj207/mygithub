#include<stdio.h>

int main() {
    int num, ld, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    ld = num % 10;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    if (sum % ld == 0) {
        printf("Card is valid\n");
    } else {
        printf("Card is invalid\n");
    }

    return 0;
}
