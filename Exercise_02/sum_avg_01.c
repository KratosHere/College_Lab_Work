#include <stdio.h>

// Sum and average of 3 numbers

int main() {

    float num1,num2,num3,sum,avg;

    printf("Enter First Number: ");
    scanf("%f",&num1);

    printf("Enter Second Number: ");
    scanf("%f",&num2);
    
    printf("Enter Third Number: ");
    scanf("%f",&num3);

    sum = num1 + num2 + num3;
    avg = sum / 3;
    // avg = sum / 3.0; // No problem , Same output

    printf("Sum of the Three Numbers: %f \n" , sum);
    printf("Avg of the Three Numbers: %f \n" , avg);


    return 0;
}