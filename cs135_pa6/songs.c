//Author: Semra Ozdemir
//Date: 7/15/23
//Purpose: PA 6 - Playlist Manager

#include<stdio.h>
#define MAXLEN 50

void seePlaylist(char p1[]);
void createPlaylist(char p2[]);
void addSong(char p3[]);

int main(){
	//declare variables 
	int choice;
	char playlistOne[MAXLEN], playlistTwo[MAXLEN], playlistThree[MAXLEN];

	do{
		//display menu
		printf("SONG PLAYLIST MANAGER\n");
		printf("1. See a playlist\n");
		printf("2. Create a playlist\n");
		printf("3. Add to a playlist\n");
		printf("0. Exit\n");
	
		scanf("%d", &choice);

		if(choice == 1){ 
			printf("Enter the name of your playlist file: ");
			scanf(" %s", playlistOne);
			seePlaylist(playlistOne);
		}
		else if(choice == 2){
			printf("Enter a name for your new playlist file: ");
			scanf(" %s", playlistTwo);
			createPlaylist(playlistTwo);
		}
		else if(choice == 3){
			printf("Enter the name of your playlist file: ");
			scanf(" %s", playlistThree);
			addSong(playlistThree);
		}
		else if(choice == 0){
			printf("Toodles!\n");
			return 0;
		}
		else{
			printf("Incorrect input!\n");
		}
	}while(1);

	return 0;
}

//function: view an existing playlist
void seePlaylist(char p1[]){
	FILE* fp1;
	fp1 = fopen(p1, "r");
	if(fp1 == NULL){
		printf("Could not open file!\n");
		return;
	}

	char playlistString[200];
	int list = 1;	
	
	while(fgets(playlistString, 200, fp1)){
		printf("%d.", list);		
		printf("%s", playlistString);
		list++;
	}	
	fclose(fp1);
	printf("\n");
}

//function: create a new playlist
void createPlaylist(char p2[]){	
	FILE* fp2;
	fp2 = fopen(p2, "w");
	if(fp2 == NULL){
		printf("Could not open file!\n");
		return;
	}
	
	char song[50];
	fgets(song, 50, stdin); //catch new-line character
	
	while(1){
		printf("Enter a song for your new playlist or 0 when playlist is complete: ");			
		fgets(song, 50, stdin);
		if(song[0]== '0' && song[1]== '\n'){
			break;		
		}
		fprintf(fp2, "%s", song);
	}
	fclose(fp2);
}

//function: add song to existing playlist
void addSong(char p3[]){
	FILE* fp3;
	fp3 = fopen(p3, "a");
	if(fp3 == NULL){
		printf("Could not open file!\n");
		return;
	}

	char song[50];
	fgets(song, 50, stdin); //catch new-line character

	while(1){
		printf("Enter a song to add to the end of your playlist or 0 when playlist is complete: ");			
		fgets(song, 50, stdin);
		if(song[0]== '0' && song[1]== '\n'){
			break;		
		}
		fprintf(fp3, "%s", song);
	}
	fclose(fp3);
}

