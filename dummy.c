#include<stdio.h>

int main()
{
	int matrix[2][2], mat[2][2],matr[2][2],mul[2][2];
	int i,j;
	for(i=0; i<2; i++)
	{

		for(j=0; j<2; j++)
		{
			printf("enter the a[%d][%d] element:",i,j);
			scanf("%d",&matrix[i][j]);
			printf("enter the a[%d][%d] element of 2nd matrix:",i,j);
			scanf("%d",&mat[i][j]);
			matr[i][j]=matrix[i][j]+mat[i][j];

		}
	}
			printf("the matrix addiotion is,\n");
	for (i=0; i<2; i++){


		for(j=0; j<2; j++){
			if((i==0 && j==0) || (i==1 && j==0)){
			mul[i][j]=matrix

			printf("%d ",matr[i][j]);
		}printf("\n");
	}






	return 0;
}