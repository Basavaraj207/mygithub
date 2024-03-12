#include<stdio.h>
void display_even(int n);
void display_odd(int n);
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Even natural numbers are :\n");
    display_even(n);
    printf("Odd natural numbers are :\n");
    display_odd(n);

return 0;

}
void display_even(int n)
{
    int i=1;
    while(i<=n)
    {
        if(i%2==0)
            printf("%d\n",i);
        i++;
    }
}
void display_odd(int n)
{
    int i=1;
    while(i<=n)
    {
        if(i%2!=0)
            printf("%d\n",i);
        i++;
    }
}
