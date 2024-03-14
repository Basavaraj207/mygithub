#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    printf("Original String: %s\n", str);
    printf("Reversed String: ");
    for (int i = length - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
