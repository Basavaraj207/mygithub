#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int total_salary(char,int);
void main()
{
    char D;
    int salary;
    float total;
    printf("Enter the designation and salary :\n");
    scanf("%c%d",&D,&salary);
    total=total_salary(D,salary);
    printf("Total= %f",total);
}
int total_salary(char D,int salary)
{
    float total=0;
    switch(D)
    {
    case 'S':
        if(salary>10000&&salary<20000)
        {
            total=salary+(salary*0.05);
        }
        break;
    case 'P':
        if(salary>30000&&salary<50000)
        {
            total=salary+(salary*0.06);
        }
        break;
    case 'A':
        if(salary>60000&&salary<100000)
        {
            total=salary+(salary*0.07);
        }
    break;
    default: printf("Invalid input\n");
    break;

    }
    return total;
}
