#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_intro(void)
{
    printf("=================================\n");
    printf("       NUMBER GUESSING GAME\n");
    printf("=================================\n");
    printf("Guess the number between 1 and 100.\n\n");
}

int get_guess(void)
{
    int guess;

    printf("Enter your guess: ");
    scanf("%d", &guess);

    return guess;
}

void give_hint(int guess, int target)
{
    if (guess < target)
        printf("Too low!\n");
    else if (guess > target)
        printf("Too high!\n");
    else
        printf("Correct!\n");
}

int main(void)
{
    int target;
    int guess;
    int attempts = 0;

    srand((unsigned int)time(NULL));
    target = rand() % 100 + 1;

    show_intro();

    do
    {
        guess = get_guess();
        attempts++;

        give_hint(guess, target);

    } while (guess != target);

    printf("\nYou found it in %d attempts!\n", attempts);
    printf("Thanks for playing.\n");

    return 0;
}
