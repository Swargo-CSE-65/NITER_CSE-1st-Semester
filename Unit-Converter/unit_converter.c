#include <stdio.h>

int main() {
    int choice;
    float value, result;

    printf(" Unit Converter \n");
    printf("1. Kilometer to Meter\n");
    printf("2. Meter to Kilometer\n");
    printf("3. Celsius to Fahrenheit\n");
    printf("4. Fahrenheit to Celsius\n");
    printf("5. Kilogram to Gram\n");
    printf("6. Gram to Kilogram\n");
    printf("7. Liter to Mili liter\n");
    printf("8. Mili Liter to Liter\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (choice) {

        case 1:
            result = value * 1000;
            printf("Result = %.2f meters\n", result);
            break;

        case 2:
            result = value / 1000;
            printf("Result = %.2f kilometers\n", result);
            break;

        case 3:
            result = (value * 9 / 5) + 32;
            printf("Result = %.2f Fahrenheit\n", result);
            break;

        case 4:
            result = (value - 32) * 5 / 9;
            printf("Result = %.2f Celsius\n", result);
            break;

        case 5:
            result = value * 1000;
            printf("Result = %.2f grams\n", result);
            break;

        case 6:
            result = value / 1000;
            printf("Result = %.2f kilograms\n", result);
            break;

         case 7:
            result = value * 1000;
            printf("Result = %.2f Mili Liter\n", result);
            break;

        case 8:
            result = value / 1000;
            printf("Result = %.2f Liter\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
