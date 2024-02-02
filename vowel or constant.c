#include<stdio.h>
#include<ctype.h>

int main(){
	//wap to check wheteher a enterd character is a vowel or a consonant.
	
char letter;
printf("enter a letter:");
scanf("%c",&letter);
letter=toupper(letter);

if(letter=='A' || letter=='E' || letter=='I' || letter=='O'|| letter=='U')
{
	printf("the given letter is a vowel");
}
else{
	printf("the given letter is a consonant");
}




	return 0;
}