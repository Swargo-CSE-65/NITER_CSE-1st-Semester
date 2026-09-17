```c
#include <stdio.h>

int main() {
    int choice;
    float bangla, chemistry, biology, math, physics, english, ict;
    float total, average;
    float gpa1, gpa2, gpa3, gpa4, cgpa;

    printf("Student Grade Calculator\n\n");

    printf("1. GPA Calculator\n");
    printf("2. CGPA Calculator\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        // GPA Calculator
        case 1:

            printf("\nEnter marks for Bangla: ");
            scanf("%f", &bangla);

            printf("Enter marks for Chemistry: ");
            scanf("%f", &chemistry);

            printf("Enter marks for Biology: ");
            scanf("%f", &biology);

            printf("Enter marks for Math: ");
            scanf("%f", &math);

            printf("Enter marks for Physics: ");
            scanf("%f", &physics);

            printf("Enter marks for English: ");
            scanf("%f", &english);

            printf("Enter marks for ICT: ");
            scanf("%f", &ict);

            total = bangla + chemistry + biology + math
                    + physics + english + ict;

            average = total / 7;

            printf("\nResult\n");
            printf("Total Marks = %.2f\n", total);
            printf("Average = %.2f\n", average);

            if (average >= 80) {
                printf("Grade = A+\n");
            }
            else if (average >= 75) {
                printf("Grade = A\n");
            }
            else if (average >= 70) {
                printf("Grade = A-\n");
            }
            else if (average >= 65) {
                printf("Grade = B+\n");
            }
            else if (average >= 60) {
                printf("Grade = B\n");
            }
            else if (average >= 55) {
                printf("Grade = B-\n");
            }
            else if (average >= 50) {
                printf("Grade = C+\n");
            }
            else if (average >= 45) {
                printf("Grade = C\n");
            }
            else if (average >= 40) {
                printf("Grade = D\n");
            }
            else {
                printf("Grade = F\n");
            }

            break;


        // CGPA Calculator
        case 2:

            printf("\nEnter GPA of Semester 1: ");
            scanf("%f", &gpa1);

            printf("Enter GPA of Semester 2: ");
            scanf("%f", &gpa2);

            printf("Enter GPA of Semester 3: ");
            scanf("%f", &gpa3);

            printf("Enter GPA of Semester 4: ");
            scanf("%f", &gpa4);

            cgpa = (gpa1 + gpa2 + gpa3 + gpa4) / 4;

            printf("\nCGPA Result\n");
            printf("CGPA = %.2f\n", cgpa);

            break;


        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
```
