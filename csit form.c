#include<stdio.h>

int main()
{
	char sc,math,result;
	char gpa;
	printf("enter Y/y for yes or N/n for no\n");
	printf("are you for science background: ");
	scanf("%c",&sc);
	printf("\n");

	printf("did you take math as your optional subject:");
	scanf(" %c",&math);
	printf("\n");
	
	printf("did you get c grade in all your subjects");
	scanf(" %c",&gpa);
	printf("\n");

	printf("P/p for pass F/f for fail\n");
	printf("did you pass the IOST entrance exam for csit:");
	scanf("%c ",&result);
	printf("\n");

	if(sc=='Y' || sc=='y' && math=='Y' || math=='y' && gpa=='y' || gpa=='Y' && result=='P' || result=='p')
	{

	printf("\nyou are eligible to study csit");



	}else 
	{
	printf("sorry you do not meet the requirement");
	}


	
	return 0;
}