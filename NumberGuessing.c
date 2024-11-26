#include<stdio.h> 
#include<time.h> 
#include<stdlib.h>

int main(){
    int MAX;
    int MIN;
    int guesses = 0;
    int guess;
    int answer;

    srand(time(0));

    printf("Enter Lower limit: ");
    scanf("%d", &MIN);
    printf("Enter Upper limit: ");
    scanf("%d", &MAX);

    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Guess was too high!\n");
        }
        else if (guess < answer)
        {
            printf("Guess was too low!\n");
        }
        else {
            printf("CORRECT!\n");
        }
        guesses++;     
    } while (guess != answer);

    printf("********************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("********************");
    return 0;
}
