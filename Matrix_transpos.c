#include<stdio.h>
int main()
{
	int a[10][10],rows,colums,i,j;
	printf("enter the number of rows you want::\n");
	scanf("%d", &rows);
	printf("enter the number of colums you want::\n");
	scanf("%d",&colums);
	printf("now enter the elements of the matrix::\n");
	for(i=0;i<rows;i++){
		for(j=0;j<colums;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("the matrix is ::\n");
	for(i=0;i<rows;i++){
		for(j=0;j<colums;j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	
	printf("the transpose of the matrix is::\n");
	for(i=0;i<colums;i++){
		for(j=0;j<rows;j++){
			printf("%d", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}