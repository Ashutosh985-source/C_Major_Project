#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(NULL));  
    secretNumber = (rand() % 100) + 1;  // Number between 1 and 100

    printf("=== Guess The Number Game ===\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high! Try again.\n\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n\n");
        } else {
            printf("\n🎉 Congratulations! You guessed the correct number.\n");
            printf("The number was: %d\n", secretNumber);
            printf("Total attempts: %d\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}
