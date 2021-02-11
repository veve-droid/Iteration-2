//generate

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	//variables
	int count, num;
	
	//intro
	printf("Welcome!\n\nYou have been chosen by a higher power to have the opportunity to enter another dimension!\n\nOnly those who possess clairvoyance power will prevail.\n\n");
	
	printf("First Test: A random number from 1-100 is generated. You will be given 5 trials to guess this number.Start now!\n\n");
	
	//random
	srand(time(NULL));
	int r = rand() % 101;
	
	//guess if right
	for(count=0;count<5;count++){
		printf("Enter your guess: ");
		scanf("%d", &num);
		
		if(num < r)
		
		printf("higher!\n\n");
		

		else {
			if(num > r){
			
			printf("lower!\n\n");
			
			}
			
			else {
			
			printf("Congratulations for passing the first test! You may now head on to the next level and meet master Jeremiah to guide you for the next adventure.\n\n");
			break;
			
			}
		}
		
	
	}
	
	//loser
	
	if(count=5 && num !=r){
	
	printf("Sorry, you do not possess a special power. Hence, you will be left rotten in the planet earth. The magic number is %d.\n", r);
	
	}
	
	return 0;
}
	
	
