#include<stdio.h>
int main()
{
	int number,pos;
	printf("enter the number::\n");
	scanf("%d", &number);
	printf("enter the position::\n");
	scanf("%d", &pos);
	for(int i =31;i>=0;i--){
		printf("%d", (number>>i)&1);
		if(i%8==0){
			printf(" ");
		}
	}
	printf("\n");
	number = number ^ (1<<pos);
	for(int i =31;i>=0;i--){
		printf("%d", (number>>i)&1);
		if(i%8==0){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}