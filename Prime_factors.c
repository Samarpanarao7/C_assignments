#include<stdio.h>
int main(){
	int number,count=0,i,j;
	printf("enter the number ::\n");
	scanf("%d", &number);
	printf("prime factor numbers are::\n");
	for(i=2;i<number;i++){
		if(number%i == 0){
			for(j=2;j<i;j++){
				if(i%j == 0)
					count++;
			}
			if(count==0)
				printf("%d\n",i);
				
		}
	}
	return 0;
}