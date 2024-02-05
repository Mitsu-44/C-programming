#include<stdio.h>



	int main()
{

	float BMI,wt,h;
	printf("enter your height in feet: ");
	scanf("%f",&h);

	printf("\n enter your weight in kg:");
	scanf("%f",&wt);
	h=0.3*h;
	BMI=wt/(h*h);
	printf("your BMI is %.2f\n",BMI);
	if(BMI<=18.4){

		printf("You are under weight");
	}
	else if(BMI>=18.5 && BMI<=24.9)
	{
		printf("you are normal weight");
	}	
	else if(BMI>=25 && BMI<=39.9){

		printf("you are over weight");
	}else if(BMI>=40)
	{
		printf("you are obese");
	}
	else{

		printf("error 404");
	}

	return 0;
}