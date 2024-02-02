#include<stdio.h>
#include<math.h>
int main()
{
	//wap to solve a quadratic eqn and find its roots.

	
	int a,b,c;
	printf("compare eqn with ax2+bx+c and enter the value of a,b&c:");
	scanf("%d %d %d",&a,&b,&c);

	float x1,x2,discriminant;
	discriminant=(b*b-4*a*c);
	if(discriminant>0){
	x1=(-b+sqrt(discriminant)/(2*a));
	x2=(-b-sqrt(discriminant)/(2*a));
	printf("the roots of the eqn are %.3f %.3f",x1,x2);
	}
	else if(discriminant==0){
	x1=x2=(-b)/(2*a);
	printf("the eqn has equal roots and it is:%.3f",x1);
	}
	else{
		printf("the eqn has imaginary roots");
	}
	








	return 0;
}