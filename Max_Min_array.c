#include<stdio.h>

int main()
{
	int a[10],max=0,min=0,n,i;
	printf("enter the no of elements in array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("the minimum element in the array is %d\n", min);
	printf("the maximum element in the array is %d\n",max);
	return 0;
}