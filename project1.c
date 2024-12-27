#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // to generate a random number 
    srand(time(0));
    // generate a random number between 1 to 100
    int randomNumber = (rand() % 100) + 1;
    // user enter number
    int guess_number;
    // how much chances you take to guess number
    int no_of_guesses = 0;
    
    do{
        printf("Enter your number:");
    scanf("%d",&guess_number);
    // if guess number is higher than actual number
    if (guess_number > randomNumber){
        printf("Lower Number Plese!\n");
    }
    // if guess number is lower than actual number
    else if(guess_number < randomNumber){
        printf("Higher Number Please!\n");
    }
    // if guess number is equal than actual number
    else if(guess_number == randomNumber){
        printf("Congratulations, you won!\n");
    }
    // make the number of guesses +1 when you guess the number
    no_of_guesses++;
    } while (randomNumber!= guess_number);// when randomNumber is not equal to guess_NUmber
    printf("you guess the number in %d guesses\n",no_of_guesses);
    return 0;
}