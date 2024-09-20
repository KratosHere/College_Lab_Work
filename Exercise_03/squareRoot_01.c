#include <stdio.h>
#include <math.h>

int main() {
    float number,squareRoot;

    printf("Enter the Number Whose SquareRoot is to found: ");
    scanf("%f",&number);

    squareRoot = sqrt(number);

    printf("Square root of %f = %f \n" , number , squareRoot);
    return 0;
}