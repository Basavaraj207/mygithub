#include<stdio.h>
void main()
{
    float celsius,fahrenheit,kelvin;
    printf("Enter the value of degree celsius :\n ");
    scanf("%f",&celsius);
    fahrenheit=((9.0/5.0)*celsius)+32;
    kelvin=celsius+273;
    printf("Fahrenheit= %f",fahrenheit);
    printf("Kelvin= %f",kelvin);
}
