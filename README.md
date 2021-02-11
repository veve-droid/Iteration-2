# Iteration-2
Title: Not So Random Guesses

	
Generate a random number from 1-100. Ask the user to guess this number. Give him/her 5 tries. If in the 5th try he/she isn't able to guess the number, reveal the magic number. If he/she is able to guess the number within the allotted tries, congratulate the user. Use the "higher/lower" scheme to give clues to the user. Below is a sample file on how to generate random numbers.


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main(){
    srand((unsigned int)time(NULL));  //sets the seed of  the random() function to the system time

    int c = 0, r;

    while(c<5){
        r = rand(); //generates a random number
        printf(“%u “,r);
        c++;
    }
    printf(“\n”);
}
