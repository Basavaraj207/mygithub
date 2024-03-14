#include<stdio.h>
void number(int);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    number(num);
}
void number(int num)
{
    int count=0,n;
    while(num!=0)
    {
        n=num%10;
        count++;
        num=num/10;
    }
    printf("%d",count);

}
