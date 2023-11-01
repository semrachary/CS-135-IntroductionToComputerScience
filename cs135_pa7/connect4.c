//Author: Semra Ozdemir
//Date: 7/23/23
//Purpose: PA7 - Connect 4

#include<stdio.h>

#define MAX_LEN 20
#define ROWS 6
#define COLS 7
#define MAX_MOVES 42
#define FILE_NAME "saved_game.txt"

void initializeBoard(char[][COLS], int, int);
void getNames(char[], char[]);
void sayTurns(char[], char[]);
void displayBoard(char[][COLS], int, int);
void promptForMove(int, char[], char[]);
void getMove(int*); 
int checkMove(int, char[][COLS]);
void markBoard(int, int, int, char[][COLS]);
int checkForWinner(char[][COLS], char[], char[]);
int switchTurn(int);
void uploadBoard(FILE*, char[][COLS]);
int findMoveCount(char[][COLS]);
int determineTurn(char[][COLS]);


int main(){
	char board[ROWS][COLS];
	int choice, turn, playerMove, convertedMove, moveCount, foundWinner;
	char playerOne[MAX_LEN], playerTwo[MAX_LEN];
	int successfulMove;


	do{
		//display menu
		printf("***CONNECT 4***\n");
		printf("1. Play New Game\n");
		printf("2. Play Existing Game\n");
		printf("0. EXIT\n");
		
		//get choice
		printf("Enter your choice: ");
		scanf("%d", &choice);
		

		//if player chooses option 1: new game
		if(choice == 1){
			initializeBoard(board, ROWS, COLS);
			getNames(playerOne, playerTwo);
			sayTurns(playerOne, playerTwo);
			displayBoard(board, ROWS, COLS);
			turn = 1;
			
			//play game
			for(moveCount = 0; moveCount < MAX_MOVES; ){				
				successfulMove=-1;
				//prompt for move until move is successful
				while(successfulMove==-1){ 
					promptForMove(turn, playerOne, playerTwo);
					getMove(&playerMove);
					convertedMove = playerMove - 1;
					//return row number if column is available or -1 if not available
					successfulMove = checkMove(playerMove, board); 
					if(successfulMove != -1){
						moveCount++;
						//mark board parameters: turn, row, column, board
						markBoard(turn, successfulMove, convertedMove, board);
						displayBoard(board, ROWS, COLS);
						foundWinner = checkForWinner(board, playerOne, playerTwo);
						if(foundWinner == 1){
							successfulMove = 1;
							moveCount = MAX_MOVES;	
						}
						turn = switchTurn(turn);
					}
					else{
						printf("Enter a valid move!\n");
					}
				}	
			}
			if(moveCount == MAX_MOVES && foundWinner == 0){
				printf("It's a tie!\n");	
			}
		}
		//if player chooses option 2: load game		
		if(choice == 2){ 
			//load board
			FILE* fp;
			fp = fopen(FILE_NAME, "r");
			if(fp == NULL){
				printf("Cannot open file!\n:");
				return 0;
			}
			printf("Loaded!\n");
			uploadBoard(fp, board);
			fclose(fp);
						
			//get names, say turns, display board
			getNames(playerOne, playerTwo);
			sayTurns(playerOne, playerTwo);
			displayBoard(board, ROWS, COLS);
			
			//determine move count and turn
			moveCount = findMoveCount(board);
			turn = determineTurn(board);
			
			//play game
			for(; moveCount < MAX_MOVES; moveCount++){				
				successfulMove=-1;
				//prompt for move until move is successful
				while(successfulMove==-1){ 
					promptForMove(turn, playerOne, playerTwo);
					getMove(&playerMove);
					convertedMove = playerMove - 1;
					//returns row number if column is available or -1 if not available
					successfulMove = checkMove(playerMove, board); 
					if(successfulMove != -1){
						//row, column(i.e. move), board
						markBoard(turn, successfulMove, convertedMove, board);
						displayBoard(board, ROWS, COLS);
						foundWinner = checkForWinner(board, playerOne, playerTwo);
						if(foundWinner == 1){
							successfulMove = 1;
							moveCount = MAX_MOVES;	
						}
						turn = switchTurn(turn);
					}
					else{
						printf("Enter a valid move!\n");
					}
				}	
			}
			if(moveCount == MAX_MOVES && foundWinner == 0){
				printf("It's a tie!\n");	
			}
		}
		//if player chooses option 0: exit
		if(choice == 0){
			printf("Bye!\n");
			return 0;
		}		
		
	}while(1);

	return 0;
}

void initializeBoard(char boardGame[][COLS], int rowSize, int colSize){
	for(int row = 0; row < rowSize; row++){
		for(int col = 0; col < colSize; col++){
			boardGame[row][col] = ' ';
		}
	}
}

void getNames(char player1[], char player2[]){
	printf("Player 1, enter your name: ");
	scanf(" %s", player1);
	printf("Player 2, enter your name: ");
	scanf(" %s", player2);
	printf("*********************\n");
}

void sayTurns(char player1[], char player2[]){
	printf("%s, you'll be X's\n", player1);
	printf("%s, you'll be O's\n", player2);
}

void promptForMove(int turn, char player1[], char player2[]){
	if(turn == 1){		
		printf("%s - Enter your move: ", player1);
	}
	if(turn == 2){
		printf("%s - Enter your move: ", player2);
	}
}

void getMove(int *move){
	int currentMove;
	scanf("%d", &currentMove);
	*move = currentMove;
}

void displayBoard(char boardGame[][COLS], int rowSize, int colSize){
	printf("---------------------\n");
	printf("[1][2][3][4][5][6][7]\n");
	printf("---------------------\n");

	for(int row = 0; row < rowSize; row++){
		for(int col = 0; col < colSize; col++){
			printf("[%c]", boardGame[row][col]);
		}
		printf("\n");
	}
	
	printf("---------------------\n");
	printf("[1][2][3][4][5][6][7]\n");
}

int checkMove(int move, char boardGame[][COLS]){
	char convertedMove = move - 1;	
	if(move <= 0 || move > 7 ){
		return -1;
	}
	else{
		for(int r=ROWS; r>=0; r--){
			if(boardGame[r][convertedMove]==' '){
				return r;
			}
		}
		return -1;
	}
	return -1;
}


void markBoard(int playerTurn, int row, int col, char boardGame[][COLS]){
	
	if(playerTurn == 1){	
		boardGame[row][col] = 'X';
	}
	else if(playerTurn == 2){
		boardGame[row][col] = 'O';
	}
	
}		

int switchTurn(int turn){
	if(turn == 1){
		return 2;
	}
	else if(turn == 2){
		return 1;				
	}
}				

int checkForWinner(char boardGame[][COLS], char player1[], char player2[]){
	char start;	

	//check for horizontal win
	for(int r = 0; r < 6; r++){
		for(int c = 0; c < 4; c++){
			start = boardGame[r][c];
			if(start != ' ' && boardGame[r][c+1] == start && boardGame[r][c+2] == start && boardGame[r][c+3] == start){
				if(start == 'X'){
					printf("%s, you win!\n", player1);
				}
				else{
					printf("%s, you win!\n", player2);
				}		
				return 1;
			}
		}
	}
	
	//check for vertical win
	for(int r = 0; r < 3; r++){
		for(int c = 0; c < 6; c++){
			start = boardGame[r][c];
			if(start != ' ' && boardGame[r+1][c] == start && boardGame[r+2][c] == start && boardGame[r+3][c] == start){ 
				if(start == 'X'){
					printf("%s, you win!\n", player1);
				}
				else{
					printf("%s, you win!\n", player2);
				}		
				return 1;
			}
		}
	}
	//check for left-to-right (going down) diagonal win
	for(int r = 0; r < 3; r++){
		for(int c = 0; c < 4; c++){
			start = boardGame[r][c];
			if(start != ' ' && boardGame[r+1][c+1] == start && boardGame[r+2][c+2] == start && boardGame[r+3][c+3] == start){
				if(start == 'X'){
					printf("%s, you win!\n", player1);
				}
				else{
					printf("%s, you win!\n", player2);
				}		
				return 1;
			}
		}
	}
	//check for right-to-left (going down) diagonal win
	for(int r = 0; r < 3; r++){
		for(int c = 6; c > 2; c--){
			start = boardGame[r][c];
			if(start != ' ' && boardGame[r+1][c-1] == start && boardGame[r+2][c-2] == start && boardGame[r+3][c-3] == start){
				if(start == 'X'){
					printf("%s, you win!!!\n", player1);
				}
				else{
					printf("%s, you win!!!\n", player2);
				}		
				return 1;
			}
		}
	}				

	return 0;
}

void uploadBoard(FILE* fptr, char boardGame[][COLS]){
	int countXO = 0;
	char value1, value2, value3, value4, value5, value6, value7, temp;	
	for(int row = 0; row < ROWS; row++){
		fscanf(fptr, "%c%c%c%c%c%c%c%c", &value1, &value2, &value3, &value4, &value5, &value6, &value7, &temp);
			boardGame[row][0] = value1;
			boardGame[row][1] = value2;
			boardGame[row][2] = value3;
			boardGame[row][3] = value4;
			boardGame[row][4] = value5;
			boardGame[row][5] = value6;
			boardGame[row][6] = value7;	
	}		
}

int findMoveCount(char boardGame[][COLS]){
	int count = 0;
	for(int r = 0; r < ROWS; r++){
		for(int c = 0; c < COLS; c++){
			if(boardGame[r][c] == 'X' || boardGame[r][c] == 'O'){
				count++;
			}
		}
	}
	return count;
}

int determineTurn(char boardGame[][COLS]){
	int xCount = 0, oCount = 0;
	for(int r = 0; r < ROWS; r++){
		for(int c = 0; c < COLS; c++){
			if(boardGame[r][c] == 'X'){
				xCount++;
			}
			else if(boardGame[r][c] == 'O'){
				oCount++;
			}
		}
	}

	if(xCount > oCount){
		return 2;
	}
	else if(oCount > xCount){
		return 1;
	}
	else if(xCount = oCount){
		return 1;
	}
}
	
		


	


	
