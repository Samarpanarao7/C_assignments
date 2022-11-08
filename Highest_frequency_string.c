#include<stdio.h>
int main()
{
	char mainstr[20], substr;
	int i=0,j,count=0;
	printf("enter the string::\n");
	gets(mainstr);
	printf("enter the character to find the frequency::\n");
	scanf("%c", &substr);
	while(mainstr[i] != '\0'){
		i++;
	}
	for(j=0;j<i;j++){
		if(mainstr[j] == substr)
			count++;
	}
	printf("frequency of the character '%c' in the given string%s is:: %d \n",substr,mainstr,count);
	return 0;
}