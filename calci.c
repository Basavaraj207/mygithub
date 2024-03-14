#include <stdio.h>
int main() {
    char operator = '+';
    int num1 , num2 , result;
    printf("Enter the num1 & num2 :");
    scanf("%d%d",&num1,num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }
    printf("Result: %d\n", result);
    return 0;
}
