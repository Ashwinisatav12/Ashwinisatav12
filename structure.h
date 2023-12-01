//Filename : structure.h


#include <stdio.h>
#include <stdlib.h>

typedef struct Player
{
	int jersyNo;
	char playerName[100];
	char role[20];
	char team [20];
	char countryName[20];
	int mobNo;
	int runs ;
	int age ;
	int wickets ;
	int matches ;
}Player;

void StorePlayer(Player*,int);
void DisplayPlayer(Player*,int);
void SearchPlayer(Player*,int);
void UpdatePlayer(Player*,int);
void DeletePlayer(Player*,int*);
