#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("===== Random Number Guessing Game =====\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    // Game loop
    while (1) {
        printf("Enter your guess: ");

        // Input validation
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input! Please enter a number.\n");

            // clear invalid characters from buffer
            while (getchar() != '\n');
            continue;
        }

        attempts++;

        if (guess > number) {
            printf("Too High! Try again.\n\n");
        }
        else if (guess < number) {
            printf("Too Low! Try again.\n\n");
        }
        else {
            printf("\n🎉 Congratulations! You guessed the correct number: %d\n", number);
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}
