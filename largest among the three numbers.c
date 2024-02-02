#include<stdio.h>


int main()
{	
	//wap to find the largest among threee numbers.
	int a,b,c;

	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b && b>c)
	{

		printf("%d is the greatest",a);
	}
	else if(b>a && b>c){
		printf("%d is the greatest",b);
	}else{
		printf("%d is the greatest",c);
	}





	return 0;
}