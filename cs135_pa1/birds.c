//Author: Semra Ozdemir
//Date: 6/2/23
//Purpose: Programming Assignment 1

#include<stdio.h>

int main() 
{
	//declare variables for age, code, and weight by bird	
	char birdOneCode, birdTwoCode, birdThreeCode, birdFourCode;	
	int birdOneAge, birdTwoAge, birdThreeAge, birdFourAge;
	double birdOneWeight, birdTwoWeight, birdThreeWeight, birdFourWeight;

	//print data heading
	printf("***BIRD DATA***\n");	
	
	//prompt for Bird1 info
	printf("Bird 1 (age code weight): ");
	scanf(" %d %c%lf", &birdOneAge, &birdOneCode, &birdOneWeight);	
	
	//prompt for Bird2 info
	printf("Bird 2 (age code weight): ");
	scanf(" %d %c%lf", &birdTwoAge, &birdTwoCode, &birdTwoWeight);

	//prompt for Bird3 info
	printf("Bird 3 (age code weight): ");
	scanf(" %d %c%lf", &birdThreeAge, &birdThreeCode, &birdThreeWeight);

	//prompt for Bird4 info
	printf("Bird 4 (age code weight): ");
	scanf(" %d %c%lf", &birdFourAge, &birdFourCode, &birdFourWeight);

 
	
	//display table
	
	printf("\n ***Bird Data Table***   \n");	
	printf("=========================\n");
	printf("| CODE |  WEIGHT  | AGE |\n");
	printf("|-----------------------|\n");
	printf("|  %c   |%6.2lf oz |  %d  |\n", birdOneCode, birdOneWeight, birdOneAge);
	printf("|-----------------------|\n");
	printf("|  %c   |%6.2lf oz |  %d  |\n", birdTwoCode, birdTwoWeight, birdTwoAge);
	printf("|-----------------------|\n");
	printf("|  %c   |%6.2lf oz |  %d  |\n", birdThreeCode, birdThreeWeight, birdThreeAge);
	printf("|-----------------------|\n");
	printf("|  %c   |%6.2lf oz |  %d  |\n", birdFourCode, birdFourWeight, birdFourAge);
	printf("=========================\n");
	
	

	return 0;
}
