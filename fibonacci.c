#include<stdio.h>
int main()
{
int i,f1=0,f2=1,f3,n;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Fibonacci series upto %d are :\n",n);
printf("%d\t%d\t",f1,f2);
for(i=2;i<n;i++)
{
    f3=f1+f2;
    printf("%d\t",f3);
    f1=f2;
    f2=f3;
}
return 0;
}
