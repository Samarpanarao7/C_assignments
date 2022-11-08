#include<stdio.h>
int main()
{
	int number,pos;
	printf("enter the number::\n");
	scanf("%d", &number);
	
	for(int i=7;i>=0;i--){
		printf("%d", (number>>i)&1);
		
	}
	printf("\n");
	for(pos=7;pos>=0;pos--){
		number = number ^ (1<<pos);
	}
	
	for(int i=7;i>=0;i--){
		printf("%d", (number>>i)&1);
		
	}
	printf("\n");
	return 0;
}