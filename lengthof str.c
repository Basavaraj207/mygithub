#include<stdio.h>
int lengthstr(char str[10]);
int main()
{
    char str[10];
    int length;
    printf("Enter the string:\n");
    gets(str);
    length=lengthstr(str);
    printf("The length of string is :%d ",length);
}
int lengthstr(char str[10])
{
    int i,count=0;
    for(i=0;str[i]!=0;i++)
    {
        count++;
    }
  return count;
}
