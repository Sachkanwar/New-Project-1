#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;


    int guessed_number;
    int number_of_guesses = 0;

    do {
    printf("Guess your number \n ");
    scanf("%d", &guessed_number);

    if(guessed_number<randomNumber){
        printf("Try a bigger number\n");
    }

    else if(guessed_number>randomNumber){
        printf("Try a smaller number\n");
    }

    else{
        printf("Congrats!!!! You guessed the number correctly.\n");
    }

    number_of_guesses++;
    printf("Your number of guesses are %d \n", number_of_guesses);}
    while(guessed_number!=randomNumber);
    
     return 0;
}
