#include <stdio.h>

int main() {

    int num1, num2, num3, num4;

    printf("Enter the Four Numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Conditions for Maximum
    if ((num1 >= num2) && (num1 >= num3) && (num1 >= num4)) {
        printf("Number 1 is the Maximum: %d\n", num1);
    }
    else if ((num2 >= num1) && (num2 >= num3) && (num2 >= num4)) {
        printf("Number 2 is the Maximum: %d\n", num2);
    }
    else if ((num3 >= num1) && (num3 >= num2) && (num3 >= num4)) {
        printf("Number 3 is the Maximum: %d\n", num3);
    }
    else {
        printf("Number 4 is the Maximum: %d\n", num4);
    }

    // Conditions for Minimum
    if ((num1 <= num2) && (num1 <= num3) && (num1 <= num4)) {
        printf("Number 1 is the Minimum: %d\n", num1);
    }
    else if ((num2 <= num1) && (num2 <= num3) && (num2 <= num4)) {
        printf("Number 2 is the Minimum: %d\n", num2);
    }
    else if ((num3 <= num1) && (num3 <= num2) && (num3 <= num4)) {
        printf("Number 3 is the Minimum: %d\n", num3);
    }
    else {
        printf("Number 4 is the Minimum: %d\n", num4);
    }

    return 0;
}
