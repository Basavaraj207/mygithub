#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter the n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

    if(i<n)
        {
            printf("%d!+",i);
            fact=fact*i;
        }
        if(i==n)
        {
            printf("%d!",i);
            fact=fact*i;
        }
    }
    printf("factorial of n: %d\n",fact);
}