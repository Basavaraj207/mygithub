#include <stdio.h>

void calculate(float);

int main() {
    float temp, celcius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temp);

    celcius = (5.0 / 9) * (temp - 32);
    printf("Temperature in Celsius: %.1f\n", celcius);

    calculate(celcius);

    return 0;
}

void calculate(float temp) {
    if (temp < 0) {
        printf("Freezing\n");
    } else if (temp >= 0 && temp < 10) {
        printf("Very cold\n");
    } else if (temp >= 10 && temp < 20) {
        printf("Cold\n");
    } else if (temp >= 20 && temp < 30) {
        printf("Normal\n");
    } else if (temp >= 30 && temp < 40) {
        printf("Not Hot\n");
    } else {
        printf("Hot\n");
    }
}
