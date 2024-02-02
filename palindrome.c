#include<stdio.h>
int main()
{
	int n,a,i;
	int new_number=0,remainder;
	printf("enter a number:");
	scanf("%d",&n);
	int temp=n;
	while(temp!=0){
	remainder=temp%10;
	new_number=new_number*10+remainder;
	temp=temp/10;

	}

	printf("%d",new_number);




	return 0;
}