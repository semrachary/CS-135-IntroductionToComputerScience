//Author: Semra Ozdemir
//Date: 06/08/23
//Purpose: Progamming Assignment 2

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//declare variables for sundae order and score
	int cherryNum;
	double score = 0;
	char startChoice, sundaeSize, sundaeFlavor, whipChoice;

	//display instructions to screen
	printf("I'd like to order a sundae, please!\nI'd like a medium chocolate sundae with three cherries and whip cream.\nAre you ready? "); 
	scanf(" %c", &startChoice);
	switch (startChoice) {
		case 'Y' : 
		case 'y' :
			system("clear");
			break;
		case 'n' :
		case 'N' : 
			printf("Okay, bye!\n");
		default : 
			printf("Incorrect input. Game over.\n");
			break;
	}

	//get order: size
	printf("What size sundae did the customer want? ");
	scanf(" %c", &sundaeSize);
	
	//check accuracy: size
	if(sundaeSize == 'M'){
		score = score + 2.5;
	}
	else if(sundaeSize == 'L'){
		score = score + 1.5;
	}
	else if(sundaeSize == 'S'){
		score = score + 1.0;
	}
	else {
		score = score + 0;
	}

	//get order: flavor
	printf("What flavor ice cream did the customer want? ");
	scanf(" %c", &sundaeFlavor);

	//check accuracy: flavor
	if(sundaeFlavor == 'C'){
		score = score + 2.5;
	}
	else if(sundaeFlavor == 'V'){
		score = score + 1;
	}
	else if(sundaeFlavor == 'S'){
		score = score + 1;
	}
	else {
		score = score + 0;
	}

	//get order: whip cream
	printf("Did the customer want whip cream? ");
	scanf(" %c", &whipChoice);

	//check accuracy: whip cream
	if(whipChoice == 'Y') {
		score = score + 2.5;	
	}
	else {
		score = score + 0;
	}
	
	//get order: cherry count
	printf("How many cherries did the customer want? ");
	scanf("%d", &cherryNum);

	//check accuracy: cherry count
	if(cherryNum == 3){
		score = score + 2.5;
	}
	else if (cherryNum > 3){
		score =	score + 1.5;
	}
	else {
		score = score + 0;
	}

	
	//print feedback: size
	if(sundaeSize == 'L'){
		printf("\nThis is not the size I ordered, but too big is fine :)\n");
	}
	else if(sundaeSize == 'S'){
		printf("\nThis was not the size I ordered...\n");
	}	
	else{
		printf("\n");
	}

	//print feedback: flavor
	if(sundaeFlavor != 'C'){
		printf("This was not the flavor I ordered...\n");
	}

	//print feedback: whip cream
	if(whipChoice == 'N'){
		printf("You missed my whip cream :(\n");
	}

	//print feedback: cherries
	if(cherryNum < 3){
		printf("I ordered more cherries than this...\n");
	}	
	else if(cherryNum > 3){
		printf("Not even close with the cherries, but too much is fine :)\n");
	}
	else{
		printf("\n");
	}
	

	//print score and comments
	printf("\nYOUR SCORE: %.2lf\n", score);
	if(score == 10){
		printf("You nailed it!\n");
	}
	else if(score <10 && score >7){
		printf("That was pretty good!\n");
	}
	else if(score <8 && score >5){
		printf("Not bad, but you could use some practice.\n");
	}
	else{
		printf("Maybe this line of work isn't for you...\n");
	}

	return 0; 
}
