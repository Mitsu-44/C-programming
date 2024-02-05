#include<stdio.h>
#include<math.h>

int main()
{
		const float G=6.67*pow(10,-10);
		float m,n,r,F;

		printf("enter the masses of the two objects in kg:");
		scanf("%f %f",&m,&n);
		printf("\n Now enter the distance between two points in meters:");
		scanf("%f",&r);

		F=(G*m*n)/pow(r,2);
		printf("\nthe force of attraction between two given bodies is %.3f Newton",F);

			



	return 0;
}