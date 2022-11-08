#include<stdio.h>
int main()
{
	int array[10],temp=0,i,j,n;
	printf("enter the number of element you want::\n");
	scanf("%d", &n);
	printf("enter the elements in the array:::\n");
	for(i=0;i<n;i++){
		scanf("%d", &array[i]);
	}

	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp; 

			}

		}
	}
	printf("the sorted array is :::\n");
	for(i=0;i<n;i++){
		printf("%d", array[i]);
	}

	return 0;
}