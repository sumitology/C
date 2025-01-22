#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void numberGuessingGame(){
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Can you guess it? Let's begin!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } 
        else if (guess < number) {
            printf("Too low! Try again.\n");
        } 
        else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);
}

int main(){
    char playAgain;
    do {
        numberGuessingGame();
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing! Goodbye.\n");
    return 0;
}
