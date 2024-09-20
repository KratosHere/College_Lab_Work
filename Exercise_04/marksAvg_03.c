#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    int total;
    float average;

    // Input marks for 5 subjects
    printf("Enter marks for subject 1: ");
    scanf("%d", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &subject3);
    printf("Enter marks for subject 4: ");
    scanf("%d", &subject4);
    printf("Enter marks for subject 5: ");
    scanf("%d", &subject5);

    // Calculate total
    total = subject1 + subject2 + subject3 + subject4 + subject5;

    // Calculate average
    average = total / 5.0;  // Convert to float for accurate division

    // Output total and average
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);  // Show average up to 2 decimal points

    return 0;
}
