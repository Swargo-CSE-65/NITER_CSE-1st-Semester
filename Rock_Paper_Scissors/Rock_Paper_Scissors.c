```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    srand(time(NULL));

  
    printf("\n Rock Paper Scissors Game\n");
  

    printf("\nChoose your option:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("\nEnter your choice: ");
    scanf("%d", &userChoice);

    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice!\n");
        return 0;
    }

    computerChoice = rand() % 3 + 1;

    printf("\nYou chose: ");

    switch (userChoice) {
        case 1:
            printf("Rock\n");
            break;

        case 2:
            printf("Paper\n");
            break;

        case 3:
            printf("Scissors\n");
            break;
    }

    printf("Computer chose: ");

    switch (computerChoice) {
        case 1:
            printf("Rock\n");
            break;

        case 2:
            printf("Paper\n");
            break;

        case 3:
            printf("Scissors\n");
            break;
    }

    if (userChoice == computerChoice) {
        printf("\nResult: Draw!\n");
    }
    else if (
        (userChoice == 1 && computerChoice == 3) ||
        (userChoice == 2 && computerChoice == 1) ||
        (userChoice == 3 && computerChoice == 2)
    ) {
        printf("\nResult: You Win!\n");
    }
    else {
        printf("\nResult: Computer Wins!\n");
    }

    return 0;
}

