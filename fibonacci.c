#include<stdio.h>

int main()
{
	int n,i,j=1,res=0;
	printf("upto what term do you want to generate the fibonacci series:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("\t%d",res);
		res+=j;
		j=res-j;
	}
	return 0;
}