#include<stdio.h>
int smallest_num(int arr[],int n)
{  int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<max)
        {
         max=arr[i];
        }
    }
    return max;
}
int main()
{
int n;
printf("Enter the size of array:\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements in the array\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int smallest=smallest_num(arr,n);
printf("Smallest number in the array is %d:",smallest);
return 0;
}
