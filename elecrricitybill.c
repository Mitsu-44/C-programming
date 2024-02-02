#include<stdio.h>

int main()
{
	//wap to calculate the electricity bill of a customer based on their usage and tariff rates.
 float ,unit,cost;
 printf("\t\t\t\t***cost of elecricity up to 20 unit is Rs.100***\n");
 printf("\t\t\t***Rs.12 per unit will be added above consumption of 20units***");
 printf("\n\t\t\tenter your unit consumed:");
 scanf("%f",&unit);

 if(unit>0 && unit<=20)
 {
 	printf("your bill is rs.100");
 }else if(unit>20){
 	cost =100+12*(unit-20);
 	printf("the bill is %.2f",cost);
 }else{
 	printf("wrong input");
 }

	return 0;
}