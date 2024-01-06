#include<stdio.h>
#include<math.h>

int main(){
	
	float x,y,r;

	printf("enter the masses of two objects and distance between them:");
	scanf("%f%f%f",&x,&y,&r);
float f,a,g;
a=pow(0.1,10);
f=(6.6743*a*x*y)/r*r;

printf("The force of attraction is %0.2f",&f );
	return 0;
}