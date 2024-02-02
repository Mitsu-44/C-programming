#include<stdio.h> 
int main()
{
	/*8.grade calculaion: wap to calculate the grade of a student based on their marks in multiple subjects*/
	int i,n;
	printf("enter number of subjects:");
	scanf("%d",&n);
	int marks[n];
	for(i=1; i<=n; i++){
	printf("enter marks of student in sub%d:",i);
	scanf("%d",&marks[i]);
  }int sum=0,j=0;

  	for(i=1; i<=n; i++){
  		sum=sum+marks[i];
  		if(marks[i]<40){
  			j=j+1;
  			printf("you are fail in sub%d\n",i);
  		}

  	}
   float fm;
   fm=sum/n;
   printf("your total marks  is %.2f\n",fm);
   					if(j==0)
{
   if(fm>90)
   {
	printf("congratulations your grade is A+");
   }   
	else if(fm>=80 && fm<=90)
{
	printf("congratulations your grade is A");
}
	else if(fm>=70 && fm<80)
	{
		printf("your grade is B+");
	}
	else if(fm>=60 && fm<70)
	{
		printf("your grade is B");
	}
		else
		{
		printf("your grade is C+.");
		}
}
	else
	{
		printf("your grade is ng.");
	}
	return 0;
}