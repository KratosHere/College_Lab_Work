#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area; // Where a, b, c are the sides of the triangle

    // Input the lengths of the sides of the triangle
    printf("Enter Side A of the Triangle: ");
    scanf("%f", &a);

    printf("Enter Side B of the Triangle: ");
    scanf("%f", &b);

    printf("Enter Side C of the Triangle: ");
    scanf("%f", &c);

    // Calculate the semi-perimeter
    s = (a + b + c) / 2;

    // Check if the sides can form a triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate the area using Heron's formula
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("The entered sides do not form a valid triangle.\n");
    }

    return 0;
}
