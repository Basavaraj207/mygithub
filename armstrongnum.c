#include<stdio.h>

int armstrong(int n);

int main() {
    int n, arm;
    printf("Enter the number:\n");
    scanf("%d", &n);
    if(n > 0) {
        arm = armstrong(n);
        if(arm == n) {
            printf("%d is an Armstrong number.\n", n);
        } else {
            printf("%d is not an Armstrong number.\n", n);
        }
    } else {
        printf("Please enter a positive number.\n");
    }
    return 0;
}

int armstrong(int n) {
    int r, s = 0;
    int temp = n; // store the original number
    while(n > 0) {
        r = n % 10;
        s += (r * r * r);
        n = n / 10;
    }
    return s;
}
