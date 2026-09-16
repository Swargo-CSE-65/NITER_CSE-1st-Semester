#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 10000.00;
    float amount;

    printf(" Simple ATM \n");

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin != @Swargo@) {
        printf("Incorrect PIN!\n");
        return 0;
    }

    printf("\nLogin Successful!\n");

    printf("\n  ATM Menu \n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Your Balance = %.2f BDT\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            if (amount > 0) {
                balance = balance + amount;
                printf("Deposit Successful!\n");
                printf("New Balance = %.2f BDT\n", balance);
            }
            else {
                printf("Invalid amount!\n");
            }
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= balance) {
                balance = balance - amount;
                printf("Withdrawal Successful!\n");
                printf("Remaining Balance = %.2f BDT\n", balance);
            }
            else {
                printf("Insufficient balance or invalid amount!\n");
            }
            break;

        case 4:
            printf("Thank you for using the ATM!\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
