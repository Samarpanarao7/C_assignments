#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number::\n");
	scanf("%d", &n);
	for(i=31;i>=0;i--){
		printf("%d", (n>>i)&1);
		if(i%4 == 0){
			printf(" ");
		}
	}
	printf("\n");
	int right, left;
	for(left=31,right=0;left>=right;left--,right++){
		if(((n>>left)&1)^((n>>right)&1)){
			n = n ^ (1<<left);
			n = n ^ (1<<right);
		}
	}
	for(i=31;i>=0;i--){
		printf("%d", (n>>i)&1);
		if(i%4 == 0){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}