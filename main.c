#include <stdio.h>

int main() {
    float math, science, english;
    float total, average;
    char grade;

    // Taking input for the 3 subjects
    printf("Enter marks for Mathematics: ");
    scanf("%f", &math);

    printf("Enter marks for Science: ");
    scanf("%f", &science);

    printf("Enter marks for English: ");
    scanf("%f", &english);

    // 1. Calculating Total and Average
    total = math + science + english;
    average = total / 3.0;

    // 2. Determining the Grade based on Average Range
    if (average >= 80 && average <= 100) {
        grade = 'A';
    } else if (average >= 70 && average < 80) {
        grade = 'B';
    } else if (average >= 60 && average < 70) {
        grade = 'C';
    } else if (average >= 50 && average < 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Printing the processed results
    printf("\nTotal: %.0f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    // 3. Checking Pass / Fail Rule (IMPORTANT)
    // PASS if ALL subjects are >= 40. If ANY subject is < 40, it's a FAIL.
    if (math >= 40 && science >= 40 && english >= 40) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}
