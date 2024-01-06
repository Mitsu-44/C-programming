#include<stdio.h>

int main(){
	
	float d,f,avg;
	//distance is in km
	printf("enter the total distance travelled by bike:");
	scanf("%f",&d);

	//fuel is in litre
	printf("\nenter the total fuel consumed in that distance:");
	scanf("%f",&f);

	avg=d/f;
	printf("the average fuel consumed by the bike is %.2f litre per km",avg);






	return 0;
}