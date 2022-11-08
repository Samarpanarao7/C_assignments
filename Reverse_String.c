#include<stdio.h>

int main()
{
	char str[20],temp;
	int i=0,len=0;
	printf("enter the string::\n");
	scanf("%s", str);
	printf("the given string is ::%s\n",str);
	while(str[len]!= '\0'){
		len++;
	}
	len--;
	//printf("%d",len);
	while(i<len){
		temp = str[i];
		str[i]=str[len];
		str[len]=temp;
		i++;
		len--;
	}
	printf("the reverse string is %s\n",str);

}