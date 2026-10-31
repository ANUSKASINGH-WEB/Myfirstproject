#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess;
    int attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("================================\n");
    printf("     NUMBER GUESSING GAME\n");
    printf("================================\n");

    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");

    // Repeat until the correct number is guessed
    do
    {
        printf("guess the number guyzz: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber)
        {
            printf("Too high! Try a smaller number.\n\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too low! Try a larger number.\n\n");
        }
        else
        {
            printf("\nCongratulations! You guessed correctly!\n");
            printf("The secret number was %d.\n", secretNumber);
            printf("Total attempts: %d\n", attempts);
        }

    } while (guess != secretNumber);

    printf("\nThanks for playing!\n");

    return 0;
}