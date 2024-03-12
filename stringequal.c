#include<stdio.h>
void compare(char a[30],char b[30]);
main()
{
    char a[30],b[30];
    printf("Enter the first string\n");
    gets(a);
    printf("Enter the second string\n");
    gets(b);
    compare(a,b);
}
void compare(char a[30],char b[30])
{
    int i,    t;
    for( i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            t=1;
        }
        else
        {
            t=0;
        }
    }
    if(t==1)
    {
        printf("Equal\n");
    }
    else
        printf("Not equal\n");
}
