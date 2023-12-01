// FileName : Player.c

# include "structure.h"

//store player with age validation
void StorePlayer(Player*p,int size){
	
	int i,j,age=0 ,flag=0 ;
	
	//Age validation
	printf("|_________________________________________________________________________________________________________________|\n");
	printf("\n\t\t\t\t\t | ******* AGE VALIDDATION ****** |\n"); 
	
	for (j=0; j<size;j++)
	{
		printf("\n\n\n  Enter player  %d age  \t\t\t  : ",j+1);
		scanf("%d",&age);
		fflush(stdin) ;
		
		if(55>=age && age>=15)
		{
			flag=1 ;
			printf("\n  Result  \t\t\t          : VALID PLAYER\n");
			p[j].age=age ;
		}	
		else
		{
			flag=0 ;
			printf("\n  Result \t\t\t\t         : PLAYER NOT VALID\n");
			break ;
		}
	}
	printf("|_________________________________________________________________________________________________________________|\n");

	if(flag==1)
	{
		printf("\n\n\t\t\t\t   | ***** STORING PLAYER DETAILS ***** |\n");
		for (i=0; i<size;i++)
		{
			p[i].jersyNo = i+1 ;
			fflush(stdin);
			printf("\n\n PLAYER %d DETAILS  : \n",i+1);
			printf("\n\n Jersy number \t\t  : %d",p[i].jersyNo);
			fflush(stdin);
			printf("\n\n Enter player name \t  : ");
			scanf("%[^\n]s",&p[i].playerName);
			fflush(stdin);
			printf("\n Enter player role  \t  : ");
			scanf("%[^\n]s",&p[i].role);
			fflush(stdin);
			printf("\n Enter player team   \t  : ");
			scanf("%[^\n]s",&p[i].team);
			fflush(stdin);
			printf("\n Enter  country name      : ");
			scanf("%[^\n]s",&p[i].countryName);
			fflush(stdin);
			printf("\n Enter  mobile number     : ");
			scanf("%lld",&p[i].mobNo);
			fflush(stdin);
			printf("\n Enter player runs \t  : ");
			scanf("%ld",&p[i].runs);
			fflush(stdin);
			printf("\n Enter player wickets \t  : ");
			scanf("%ld",&p[i].wickets);
			fflush(stdin);
			printf("\n Enter player matches \t  : ");
			scanf("%ld",&p[i].matches);
			fflush(stdin);
			}
				printf("\n\n\t\t\t   PLAYER DETAILS STORED SUCCESSFULLY....!\n");
	}
}


//Display
void DisplayPlayer(Player* p,int size)
{
	int i ;
	printf("\n\n\t\t\t\t\t\t| ************** DISPLAY PLAYER ************** |\n");
	printf("\t\t |__________________________________________________________________________________________________________|\n");
	printf("\t\t | JERSYNO |NAME\t|  ROLE\t  | TEAM | COUNTRY | AGE |   MOB.NO.  | RUNS | MATCHES | WICKETS |\n");
	printf("\t\t |__________________________________________________________________________________________________________|\n");
	
	for(i=0;i<size;i++)
	{
		printf("\t\t |   %d\t   | %s | %s | %s  | %s   | %d  | %d | %d | %d    | %d\t |\n",p[i].jersyNo,p[i].playerName,p[i].role,p[i].team,p[i].countryName,p[i].age,p[i].mobNo,p[i].runs,p[i].matches,p[i].wickets);
		printf("\t\t |__________________________________________________________________________________________________________|\n");
	}	
}
//search
void SearchPlayer(Player* p,int size)
{
	int i,jersynum,flag=0;
	
	printf("\n\n ENTER JERSY NUMBER OF A PLAYER  \t : ");
	scanf("%d",&jersynum);
	fflush(stdin);
	
	for(i=0;i<size;i++)
	{
		if(jersynum == p[i].jersyNo)
		{
			flag=1 ;
			printf("\n\n\t\t\t\t\t\t| ************** Search player ************** |\n");
			printf("\t\t |__________________________________________________________________________________________________________|\n");
			printf("\t\t | JERSYNO |NAME\t|  ROLE\t  | TEAM | COUNTRY | AGE |   MOB.NO.  | RUNS | MATCHES | WICKETS |\n");
			printf("\t\t |__________________________________________________________________________________________________________|\n");
			printf("\t\t |___________________________________________________________________________________________________________|\n");
			printf("\t\t |   %d\t   | %s | %s | %s  | %s   | %d  | %d | %d | %d    | %d\t |\n",p[i].jersyNo,p[i].playerName,p[i].role,p[i].team,p[i].countryName,p[i].age,p[i].mobNo,p[i].runs,p[i].matches,p[i].wickets);
			printf("\t\t |__________________________________________________________________________________________________________|\n");
	
			break ;
		}
		
	}
		if(flag==1)
			printf("\n\n\t\t\t\t SEARCH SUCCESSFUL....!");
		else
			printf("\n\t NO SUCH PLAYER FOUND...\n\n");
}

//update
void UpdatePlayer(Player *p,int size)
{
	int i,jersynum,age,ch=0,flag=0;
	
	printf("\n\n ENTER JERSY NUMBER OF A PLAYER   : ");
	scanf("%d",&jersynum);
	fflush(stdin);
	
	printf("\n |__________________________________________________________________________________________________________|\n");		
	printf("\n\n \t\t\t\t| ********** UPDATING PLAYER *********** |");
	
	for(i=0;i<=size ;i++)
	{
		if (jersynum == p[i].jersyNo)
		{
			flag=1 ;
			break ;	
		}
		else
		printf("\n JERSY NUMBER NOT FOUND  !\n");
	}
	
	if(flag==1)
	{

		printf("\n\n Menu \t:\n\n 1.Player name\n 2.role\n 3.team\n 4.countryName\n 5.mobNo\n 6.runs\n 7.age\n 8.wickets  9.matches");
		printf("\n\n\n Please enter your choice to update   : ");
		scanf("%d",&ch);
		fflush(stdin);
		
		switch(ch)
		{
			case 1 :      printf("\n Enter new name  \t\t                : ");
						  gets(p[i].playerName);
						  fflush(stdin);
						  break;
			case 2 :      printf("\n Enter new role    \t\t              : ");
						  gets(p[i].role);
						  fflush(stdin);
						  break;
			case 3 :      printf("\n Enter new  team   \t\t              : ");
						  gets(p[i].team);
						  fflush(stdin);
						  break;
			case 4 :      printf("\n Enter new countryname                : ");
						  gets(p[i].countryName);
						  fflush(stdin);
						  break;
			case 5 :      printf("\n Enter new mobile number               : ");
						  scanf("%lld",&p[i].mobNo);
						  fflush(stdin);
						  break;
			case 6 :      printf("\n Enter new runs                        : ");
						  scanf("%ld",&p[i].runs);
						  fflush(stdin);
						  break;
			case 7 :      printf("\n Enter new age (age should be in between (15 to 55)) : ");
						  scanf("%ld",&age);
						  fflush(stdin);
						  if (55<age || age<15)
						  	printf("\n\t\t\t\t Age not valid");
						  else
							p[i].age=age  ;
						  break ;
			case 8 :      printf("\n Enter new total of wickets                         : ");
						  scanf("%ld",&p[i].wickets);
						  fflush(stdin);
						  break;
			case 9 :      printf("\n Enter new total of matches                         : ");
						  scanf("%ld",&p[i].matches);
						  fflush(stdin);
						  break;
		}
			
		printf("\n\n RESULT\t\t\t          : UPDATED SUCCESSFULLY...!");
	}
}

void DeletePlayer(Player*p,int* size)
{
	int i,jersynum,j,flag=0;
	
	printf("\n\n ENTER JERSY NUMBER OF A PLAYER  \t : ");
	scanf("%d",&jersynum);
	fflush(stdin);

	for(i=0; i <*size; i++)
	{
		if(p[i].jersyNo==jersynum)
		{
			flag=1 ;
			for(j=0; j<(*size-1); j++)
				p[j]=p[j+1];
		}
	}
		if(flag==1)
		{
			printf("\n\n RESULT\t\t\t\t\t    : Sucessfully Deleted..!");
			*size= *size-1 ;
		}
		else
			printf("\n\n RESULT\t\t\t\t\t    : No such player found..!");	
}
