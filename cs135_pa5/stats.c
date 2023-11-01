//Author: Semra Ozdemir
//Date: 7/7/23
//Purpose: PA5 - Stats

#include<stdio.h>
#define MAXLEN 100

void getInts(int[], int);
void getDoubles(double[], int);
void getChars(char[], int);
void displayInts(int[], int);
void displayDoubles(double[], int);
void displayChars(char[], int);
int calcIntStats(int[], int, int*, int*);
double calcDoubleStats(double[], int, double*, double*);
void calcCharStats(char[], int, char*, char*);
void displayIntStats(int[], int, int, int, int);
void displayDoubleStats(double[], int, double, double, double);
void displayCharStats(char[], int, char, char);

int main(){
	//declare variables	
	int intSize, doubleSize, charSize;
	int intArr[MAXLEN];
	double doubleArr[MAXLEN];
	char charArr[MAXLEN];
	int intMin, intMax, intAverage;
	double dMin, dMax, dAverage;
	char charMin, charMax;
	
		
	//prompt for size of each type (int, double, char)
	printf("How many whole numbers do you want to enter?: ");
	scanf("%d", &intSize);

	printf("How many decimal numbers do you want to enter?: ");
	scanf("%d", &doubleSize);

	printf("How many characters do you want to enter?: ");
	scanf("%d", &charSize);	
	
	printf("\n");

	//prompt for values of each type (int, double, char)	
	getInts(intArr, intSize);	
	printf("\n");

	getDoubles(doubleArr, doubleSize);
	printf("\n");

	getChars(charArr, charSize);	
	printf("\n");

	//Calculate and display stats for each (int, double, char)
	intAverage = calcIntStats(intArr, intSize, &intMin, &intMax);
	displayIntStats(intArr, intSize, intMin, intMax, intAverage);	
	
	
	dAverage = calcDoubleStats(doubleArr, doubleSize, &dMin, &dMax);
	displayDoubleStats(doubleArr, doubleSize, dMin, dMax, dAverage);

	calcCharStats(charArr, charSize, &charMin, &charMax);
	displayCharStats(charArr, charSize, charMin, charMax);
	
	return 0;
}

void getInts(int integerArr[], int integerSize){
	for(int i = 0; i < integerSize; i++){
		printf("Enter a whole number: ");
		scanf("%d", &integerArr[i]);
	}
}

void getDoubles(double doublesArr[], int doublesSize){
	for(int j = 0; j < doublesSize; j++){
		printf("Enter a decimal number: ");
		scanf("%lf", &doublesArr[j]);
	}
}

void getChars(char charsArr[], int charsSize){
	for(int k = 0; k < charsSize; k++){
		printf("Enter a letter: ");
		scanf(" %c", &charsArr[k]);
	}
}

void displayInts(int iArray[], int iSize){
	printf("Numbers: ");
	for(int l = 0; l < iSize; l++){
		printf("%d ", iArray[l]);
	}
}

void displayDoubles(double dArray[], int dSize){
	printf("Numbers: ");
	for(int m = 0; m < dSize; m++){
		printf("%.2lf ", dArray[m]);
	}
}

void displayChars(char cArray[], int cSize){
	printf("Letters: ");
	for(int n = 0; n < cSize; n++){
		printf("%c ", cArray[n]);
	}
}	

int calcIntStats(int inArray[], int inSize, int* inMin, int* inMax){
	*inMin = inArray[0];
	*inMax = inArray[0];
	int sum = 0, average = 0;	
	for(int o = 1; o < inSize; o++){
		if (inArray[o] < *inMin){
			*inMin = inArray[o];
		}	
	}
	for(int p = 1; p < inSize; p++){
		if (inArray[p] > *inMax){
			*inMax = inArray[p];
		}	
	}
	for(int q = 0; q < inSize; q++){
		sum += inArray[q];
	}
	average = sum / inSize;	
	return average;
} 

double calcDoubleStats(double doubArray[], int doubSize, double* doubMin, double*  doubMax){
	*doubMin = doubArray[0];
	*doubMax = doubArray[0];
	double sum = 0, average = 0;
	for(int p = 1; p < doubSize; p++){
		if(doubArray[p] < *doubMin){
			*doubMin = doubArray[p];
		}
	}
	for(int p = 1; p < doubSize; p++){
		if(doubArray[p] > *doubMax){
			*doubMax = doubArray[p];
		}
	}
	for(int p = 0; p < doubSize; p++){
		sum += doubArray[p];
	}
	average = sum / doubSize;
	return average;
}

void calcCharStats(char chArray[], int chSize, char* chMin, char* chMax){
	*chMin = chArray[0];
	*chMax = chArray[0];
	for(int q = 1; q < chSize; q++){
		if(chArray[q] < *chMin){
			*chMin = chArray[q];
		}	
	}
	for(int q = 1; q < chSize; q++){
		if(chArray[q] > *chMax){
			*chMax = chArray[q];
		}	
	}
}

void displayIntStats(int integArr[], int integSize, int integMin, int integMax, int integAverage){
	printf("WHOLE NUMBER STATS\n");	
	displayInts(integArr, integSize);
	printf("\n");
	printf("Min: %d\n", integMin);
	printf("Max: %d\n", integMax);
	printf("Average: %d", integAverage);
	printf("\n\n");	
}

void displayDoubleStats(double dblArr[], int dblSize, double dblMin, double dblMax, double dblAverage){
	printf("DECIMAL NUMBER STATS\n");
	displayDoubles(dblArr, dblSize);
	printf("\n");
	printf("Min: %.2lf\n", dblMin);
	printf("Max: %.2lf\n", dblMax);
	printf("Average: %.2lf", dblAverage);
	printf("\n\n");
}

void displayCharStats(char chrArray[], int chrSize, char chrMin, char chrMax){
	printf("LETTER STATS\n");
	displayChars(chrArray, chrSize);
	printf("\n");
	printf("Min: %c\n", chrMin);
	printf("Max: %c\n", chrMax);
	printf("\n");
}

	


