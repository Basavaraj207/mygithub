#include<stdio.h>
int main()
{
int year;
printf("Enter the year:\n");
scanf("%d",&year);

    if(year%4==0)
    {
    printf("It is a leap year\n");
    }
    else
    printf("It is not a leap year\n");

}
