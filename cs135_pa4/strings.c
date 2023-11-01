//PA 4 - String Library
//DO NOT CHANGE THE MAIN FUNCTION
//DO NOT CHANGE THE FUNCITON PROTOTYPES
//Complete the function definitions down below
//Author: Semra Ozdemir
//Date: 07/02/2023

#include<stdio.h>
#define MAX_STRING 100

int stringLength(char[]);
void stringCopy(char[], char[]);
void stringSwap(char[], char[]);
int stringCompare(char[], char[]);

int main(){
	char string1[MAX_STRING], string2[MAX_STRING];

	printf("Please enter your first string: ");
	fgets(string1, MAX_STRING, stdin);
	string1[stringLength(string1) - 1] = '\0';

	printf("Please enter your second string: ");
	fgets(string2, MAX_STRING, stdin);
	string2[stringLength(string2) - 1] = '\0';

 	printf("STRINGS\n");
 	printf("%s\n", string1);
 	printf("%s\n", string2);

 	printf("\nSWAP\n");
 	stringSwap(string1, string2);
 	printf("%s\n", string1);
 	printf("%s\n", string2);
	
 	printf("\nCOMPARE\n");
 	if(stringCompare(string1, string2) == 0){
 		printf("%s & %s are the same!\n", string1, string2);
 	}
 	else{
 		printf("%s & %s are NOT the same!\n", string1, string2);	
 	}
	
	return 0;
}

//function: string length
int stringLength(char str[]){
	int length = 0;
	for(int i = 0; str[i] != '\0'; i++){
		length++;	
	}
	return length;
}

//function: string copy
void stringCopy(char source[], char dest[]){
	int i;
	for(i = 0; source[i] != '\0'; i++){
		dest[i] = source[i];	
	}
	dest[i] = '\0';
}

//function: string swap
void stringSwap(char str1[], char str2[]){
	
	int length1 = 0;
	for(int i = 0; str1[i] != '\0'; i++){
		length1++;	
	}

	int length2 = 0;
	for(int i = 0; str2[i] != '\0'; i++){
		length2++;	
	}

	char temporary[length2];

	for(int i = 0; i < length2; i++){
		temporary[i] = str2[i];	
	}

	for(int i = 0; i < length1; i++){
		str2[i] = str1[i];	
	}
	for(int i = 0; i < length2; i++){
		str1[i] = temporary[i];	
	}

	str1[length2] = '\0';
	str2[length1] = '\0';
}

//function: string compare
int stringCompare(char str1[], char compared[]){
	int length1 = 0;
	for(int i = 0; str1[i] != '\0'; i++){
		length1++;	
	}

	int length2 = 0;
	for(int i = 0; compared[i] != '\0'; i++){
		length2++;	
	}

	if(length1 == length2){
		for(int i = 0; i < length1; i++){
			if(compared[i] < str1[i]){
				return -1;
			}
			else if(compared[i] > str1[i]){
				return 1;			
			}			
		}	
		return 0; //equal
	}
	else{
		int shorter = length1;
		if(length2 < length1){
			shorter = length2;		
		}

		for(int i = 0; i < shorter; i++){
			if(compared[i] < str1[i]){
				return -1;
			}
			else if(compared[i] > str1[i]){
				return 1;			
			}			
		}
		if(length2 < length1){
			return -1;
		}
		else{
			return 1;		
		}
	}
	return 0;
}
