#include <stdio.h>
int main() {
    float principle , rate , time , simpleInterest;
    printf("Enter the principle amount,rate,time: ");
    scanf("%f%f%f", &principle,&rate,&time);
    simpleInterest = (principle * rate * time) / 100;
    printf("Simple Interest: %.2f\n", simpleInterest);
    return 0;
}

