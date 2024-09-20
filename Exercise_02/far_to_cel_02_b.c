#include <stdio.h>

int main() {

    float C,F;

    printf("Enter Temperature in Celsius: ");
    scanf("%f",&F);

    F = (C * 9/5) + 32;

    printf("Temperature in Fahrenheit is: %f \n", F);

    return 0;
}