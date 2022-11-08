#include<stdio.h>

int main()
{
	int rows,c=1,i,j,space;
	printf("enter the number rows you want::\n");
	scanf("%d",&rows);
	for(i=0;i<rows;i++){
		for(space=1;space<=rows-i;space++)
		printf("  ");
		for(j=0;j<=i;j++)
		{
			if(i==0 || j==0)
				c=1;
			else
				c= c*(i-j+1)/j;
			printf("%4d",c);
		}
		printf("\n");
	}
	return 0;
}