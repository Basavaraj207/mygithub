#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the word in upper case");
    scanf("%c",&ch);
    printf("%c",ch);
    ch=ch+32;
    printf("Lower case letter : %c",ch);
}
