#include<stdio.h>
#define ROWS 10 
#define COLUMNS 10
int main()
{
	int a[ROWS][COLUMNS],rows,colums,i,j;
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
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
	int arr[colums][rows];
	//int temp=0;
	for(i=0;i<colums;i++){
		for(j=0;j<rows;j++){
			arr[i][j] = a[j][i];
			
		}
	}
	printf("the transpose of the matrix is::\n");
	for(i=0;i<colums;i++){
		for(j=0;j<rows;j++){
			printf(" %d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}