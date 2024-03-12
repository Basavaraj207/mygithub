#include <stdio.h>

int main() {
    int i, n, fact = 1;

    printf("Enter the n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i < n) {
            printf("%d!+", i);
            fact = fact * i;
        } else {
            printf("%d!", i);
            fact = fact * i;
        }
    }

    printf("\nFactorial of %d is: %d\n", n, fact);

    return 0;
}
