//Author: Semra Ozdemir
//Date: 6/18/23
//Purpose: Programming Assignment 3

#include<stdio.h>
#define SIZE 10

int main()
{
	//declare variables
	int numArray[SIZE], i, j, k, l;
	int menuChoice, divisibleChoice;
	int countOne = 0, countTwo = 0;

	//prompt for user input
	printf("Enter 10 numbers (separated by spaces):\n");

	//store user input in array
	for (i = 0; i < SIZE; i++){
		scanf("%d", &numArray[i]);
	}

	//start loop to display menu and execute code according to choice	
	do {	
		//display menu
		printf("\nDivisibility\n");
		printf("1. Display original numbers\n2. Find odd numbers\n3. Find numbers divisible by ?\n0. EXIT\n");

		//get menu choice
		scanf("%d", &menuChoice);

		//decide which option to do
		switch(menuChoice){
			//display original numbers			
			case 1:
				j = 0;				
				while (j < SIZE){
					printf("%d ", numArray[j]);
					j++;
				}
				break;
			//find odd numbers
			case 2: 
				//count odd numbers 
				countOne = 0;
				for (k = 0; k < SIZE; k++){
					if (numArray[k] % 2 == 1){
						countOne++;
					}
				}
				printf("%d odd values found: ", countOne);
				//display odd numbers
				for (k = 0; k < SIZE; k++){
					if (numArray[k] % 2 == 1){
						printf("%d ", numArray[k]);
					}
				}
				break;
			//display numbers divisible by ?			
			case 3: 
				countTwo = 0;
				printf("Which number should these be divisible by? ");
				scanf("%d", &divisibleChoice);
				//count divisible numbers				
				for (l = 0; l < SIZE; l++){
					if (numArray[l] % divisibleChoice == 0){
						countTwo++;
					}
				}
				printf("%d values found which are divisible by %d: ", countTwo, divisibleChoice);
				//display divisible numbers
				for (l = 0; l < SIZE; l++){
					if (numArray[l] % divisibleChoice == 0){
						printf("%d ", numArray[l]);
					}
				}
				break;
			//EXIT
			case 0:
				break;
			default:
				printf("Not a valid choice!\n");
				break;
	
		}
	} while (menuChoice != 0);	

	return 0;
}
