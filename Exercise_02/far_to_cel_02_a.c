#include <stdio.h>

int main() {

    float F,C;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&F);

    C = (F - 32) * 5/9;


    printf("Temperature in Celsius is: %f \n", C);

    return 0;
}