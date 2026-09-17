
#include <stdio.h>

int main() {
    int answer;
    int score = 0;

  
    printf("SIMPLE QUIZ GAME\n");
    

    // Question 1
    printf("\n1. What is the full form of CPU?\n");
    printf("1. Central Processing Unit\n");
    printf("2. Computer Personal Unit\n");
    printf("3. Central Program Unit\n");
    printf("4. Control Processing Unit\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1) {
        printf("Correct!\n");
        score++;
    }
    else {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\n2. Which language is used for this project?\n");
    printf("1. Python\n");
    printf("2. Java\n");
    printf("3. C\n");
    printf("4. HTML\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n");
        score++;
    }
    else {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\n3. How many bits are there in 1 byte?\n");
    printf("1. 4\n");
    printf("2. 8\n");
    printf("3. 16\n");
    printf("4. 32\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n");
        score++;
    }
    else {
        printf("Wrong!\n");
    }

    // Question 4
    printf("\n4. Which symbol is used to end a C statement?\n");
    printf("1. :\n");
    printf("2. .\n");
    printf("3. ;\n");
    printf("4. ,\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n");
        score++;
    }
    else {
        printf("Wrong!\n");
    }

    // Question 5
    printf("\n5. Which function is used to display output in C?\n");
    printf("1. scanf()\n");
    printf("2. printf()\n");
    printf("3. input()\n");
    printf("4. display()\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n");
        score++;
    }
    else {
        printf("Wrong!\n");
    }

    // Final Score
    
    printf("RESULT\n");
   

    printf("Your Score = %d / 5\n", score);

    if (score == 5) {
        printf("Excellent!\n");
    }
    else if (score >= 3) {
        printf("Good Job!\n");
    }
    else {
        printf("Keep Practicing!\n");
    }

    return 0;
}

