/*

The formula S = ut + 1/2 at^2 is for solving the distance traveled S
by a body starting from an initial speed of u at a given instant t and
is accelerated with a value of a after a given elapsed time of t.

*/

#include <stdio.h>

int main() {

    float U,T,A,S;

    printf("Enter Initial Velocity:");
    scanf("%f" , &U);

    printf("Enter Time Taken:");
    scanf("%f" , &T);

    printf("Enter Acceleration:");
    scanf("%f" , &A);

    S = (U * T) + (A * T * T) * 0.5;

    printf("Distance Travelled by the Object: %f \n" , S);

    return 0;
}