/*
* DATE        : 27-4-2023
* PROJECT     : cricket player management system
* FILENAME    : main.c
*/

#include "structure.h"

//main 
void main() {
	
	 int n,choice=0 ;
	 
	printf("\n \t\t\t\t| ***********   WELCOME TO CRICKET PLAYER MANAGEMENT SYSTEM   ********|\n");
	
	printf("\n\n\n  Enter number of players you want to store     : ");
	scanf("%d",&n);
	
	Player* arr;
	arr=(Player*)malloc(sizeof(Player)*n);
	
	//creating menu for function according to choice of user
	
	
	do{
		printf("\n |______________________________________________________________________________________________________________|\n");
		printf("\n  MENU:\n\n 1.STORE PLAYER\n 2.DISPLAY PLAYER\n 3.SEARCH PLAYER\n 4.UPDATE PLAYER\n 5.DELETE PLAYER\n 6.EXIT\n");
		printf("\n\n Please enter your choice\t : ");
		scanf("%d",&choice);
		fflush(stdin); 
		
		switch (choice)
		{
			case 1:	StorePlayer(arr,n);
					break ;
				
			case 2:	DisplayPlayer(arr,n);
					break ;

			case 3:	SearchPlayer(arr,n);	
					break ;
		
			case 4: UpdatePlayer(arr,n);
					DisplayPlayer(arr,n);
					break ;
					
			case 5:	DeletePlayer(arr,&n);
					fflush(stdin);
					DisplayPlayer(arr,n);
					break ;
					
		}
		
	}while(choice!=6);
	printf("\n |______________________________________________________________________________________________________________|\n");
	
	free (arr);
}
