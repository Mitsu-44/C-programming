#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>


//Rock paper and scissors game in c.
int main()
 {
 	srand(time(NULL));
 	char game[9];
 	int ch,i;


 		pl:
 		printf("welcome to rock paper and scissors.\n");
 		printf("please enter your choice(rock,paper or scissors):");
 		scanf("%s",game);
 		int num=rand()%3+1;
 		for(i=0; i<9; i++){
 			game[i]=toupper(game[i]);
 		}

 		switch(num){
 			case 1:
 			printf("the computer chooses rock");
 			if(strcmp(game,"PAPER")==0){
 				printf("\nYOU win ");
 			}else if(strcmp(game,"SCISSORS")==0){
 				printf("\n computer wins.");

 			}else{
 				printf("\nit's a tie.");
 			}
 			break;

 			case 2:
 			printf("the computer chooses scissors.");
 			if(strcmp(game,"ROCK")==0){
 				printf("\nYOU win ");
 			}else if(strcmp(game,"PAPER")==0){
 				printf("\n computer wins.");

 			}else{
 				printf("\nit's a tie.");
 			}
 			break;

 			case 3:
 			printf("the computer chooses paper.");
 			if(strcmp(game,"SCISSORS")==0){
 				printf("\nYOU win ");
 			}else if(strcmp(game,"ROCK")==0){
 				printf("\n computer wins.");

 			}else{
 				printf("\nit's a tie.");
 			}
 			break;

 		}
 		printf("\ndo you want to play again? press 1 to play again:");
 		
 		scanf("%d",&ch);
 		

 		if(ch==1){
 			goto pl;
 		}else{
 			printf("thank you for playing");
 		}


 return 0;
 }